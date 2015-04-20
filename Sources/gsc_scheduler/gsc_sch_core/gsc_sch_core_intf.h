/*============================================================================*/
/*                     AZOR - EMBEDDED SYSTEMS SOFTWARE                       */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:       gsc_sch_core_intf.h
* version:         1.0 
* created_by:      MDRR
* date_created:    July 31 2013 
*=============================================================================*/
/* DESCRIPTION : Interface of the gsc scheduler core                          */
/*============================================================================*/
/* FUNCTION COMMENT : This header must be placed anywere scheduler is         */
/* required.                                                                  */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 31/jul/2013 |                               | MDRR             */
/* First version of this file.                                                */
/*============================================================================*/

#ifndef GSC_SCH_CORE_INTF_H                       /* To avoid double inclusion */
#define GSC_SCH_CORE_INTF_H

/* Includes */
/* -------- */
#include "stdtypedef.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */

/* Operation mode type */
typedef T_UWORD T_OpModeType;

/*======================================================*/ 
/* Declaration of exported constants                    */
/*======================================================*/ 
/* BYTE constants */


/* WORD constants */


/* LONG and STRUCTURE constants */


/* Custom type constants */


/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTES */


/* WORDS */


/* LONGS and STRUCTURES */


/* Custom type RAM variables */

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Operational Modes of the system */
#define ALL_MODES (T_OpModeType)0xFFFF
#define NORMAL_MODE (T_OpModeType)0x0001


/* Functions prototypes */

/**************************************************************
 *  Name                 : gsc_sch_core_tick_isr
 *  Description          : This is the tick flag generation. This function must be 
                           called from a periodic high priority interrupt. The period
						   of this interrupt must define the "tick cycle time"
 *  Parameters           : void
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
PUBLIC_FCT void gsc_sch_core_tick_isr(void);

/**************************************************************
 *  Name                 :  gsc_sch_core_Init
 *  Description          :  Init function of Scheduler module
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must be called after cpu initialization.
 *  Postcondition        :  Function gsc_sch_core_exec can be called.
 **************************************************************/
PUBLIC_FCT void gsc_sch_core_Init(void);

/**************************************************************
 *  Name                 :  gsc_sch_core_exec
 *  Description          :  Main function of Scheduler module.
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must be called after scheduler initialization.
 *  Postcondition        :  none.
 *  Critical/explanation :  This function contains an infite loop.
 **************************************************************/
PUBLIC_FCT void gsc_sch_core_exec(void);

/**************************************************************
 *  Name                 :  gsc_sch_core_SetMode
 *  Description          :  Interface to set the current mode of the scheduler.
 *  Parameters           :  T_OpModeType lt_NewMode
 *  Return               :  void
 *  Precondition         :  No.
 *  Postcondition        :  No.
 **************************************************************/
PUBLIC_FCT void gsc_sch_core_SetMode(T_OpModeType lt_NewMode);

/**************************************************************
 *  Name                 :  gsc_sch_core_GetMode
 *  Description          :  Interface to get the current mode of the scheduler.
 *  Parameters           :  No.
 *  Return               :  T_OpModeType
 *  Precondition         :  No.
 *  Postcondition        :  No.
 **************************************************************/
PUBLIC_FCT T_OpModeType gsc_sch_core_GetMode(void);


/* Functions macros */


/* Exported defines */



#endif /* GSC_SCH_CORE_INTF_H */


