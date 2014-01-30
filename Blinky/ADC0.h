//****************************************************************************
// @Module        Analog / Digital Converter  (ADC0)
// @Filename      ADC0.h
// @Project       Blinky.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC2210U-8F40L
//
// @Compiler      TASKING VX-toolset
//
// @Codegenerator 1.0
//
// @Description   This file contains all function prototypes and macros for 
//                the ADC0 module.
//
//----------------------------------------------------------------------------
// @Date          20/1/2011 16:09:34
//
//****************************************************************************

// USER CODE BEGIN (ADC0_Header,1)

// USER CODE END


#ifndef _ADC0_H_

#define _ADC0_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (ADC0_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ADC0_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

//   This parameter identifies ADC0 analog channel 0
#define ADC0_ANA_0 0

//   This parameter identifies ADC0 analog channel 1
#define ADC0_ANA_1 1

//   This parameter identifies ADC0 analog channel 2
#define ADC0_ANA_2 2

//   This parameter identifies ADC0 analog channel 3
#define ADC0_ANA_3 3

//   This parameter identifies ADC0 analog channel 4
#define ADC0_ANA_4 4

//   This parameter identifies ADC0 analog channel 5
#define ADC0_ANA_5 5

//   This parameter identifies ADC0 analog channel 6
#define ADC0_ANA_6 6

//   This parameter identifies ADC0 analog channel 7
#define ADC0_ANA_7 7

//   This parameter identifies ADC0 analog channel 8
#define ADC0_ANA_8 8

//   This parameter identifies ADC0 analog channel 9
#define ADC0_ANA_9 9

//   This parameter identifies ADC0 analog channel 10
#define ADC0_ANA_10 10

//   This parameter identifies ADC0 analog channel 11
#define ADC0_ANA_11 11

//   This parameter identifies ADC0 analog channel 13
#define ADC0_ANA_13 13

//   This parameter identifies ADC0 analog channel 15
#define ADC0_ANA_15 15

//   This parameter identifies ADC0 analog channel 16
#define ADC0_ANA_16 16

//   This parameter identifies ADC0 analog channel 17
#define ADC0_ANA_17 17

//   This parameter identifies ADC0 analog channel 18
#define ADC0_ANA_18 18

//   This parameter identifies ADC0 analog channel 19
#define ADC0_ANA_19 19

//   This parameter identifies ADC0 analog channel 20
#define ADC0_ANA_20 20

//   This parameter identifies ADC0 -Source 0
#define ADC0_SOURCE_0 0

//   This parameter identifies ADC0 -Source 1
#define ADC0_SOURCE_1 1

//   This parameter identifies ADC0 -Source 2
#define ADC0_SOURCE_2 2


// USER CODE BEGIN (ADC0_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************


// USER CODE BEGIN (ADC0_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC0_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ADC0_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void ADC0_vInit(void);
void ADC0_vStartSeq0ReqChNum(ubyte ubExtTrg, ubyte ubEnIntr, ubyte ubRFill, ubyte ubChannelNum);


// USER CODE BEGIN (ADC0_Header,8)

// USER CODE END


//****************************************************************************
// @Macro         uword ADC0_uwGetResultData(RegNum) 
//
//----------------------------------------------------------------------------
// @Description   This macro returns the left aligned, 12-bit result data of 
//                the last conversion from requested result register
//                Ex- RegNum = RESULT_REG_0,for Result register 0
//                    RegNum = RESULT_REG_2,for Result register 2
//                  - For 8 bit resolution user has to right shift the result
//                    by 4 bits as shown below
//                    uwResult = ADC0_uwGetResultData(RESULT_REG_0);
//                    uwResult >>= 4;
//                  - For 10 bit resolution user has to right shift the result
//                    by 2 bits as shown below
//                    uwResult = ADC0_uwGetResultData(RESULT_REG_0);
//                    uwResult >>= 2;
//                NOTE -
//                If this macro is called before ADC0_uwGetResultChNum macro 
//                for the same result register then channel information will 
//                be lost.So always call ADC0_uwGetResultChNum macro before 
//                this macro if channel information is required.
//
//----------------------------------------------------------------------------
// @Returnvalue   Returns result data from requested result register
//
//----------------------------------------------------------------------------
// @Parameters    RegNum: 
//                RegNum: defines the result register number
//
//----------------------------------------------------------------------------
// @Date          20/1/2011
//
//****************************************************************************

#define ADC0_uwGetResultData(RegNum)  (ADC0_uwGetResultData_##RegNum)
#define ADC0_uwGetResultData_RESULT_REG_0 ((ADC0_RCR0 & 0x1000) ? ((ADC0_RESR0 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_1 ((ADC0_RCR1 & 0x1000) ? ((ADC0_RESR1 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_2 ((ADC0_RCR2 & 0x1000) ? ((ADC0_RESR2 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_3 ((ADC0_RCR3 & 0x1000) ? ((ADC0_RESR3 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_4 ((ADC0_RCR4 & 0x1000) ? ((ADC0_RESR4 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_5 ((ADC0_RCR5 & 0x1000) ? ((ADC0_RESR5 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_6 ((ADC0_RCR6 & 0x1000) ? ((ADC0_RESR6 & 0x0fff)) : 0)
#define ADC0_uwGetResultData_RESULT_REG_7 ((ADC0_RCR7 & 0x1000) ? ((ADC0_RESR7 & 0x0fff)) : 0)

//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

#define ADC0_SRN0INT    0x28

// USER CODE BEGIN (ADC0_Header,9)

// USER CODE END


#endif  // ifndef _ADC0_H_
