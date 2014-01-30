//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.c
// @Project       W�rfel.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC2287M-104F
//
// @Compiler      TASKING VX-toolset
//
// @Codegenerator 1.0
//


#include "MAIN.h"




void MAIN_vInit(void)
{
  // USER CODE BEGIN (Init,2)
  //volatile unsigned int uwTemp;

  // USER CODE END

  //   globally disable interrupts
  PSW_IEN        =  0;          


  ///  -----------------------------------------------------------------------
  ///  Configuration of the System Clock:
  ///  -----------------------------------------------------------------------
  ///  - VCO clock used, input clock is connected
  ///  - input frequency is 5.00 MHz
  ///  - configured system frequency is 40.00 MHz

  MAIN_vUnlockProtecReg();     // unlock write security

  MAIN_vChangeFreq();          // load PLL control register


  //   -----------------------------------------------------------------------
  //   Initialization of the Peripherals:
  //   -----------------------------------------------------------------------

  //   initializes the Parallel Ports

  //   initializes the General Purpose Timer Unit (GPT1)
    GPT12E_KSCCFG  =  0x0003;      // Module Enable
    _nop();
    _nop();

  //   -----------------------------------------------------------------------
  //   SCU Interrupt Disable configuration:
  //   -----------------------------------------------------------------------
  SCU_INTDIS     =  0xFFFF;      // SCU Interrupt Disable Register
   //uwTemp         =  GPT12E_KSCCFG;  // dummy read to avoid pipeline effects

  //   -----------------------------------------------------------------------
  //   Initialization of the Bank Select registers:
  //   -----------------------------------------------------------------------


  //   -----------------------------------------------------------------------
  //   SCU Interrupt Source Selection configuration:
  //   -----------------------------------------------------------------------
  SCU_ISSR       =  0x0000;      // SCU Interrupt Source Select Register

  // USER CODE BEGIN (Init,3)

  // USER CODE END

  MAIN_vLockProtecReg();       // lock write security

  //   globally enable interrupts
  PSW_IEN        =  1;          

} //  End of function MAIN_vInit


//****************************************************************************
// @Function      void MAIN_vUnlockProtecReg(void) 
//
//----------------------------------------------------------------------------
// @Description   This function makes it possible to write one protected 
//                register.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          20/1/2011
//
//****************************************************************************

// USER CODE BEGIN (UnlockProtecReg,1)

// USER CODE END

void MAIN_vUnlockProtecReg(void)
{
  uword uwPASSWORD;

    SCU_SLC = 0xAAAA;                   // command 0
    SCU_SLC = 0x5554;                   // command 1

    uwPASSWORD = SCU_SLS & 0x00FF;
    uwPASSWORD = (~uwPASSWORD) & 0x00FF;

    SCU_SLC = 0x9600 | uwPASSWORD;      // command 2
    SCU_SLC = 0x0000;                   // command 3

} //  End of function MAIN_vUnlockProtecReg


//****************************************************************************
// @Function      void MAIN_vLockProtecReg(void) 
//
//----------------------------------------------------------------------------
// @Description   This function makes it possible to lock one protected 
//                register.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          20/1/2011
//
//****************************************************************************

// USER CODE BEGIN (LockProtecReg,1)

// USER CODE END

void MAIN_vLockProtecReg(void)
{
  uword uwPASSWORD;

    SCU_SLC = 0xAAAA;                   // command 0
    SCU_SLC = 0x5554;                   // command 1

    uwPASSWORD = SCU_SLS & 0x00FF;
    uwPASSWORD = (~uwPASSWORD) & 0x00FF;

    SCU_SLC = 0x9600 | uwPASSWORD;      // command 2
    SCU_SLC = 0x1800;                   // command 3; new PASSWOR is 0x00

    uwPASSWORD = SCU_SLS & 0x00FF;
    uwPASSWORD = (~uwPASSWORD) & 0x00FF;
    SCU_SLC = 0x8E00 | uwPASSWORD;      // command 4

} //  End of function MAIN_vLockProtecReg


//****************************************************************************
// @Function      void MAIN_vChangeFreq(void) 
//
//----------------------------------------------------------------------------
// @Description   This function is used to select the external crystal and
//                configure the system frequency to 100MHz/80MHz/66MHz.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          20/1/2011
//
//****************************************************************************

// USER CODE BEGIN (ChangeFreq,1)

// USER CODE END

void MAIN_vChangeFreq(void)
{
  //Scs_ErrorType Error;

  //For application and internal application resets, the complete PLL configuration could be avoided
  //The entry from application resets and internal application reset is covered in the following differentiation
  //in int/ext clock in lock/unlocked state.

  if  ((SCU_PLLSTAT & 0x0004) == 0x0004)       // fR derived from Internal clock
  {
    //Normal startup state during boot and the clock
    //has to be in the next step configured on the external crystal
    //use XTAL/VCO, count XTAL clock

    //Scs_InitTimer();       // initialize CCU6 timer T13 for SCS driver

    // perform transition from base mode to normal mode, check for error
    //Error = Scs_GoFromBaseModeToNormalMode();
    /*if(Error)
    {
      for(;;)      // this part of code should not be reached
      {
        NOP();
      }
    }*/

    if ((SCU_PLLSTAT & 0x1009) == 0x1009)      // fR derived from external crystal clock + VCO is locked
    {
      //usually after an application reset where clock need not be configured again.
      //check K2/P/N values and decide whether these values have to be adapted based on application needs.
     //NOP();
      //usually the PLL losss of Lock TRAP schould be enabled here.
    }
    else       //fR derived from external crystal clock + VCO is not locked
    {
               //estimate the K1 value and the current frequency
               //reduce K2/P/N values in steps so that the frequency
               //jumps is limited to 20MHz or factor of 5 whichever is minimum
      //NOP();
    }


  }

} //  End of function MAIN_vChangeFreq
//-----------------------------------------------------------------------------------
void port_init (void)
{
	// Display
	// Output
	P10_IOCR00	= 0x0080;
	P10_IOCR01 	= 0x0080;
	P10_IOCR02	= 0x0080;
	P10_IOCR03	= 0x0080;
	P10_IOCR04	= 0x0080;
	P10_IOCR05	= 0x0080;
	P10_IOCR06	= 0x0080;
	P10_OUT     = 0x007F; // P10_IOCR00 - P10_IOCR06 HIGH
	// Anodes
	P3_IOCR03 = 0x0080; // digit 2
	P3_IOCR04 = 0x0080; // digit 1

	// Switch
	// Cathode
	P3_IOCR01 = 0x0080;
	// Anode
	P3_IOCR00 = 0x0080;
	// Input
	P3_IOCR02 = 0x0010;

	//P3_OUT = 0x001B; //0000 0000 0001 1011
	P3_OUT = 0x000B; // 0000 0000 0000 1011 digit 2
	//P3_OUT = 0x0013; digit 1
	P3_IN = 0x0002;
}

void lightDigit1(unsigned char number) {
	P3_OUT = 0x0013;
	P10_OUT = number;
}

void lightDigit2 (unsigned char number) {
	P3_OUT = 0x000B;
	P10_OUT = number;
}
// W�rfelzust�nde 1-6


//void Wuerfel_1 (void)
//{
//	P10_OUT	= 0x003F;
//}
//void Wuerfel_2 (void)
//{
//	P10_OUT	= 0x005E;
//
//}
//
//void Wuerfel_3 (void)
//{
//	P10_OUT = 0x001E;
//
//}
//
//void Wuerfel_4 (void)
//{
//	P10_OUT = 0x004C;
//
//}
//
//void Wuerfel_5 (void)
//{
//	P10_OUT = 0x000C;
//
//}
//
//void Wuerfel_6 (void)
//{
//	P10_OUT = 0x0040;
//
//}
void Segment_0 ()
{
	P10_OUT	= 0x003F;
}
void Segment_1 ()
{
	P10_OUT	= 0x005E;

}

void Segment_2 ()
{
	P10_OUT = 0x001E;

}

void Segment_3 ()
{
	P10_OUT = 0x004C;

}

void Segment_4 ()
{
	P10_OUT = 0x000C;

}

void Segment_5 ()
{
	P10_OUT = 0x0040;

}

unsigned char Segments0To9[10]= {0x003F, 0x005E, 0x001E, 0x004C, 0x000C, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040};
//----------------------------------------------------------------------------
//Zufallssteuerung
//void timer_init (void)
//{
//	GPT12E_T3 = 0xFFFA; // Anfangswert Core Timer
//	GPT12E_T2 = 0xFFFA; // Anfangswert Auxiliary Timer
//    ///  -----------------------------------------------------------------------
//    ///  Configuration of the GPT1 Auxiliary Timer 2:
//    ///  -----------------------------------------------------------------------
//    ///  - timer 2 works in timer mode
//    ///  - external up/down control is disabled
//    ///  - prescaler factor is 8
//    ///  - up/down control bit is reset
//    ///  - timer 2 run bit is reset
//	GPT12E_T2CON = 0x0027;	// Reload Mode
//     ///  -----------------------------------------------------------------------
//     ///  Configuration of the GPT1 Core Timer 3:
//     ///  -----------------------------------------------------------------------
//     ///  - timer 3 works in timer mode
//     ///  - external up/down control is disabled
//     ///  - prescaler factor is 4
//     ///  - up/down control bit is reset
//     ///  - alternate output function T3OUT (P6.1) is disabled
//     ///  - timer 3 output toggle latch (T3OTL) is set to 0
//     ///  - timer 3 run bit is reset
//	GPT12E_T3CON = 0x0840; // Start Timer
//
//}

void timer2_init (void)
{
	GPT12E_T6 = 0xFFFA; //Anfangswert Core Timer
	GPT12E_CAPREL = 0xFF00; //Anfangswert Auxiliary Timer
	 ///  -----------------------------------------------------------------------
	     ///  Configuration of the GPT2 Core Timer 6:
	     ///  -----------------------------------------------------------------------
	     ///  - timer 6 works in timer mode
	     ///  - external up/down control is disabled
	     ///  - prescaler factor is 16
	     ///  - up/down control bit is reset
	     ///  - alternate output function T3OUT (P6.1) is disabled
	     ///  - timer 3 output toggle latch (T3OTL) is set to 0
	     ///  - timer 3 run bit is reset
	     //   - Timer 6 Reload Mode is enabled
	GPT12E_T6CON = 0x9047; // Core Timer Start

}
//void Lauflicht (void)
//{
//
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while(GPT12E_T6CON_T6OTL == 1)
//	{
//		P10_OUT = 0xFFEF; // LED 4
//	}
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while(GPT12E_T6CON_T6OTL == 1)
//	{
//		P10_OUT = 0xFFFB; // LED 2
//	}
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while (GPT12E_T6CON_T6OTL == 1)
//    {
//    	P10_OUT = 0xFFFE; // LED 0
//    }
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while (GPT12E_T6CON_T6OTL == 1)
//       {
//       	P10_OUT = 0xFFFD; // LED 1
//       }
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while (GPT12E_T6CON_T6OTL == 1)
//       {
//       	P10_OUT = 0xFFF7; // LED 3
//       }
//	while(GPT12E_T6CON_T6OTL == 0){}
//	while (GPT12E_T6CON_T6OTL == 1)
//       {
//       	P10_OUT = 0xFFDF; // LED 5
//
//	}
//
//
//
//
//
//
//}
//---------------------------------------------------------------------------


//----------------------------------------------------------------------------

//****************************************************************************
// @Function      void main(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the main function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          20/1/2011
//
//****************************************************************************

// USER CODE BEGIN (Main,1)

// USER CODE END

void main(void)
{
//unsigned int timer=0;

 // USER CODE BEGIN (Main,2)

  // USER CODE END

  MAIN_vInit();

  // USER CODE BEGIN (Main,3)
  port_init();
  timer2_init();
  while(1) {
  for(int i = 0; i < 10; i++) {
	  for(int j = 0; j < 10; j++) {
		  while(GPT12E_T6CON_T6OTL == 1) {
		  lightDigit2(Segments0To9[j]);
		  }
	  }
  while(GPT12E_T6CON_T6OTL == 1) {
	  lightDigit1(Segments0To9[i]);
  }

  }
  }


//  timer2_init();
//  // USER CODE END

//	do{
//		if (P3_IN == 0)
//		{
//			while (P3_IN == 0)
//				{
//			      Lauflicht ();
//				}
//			timer = GPT12E_T3;
//			switch (timer){
//			case 0xFFFA: Wuerfel_1();
//					break;
//			case 0xFFFB: Wuerfel_2();
//					break;
//			case 0xFFFC: Wuerfel_3();
//					break;
//			case 0xFFFD: Wuerfel_4();
//					break;
//			case 0xFFFE: Wuerfel_5();
//					break;
//			case 0xFFFF: Wuerfel_6();
//					break;
//			default: Wuerfel_1();
//			}
//		}
//		}while (1);
   // USER CODE BEGIN (Main,4)

   // USER CODE END

} //  End of function main



// USER CODE BEGIN (MAIN_General,10)



// USER CODE END

