//****************************************************************************
// @Module        Universal Serial Interface Channel (USIC) U2C0
// @Filename      U2C0.h
// @Project       tiaoshi.dav
//----------------------------------------------------------------------------
// @Controller    Infineon XC2267M-104F80
//
// @Compiler      Keil
//
// @Codegenerator 2.1
//
// @Description   This file contains all function prototypes and macros for 
//                the U2C0 module.
//
//----------------------------------------------------------------------------
// @Date          2015/3/16 12:47:13
//
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,1)

// USER CODE END



#ifndef _U2C0_H_
#define _U2C0_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (U2C0_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void U2C0_SSC_vInit(void);
void U2C0_SSC_vSendData(uword uwData);
uword U2C0_SSC_uwGetData(void);
ubyte U2C0_SSC_ubTxDataReady(void);


// USER CODE BEGIN (U2C0_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************



// USER CODE BEGIN (U2C0_Header,9)

// USER CODE END


#endif  // ifndef _U2C0_H_
