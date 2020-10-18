/******************************************************************************
* Copyright (c) 2019 - Hemant Sharma - All Rights Reserved
*
* Feel free to use this Code at your own risk for your own purposes.
*
*******************************************************************************/
/******************************************************************************
* Title:		RTC Extern Header
* Filename:		dri_rtc_extern.h
* Author:		HS
* Origin Date:	02/14/2020
* Version:		1.0.0
* Notes:
*******************************************************************************/

/** @file:	dri_rtc_extern.h
 *  @brief:	This file contains extern variable for RTC API header
 */
#ifndef DRI_RTC_EXTERN_H_
#define DRI_RTC_EXTERN_H_


/******************************************************************************
* Includes
*******************************************************************************/
#include <dri_rtc.h>


/******************************************************************************
* Preprocessor Constants
*******************************************************************************/


/******************************************************************************
* Configuration Constants
*******************************************************************************/


/******************************************************************************
* Macros
*******************************************************************************/


/******************************************************************************
* Typedefs
*******************************************************************************/


/******************************************************************************
* Variables
*******************************************************************************/

/*
 * @brief	API functions Instance for RTC
 */

/*
 * @brief	Instances for RTC Module
 */
#if (RTC_USED == 1U)
extern tStRTC RTC_;
#endif


/******************************************************************************
* Function Prototypes
*******************************************************************************/



#endif /* DRI_RTC_EXTERN_H_ */

/********************************** End of File *******************************/