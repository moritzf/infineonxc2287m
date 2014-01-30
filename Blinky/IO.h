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
// @Description   This file contains all function prototypes and macros for 
//                the IO module.
//
//----------------------------------------------------------------------------
// @Date          20/1/2011 16:09:33
//
//****************************************************************************

// USER CODE BEGIN (IO_Header,1)

// USER CODE END



#ifndef _IO_H_
#define _IO_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (IO_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

#define IO_NO_PULL    0x00
#define IO_PULL_DOWN  0x01
#define IO_PULL_UP    0x02
#define IO_LOOP_BACK  0x03
#define IO_INVERTED_NO_PULL     0x04
#define IO_INVERTED_PULL_DOWN   0x05
#define IO_INVERTED_PULL_UP     0x06
#define IO_INVERTED_LOOP_BACK   0x07
#define IO_PUSH_PULL   0x08
#define IO_OPEN_DRAIN  0x0C
//----------------------------------------------------------------------------
// Defines for the parameter PinName
//----------------------------------------------------------------------------

#define IO_P2_0       P2_OUT_P0
#define IO_P2_3       P2_OUT_P3
#define IO_P2_4       P2_OUT_P4
#define IO_P2_5       P2_OUT_P5
#define IO_P2_6       P2_OUT_P6
#define IO_P2_7       P2_OUT_P7
#define IO_P2_8       P2_OUT_P8
#define IO_P2_9       P2_OUT_P9
#define IO_P2_10       P2_OUT_P10


#define IO_P6_0       P6_OUT_P0
#define IO_P6_1       P6_OUT_P1

#define IO_P10_0       P10_OUT_P0
#define IO_P10_1       P10_OUT_P1
#define IO_P10_2       P10_OUT_P2
#define IO_P10_3       P10_OUT_P3
#define IO_P10_4       P10_OUT_P4
#define IO_P10_5       P10_OUT_P5
#define IO_P10_6       P10_OUT_P6
#define IO_P10_7       P10_OUT_P7
#define IO_P10_8       P10_OUT_P8
#define IO_P10_9       P10_OUT_P9
#define IO_P10_10       P10_OUT_P10
#define IO_P10_12       P10_OUT_P12


//----------------------------------------------------------------------------
// Defines used by DAvE
//----------------------------------------------------------------------------

#define INIO_P2_0       P2_IN_P0
#define INIO_P2_3       P2_IN_P3
#define INIO_P2_4       P2_IN_P4
#define INIO_P2_5       P2_IN_P5
#define INIO_P2_6       P2_IN_P6
#define INIO_P2_7       P2_IN_P7
#define INIO_P2_8       P2_IN_P8
#define INIO_P2_9       P2_IN_P9
#define INIO_P2_10       P2_IN_P10

#define SETIO_P2_0       P2_OMRL = 0x0001
#define SETIO_P2_3       P2_OMRL = 0x0008
#define SETIO_P2_4       P2_OMRL = 0x0010
#define SETIO_P2_5       P2_OMRL = 0x0020
#define SETIO_P2_6       P2_OMRL = 0x0040
#define SETIO_P2_7       P2_OMRL = 0x0080

#define SETIO_P2_8       P2_OMRH = 0x0001
#define SETIO_P2_9       P2_OMRH = 0x0002
#define SETIO_P2_10       P2_OMRH = 0x0004

#define CLEARIO_P2_0       P2_OMRL = 0x0100
#define CLEARIO_P2_3       P2_OMRL = 0x0800
#define CLEARIO_P2_4       P2_OMRL = 0x1000
#define CLEARIO_P2_5       P2_OMRL = 0x2000
#define CLEARIO_P2_6       P2_OMRL = 0x4000
#define CLEARIO_P2_7       P2_OMRL = 0x8000

#define CLEARIO_P2_8       P2_OMRH = 0x0100
#define CLEARIO_P2_9       P2_OMRH = 0x0200
#define CLEARIO_P2_10       P2_OMRH = 0x0400

#define TOGGLEIO_P2_0       P2_OMRL = 0x0101
#define TOGGLEIO_P2_3       P2_OMRL = 0x0808
#define TOGGLEIO_P2_4       P2_OMRL = 0x1010
#define TOGGLEIO_P2_5       P2_OMRL = 0x2020
#define TOGGLEIO_P2_6       P2_OMRL = 0x4040
#define TOGGLEIO_P2_7       P2_OMRL = 0x8080

#define TOGGLEIO_P2_8       P2_OMRH = 0x0101
#define TOGGLEIO_P2_9       P2_OMRH = 0x0202
#define TOGGLEIO_P2_10       P2_OMRH = 0x0404

#define CONTROLIO_P2_0(Mode)       P2_IOCR00 = (P2_IOCR00 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_3(Mode)       P2_IOCR03 = (P2_IOCR03 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_4(Mode)       P2_IOCR04 = (P2_IOCR04 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_5(Mode)       P2_IOCR05 = (P2_IOCR05 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_6(Mode)       P2_IOCR06 = (P2_IOCR06 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_7(Mode)       P2_IOCR07 = (P2_IOCR07 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_8(Mode)       P2_IOCR08 = (P2_IOCR08 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_9(Mode)       P2_IOCR09 = (P2_IOCR09 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P2_10(Mode)       P2_IOCR10 = (P2_IOCR10 & 0xFF0F) | (Mode << 4)

#define INIO_P5_0       P5_IN_P0
#define INIO_P5_2       P5_IN_P2
#define INIO_P5_3       P5_IN_P3
#define INIO_P5_4       P5_IN_P4
#define INIO_P5_8       P5_IN_P8








#define INIO_P6_0       P6_IN_P0
#define INIO_P6_1       P6_IN_P1

#define SETIO_P6_0       P6_OMRL = 0x0001
#define SETIO_P6_1       P6_OMRL = 0x0002


#define CLEARIO_P6_0       P6_OMRL = 0x0100
#define CLEARIO_P6_1       P6_OMRL = 0x0200


#define TOGGLEIO_P6_0       P6_OMRL = 0x0101
#define TOGGLEIO_P6_1       P6_OMRL = 0x0202


#define CONTROLIO_P6_0(Mode)       P6_IOCR00 = (P6_IOCR00 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P6_1(Mode)       P6_IOCR01 = (P6_IOCR01 & 0xFF0F) | (Mode << 4)

#define INIO_P10_0       P10_IN_P0
#define INIO_P10_1       P10_IN_P1
#define INIO_P10_2       P10_IN_P2
#define INIO_P10_3       P10_IN_P3
#define INIO_P10_4       P10_IN_P4
#define INIO_P10_5       P10_IN_P5
#define INIO_P10_6       P10_IN_P6
#define INIO_P10_7       P10_IN_P7
#define INIO_P10_8       P10_IN_P8
#define INIO_P10_9       P10_IN_P9
#define INIO_P10_10       P10_IN_P10
#define INIO_P10_12       P10_IN_P12

#define SETIO_P10_0       P10_OMRL = 0x0001
#define SETIO_P10_1       P10_OMRL = 0x0002
#define SETIO_P10_2       P10_OMRL = 0x0004
#define SETIO_P10_3       P10_OMRL = 0x0008
#define SETIO_P10_4       P10_OMRL = 0x0010
#define SETIO_P10_5       P10_OMRL = 0x0020
#define SETIO_P10_6       P10_OMRL = 0x0040
#define SETIO_P10_7       P10_OMRL = 0x0080

#define SETIO_P10_8       P10_OMRH = 0x0001
#define SETIO_P10_9       P10_OMRH = 0x0002
#define SETIO_P10_10       P10_OMRH = 0x0004
#define SETIO_P10_12       P10_OMRH = 0x0010

#define CLEARIO_P10_0       P10_OMRL = 0x0100
#define CLEARIO_P10_1       P10_OMRL = 0x0200
#define CLEARIO_P10_2       P10_OMRL = 0x0400
#define CLEARIO_P10_3       P10_OMRL = 0x0800
#define CLEARIO_P10_4       P10_OMRL = 0x1000
#define CLEARIO_P10_5       P10_OMRL = 0x2000
#define CLEARIO_P10_6       P10_OMRL = 0x4000
#define CLEARIO_P10_7       P10_OMRL = 0x8000

#define CLEARIO_P10_8       P10_OMRH = 0x0100
#define CLEARIO_P10_9       P10_OMRH = 0x0200
#define CLEARIO_P10_10       P10_OMRH = 0x0400
#define CLEARIO_P10_12       P10_OMRH = 0x1000

#define TOGGLEIO_P10_0       P10_OMRL = 0x0101
#define TOGGLEIO_P10_1       P10_OMRL = 0x0202
#define TOGGLEIO_P10_2       P10_OMRL = 0x0404
#define TOGGLEIO_P10_3       P10_OMRL = 0x0808
#define TOGGLEIO_P10_4       P10_OMRL = 0x1010
#define TOGGLEIO_P10_5       P10_OMRL = 0x2020
#define TOGGLEIO_P10_6       P10_OMRL = 0x4040
#define TOGGLEIO_P10_7       P10_OMRL = 0x8080

#define TOGGLEIO_P10_8       P10_OMRH = 0x0101
#define TOGGLEIO_P10_9       P10_OMRH = 0x0202
#define TOGGLEIO_P10_10       P10_OMRH = 0x0404
#define TOGGLEIO_P10_12       P10_OMRH = 0x1010

#define CONTROLIO_P10_0(Mode)       P10_IOCR00 = (P10_IOCR00 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_1(Mode)       P10_IOCR01 = (P10_IOCR01 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_2(Mode)       P10_IOCR02 = (P10_IOCR02 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_3(Mode)       P10_IOCR03 = (P10_IOCR03 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_4(Mode)       P10_IOCR04 = (P10_IOCR04 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_5(Mode)       P10_IOCR05 = (P10_IOCR05 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_6(Mode)       P10_IOCR06 = (P10_IOCR06 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_7(Mode)       P10_IOCR07 = (P10_IOCR07 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_8(Mode)       P10_IOCR08 = (P10_IOCR08 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_9(Mode)       P10_IOCR09 = (P10_IOCR09 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_10(Mode)       P10_IOCR10 = (P10_IOCR10 & 0xFF0F) | (Mode << 4)
#define CONTROLIO_P10_12(Mode)       P10_IOCR12 = (P10_IOCR12 & 0xFF0F) | (Mode << 4)

// USER CODE BEGIN (IO_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void IO_vInit(void);


// USER CODE BEGIN (IO_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (IO_Header,9)

// USER CODE END


#endif  // ifndef _IO_H_
