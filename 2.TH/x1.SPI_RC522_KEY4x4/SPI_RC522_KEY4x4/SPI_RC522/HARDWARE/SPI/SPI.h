#ifndef __SPI_H
#define __SPI_H 			   
#include "sys.h"  
//////////////////////////////////////////////////////////////////////////////////	 
void SPIx_Init(SPI_TypeDef * SPIx, u16 SPI_BaudRate);
uint8_t SPI_Transfer(SPI_TypeDef * SPIx,u8 data);
////////////////////////////////////////////////////////////////////////////////// 
	 
#endif

