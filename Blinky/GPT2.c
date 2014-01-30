//****************************************************************************
// @Module        General Purpose Timer Unit (GPT2)
// @Filename      GPT2.c
// @Project       Blinky.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC2210U-8F40L
//
// @Compiler      TASKING VX-toolset
//
// @Codegenerator 1.0
//
// @Description   This file contains functions that use the GPT2 module.
//
//----------------------------------------------------------------------------
// @Date          20/1/2011 16:09:34
//
//****************************************************************************

// USER CODE BEGIN (GPT2_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.h"

// USER CODE BEGIN (GPT2_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (GPT2_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (GPT2_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (GPT2_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT2_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT2_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (GPT2_General,8)

// USER CODE END



//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (GPT2_General,9)

// USER CODE END


//****************************************************************************
// @Function      void GPT2_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the GPT2 function 
//                library. It is assumed that the SFRs used by this library 
//                are in reset state. 
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

// USER CODE BEGIN (Init,1)

// USER CODE END

void GPT2_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END
  ///  -----------------------------------------------------------------------
  ///  Configuration of Timer Block Prescaler 2:
  ///  -----------------------------------------------------------------------
  ///  - prescaler for timer block 2 is 4


  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT2 Core Timer 5:
  ///  -----------------------------------------------------------------------
  ///  - timer 5 works in timer mode
  ///  - prescaler factor is 4
  ///  - up/down control bit is reset
  ///  - external up/down control is disabled
  ///  - timer 5 run bit is reset
  ///  - timer 5 remote control is disabled

  GPT12E_T5CON   =  0x0000;      // load timer 5 control register
  GPT12E_T5      =  0x0000;      // load timer 5 register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT2 Core Timer 6:
  ///  -----------------------------------------------------------------------
  ///  - timer 6 works in timer mode
  ///  - prescaler factor is 64
  ///  - up/down control bit is reset
  ///  - external up/down control is disabled
  ///  - alternate output function T6OUT () is disabled
  ///  - timer 6 output toggle latch (T6OTL) is set to 0
  ///  - CAPREL is used as a reload register for the core timer T6
  ///  - timer 6 is not cleared on a capture

  GPT12E_T6CON   =  0x8004;      // load timer 6 control register
  GPT12E_T6      =  0x0000;      // load timer 6 register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT2 CAPREL:
  ///  -----------------------------------------------------------------------
  ///  - capture T5 into CAPREL is disabled
  ///  - capture trigger from pin CAPIN
  ///  - capure is disabled
  ///  - timer 5 is not cleared on a capture

  GPT12E_T5CON  |=  0x0000;      // load timer 5 control register
  GPT12E_CAPREL  =  0x0000;      // load CAPREL register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used GPT2 Port Pins:
  ///  -----------------------------------------------------------------------



  ///  -----------------------------------------------------------------------
  ///  Configuration of the used GPT2 Interrupts:
  ///  -----------------------------------------------------------------------
  ///  timer 6 service request node configuration:
  ///  - timer 6 interrupt priority level (ILVL) = 1
  ///  - timer 6 interrupt group level (GLVL) = 0
  ///  - timer 6 group priority extension (GPX) = 0

  GPT12E_T6IC    =  0x0044;     



  // USER CODE BEGIN (GPT2_Function,3)

  // USER CODE END

  GPT12E_T6CON_T6R  =  1;        // set timer 6 run bit

} //  End of function GPT2_viCAPREL

//****************************************************************************
// @Function      void GPT2_viTmr6(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the GPT2 timer 6. 
//                It is called up in the case of over or underflow of the 
//                timer 6 register.
//                
//                Please note that you have to add application specific code 
//                to this function.
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

// USER CODE BEGIN (Tmr6,1)
uword count;
uword LED = 0xFC;
// USER CODE END

_interrupt(T6INT)  void GPT2_viTmr6(void)
{
  // USER CODE BEGIN (Tmr6,2)
	ADC0_vStartSeq0ReqChNum (0,0,0,0);
	P10_OUT = LED;
	LED <<= 1;
	LED |= 1;
	if (count == 8)
	{
		LED = 0xFC;
		count = 0;
	}
	count++;
  // USER CODE END

} //  End of function GPT2_viTmr6




// USER CODE BEGIN (GPT2_General,10)

// USER CODE END

