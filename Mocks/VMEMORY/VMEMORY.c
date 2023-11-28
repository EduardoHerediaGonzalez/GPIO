/**
 * Copyright © 2023 
 *
 * @file    VMEMORY.c
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   VMEMORY 
 * @version No oficial
 *     
 */
/* system headers */
#include "PLATFORM_TYPES_def.h"

/* used headers */

/* own headers */
#include "VMEMORY_cfg.h"
#include "VMEMORY_def.h"
#include "VMEMORY.h"

/*[EXPORTED]****************************************************************************/

/* public_variables */
VMEMORY_tstControlStatusRegisters VMEMORY_stControlStatus = {(uint32)0U};
VMEMORY_tstPortRegisters VMEMORY_astPort[VMEMORY_nTOTAL_OF_PORTS] = {{(uint32)0U}};

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */

/* internal__types */

/* private__variables */

/* private__functions */

/* public_functions */


/* EOF */
