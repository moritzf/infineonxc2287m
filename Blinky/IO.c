//****************************************************************************
// @Module        Parallel Ports
// @Filename      IO.c
// @Project       Blinky.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC2210U-8F40L
//
// @Compiler      TASKING VX-toolset
//
// @Codegenerator 1.0
//
// @Description   This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          20/1/2011 16:09:34
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.h"

// USER CODE BEGIN (IO_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
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

// USER CODE BEGIN (IO_Function,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Function,2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P2 is used


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P5:
  ///  -----------------------------------------------------------------------
  ///  P5.0 is used as alternate input for the  Analog Input Pin (AN50)


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P6:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P6 is used


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P10:
  ///  -----------------------------------------------------------------------
  ///  P10.0 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.1 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.2 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.3 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.4 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.5 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.6 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level
  ///  P10.7 is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is low level

  ///  P10.0 - P10.3 output driver characteristic: strong driver
  ///  P10.4 - P10.7 output driver characteristic: strong driver
  ///  P10.8 - P10.11 output driver characteristic: strong driver
  ///  P10.12 - P10.12 output driver characteristic: strong driver

  ///  P10.0 - P10.3 output edge characteristic: sharp edge mode
  ///  P10.4 - P10.7 output edge characteristic: sharp edge mode
  ///  P10.8 - P10.11 output edge characteristic: sharp edge mode
  ///  P10.12 - P10.12 output edge characteristic: sharp edge mode

  P10_IOCR00     =  0x0080;      // load port control register 0
  P10_IOCR01     =  0x0080;      // load port control register 1
  P10_IOCR02     =  0x0080;      // load port control register 2
  P10_IOCR03     =  0x0080;      // load port control register 3
  P10_IOCR04     =  0x0080;      // load port control register 4
  P10_IOCR05     =  0x0080;      // load port control register 5
  P10_IOCR06     =  0x0080;      // load port control register 6
  P10_IOCR07     =  0x0080;      // load port control register 7


  // USER CODE BEGIN (IO_Function,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

