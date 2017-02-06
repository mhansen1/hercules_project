/*
 *
 * This file is the header file for system initializations/setups.
 * This includes setting up the clocking, peripheral setup, and interrupts
 *
 */
 
 /*
  *
  * INCLUDES
  *
  */
#include "sys_setup.h"
 
// Initializes the entire system to default settings
void systemInit(void);
// Initiazes the PLL
/** TODO:
 *	  Pass argument for the desired PLL frequency
 *
 */
void initPLL(void);
// Initialize all of the Peripheral Central Recourse (PCR) control stuff.
void initPCR(void);
