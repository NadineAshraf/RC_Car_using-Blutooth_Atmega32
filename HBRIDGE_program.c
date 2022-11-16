/*************************************************************/
/*************************************************************/
/**************   Author : Nadine Ashraf Adeeb   *************/
/**************             Layer:HAL            *************/
/**************            SWC:H-BRIDGE          *************/
/**************            Version:v2.0          *************/
/**************     Date: 11 OCTOBER,2022        *************/
/*************************************************************/
/*************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DCMOTOR_interface.h"

#include "HBRIDGE_interface.h"
#include "HBRIDGE_private.h"
#include "HBRIDGE_config.h"                                                                                                                                                            #define F_CPU 8000000UL


void HBRIDGE_voidControl(u8 Copy_u8voidCommand)
{
	switch(Copy_u8voidCommand)
	{
	   case HBRIDGE_BOTH_FORWARD:
		   DCMOTOR_voidClockWise();
		   break;
	   case HBRIDE_BOTH_BACKWARD:
		   DCMOTOR_voidCounterClockWise();
		   break;
	   case HBRIDGE_BOTH_STOP:
		   DCMOTOR_voidStopMotor();
		   break;
	   case HBRIDGE_RIGHT_FORWARD:
		   DCMOTOR_voidRightClockWise();
		   break;
	   case HBRIDGE_RIGHT_BACKWARD:
		   DCMOTOR_voidRightCounterClockWise();
		   break;
	   case HBRIDGE_LEFT_FORWARD:
		   DCMOTOR_voidLeftClockWise();
		   break;
	   case HBRIDGE_LEFT_BACKWARD:
		   DCMOTOR_voidLeftCounterClockWise();
		   break;
	}
}
