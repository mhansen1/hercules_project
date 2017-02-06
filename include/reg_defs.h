/*
 *
 * This header file contains the base and offset addresses for the registers
 *
 */
 
 #ifndef _REGDEFS_H_
 #define _REGDEFS_H_
 
/*
 * INCLUDES
 */
#include <stdio.h>
#include <stdint.h>

/*
 *
 * GENERAL INFO:
 * 1. GCLK = CPU clock
 * 2. HCLK = System clock
 * 3. VCLK & VCLK2 = Peripheral clock
 * 4. LPO = Low Power Oscillator
 * 5. GIO = Generial Input/Output
 */
 
/*
 * Primary system module registers.
 * More info found on page 139 of the technical reference manual
 */ 
typedef volatile struct systemBase1 {
	uint32_t SYSPC1;			// SYS Pin Control Register 1
	uint32_t SYSPC2;			// SYS Pin Control Register 2 
	uint32_t SYSPC3;			// SYS Pin Control Register 3
	uint32_t SYSPC4;			// SYS Pin Control Register 4
	uint32_t SYSPC5;			// SYS Pin Control Register 5
	uint32_t SYSPC6;			// SYS Pin Control Register 6
	uint32_t SYSPC7;			// SYS Pin Control Register 7
	uint32_t SYSPC8;			// SYS Pin Control Register 8
	uint32_t SYSPC9;			// SYS Pin Control Register 9
	uint32_t rsvd1;				// Reserved hardware space 
	uint32_t rsvd2;				// Reserved hardware space 
	uint32_t rsvd3;				// Reserved hardware space 
	uint32_t CSDIS;			// Clock source disable register
	uint32_t CSDISSET; 		// Clock source disable set register 
	uint32_t CSDISCLR;		// Clock source disable clear register 
	uint32_t CDDIS;			// CLock domain disable register 
	uint32_t CDDISSET;		// Clock domain disable set register 
	uint32_t CDDISCLR;		// Clock domain disable clear register 
	uint32_t GHVSRC;			// GCLK, HCLK, VCLK, and VCLK2 source register
	uint32_t VCLKASRC;		// Peripheral asynchronous clock source register 
	uint32_t RCLKSRC;		// RTI clock source register 
	uint32_t CSVSTAT;		// Clock source valid status register  
	uint32_t MSTGCR;			//  Memory self-test global control register 
	uint32_t MINITGCR;		// Memory hardware initialization global control register  
	uint32_t MSINEA;			// Memory self-test/initialization enable register 
	uint32_t rsvd12;			// Reserved hardware space 
	uint32_t MSTCGSTAT;	// MSTC global status register 
	uint32_t MINISTAT;		// Memory Hardware initialization status register 
	uint32_t PLLCTL1;			// PLL control register 1 
	uint32_t PLLCTL2;			// PLL control register 2 
	uint32_t SYSPC10;			// SYS Pin Control Register 10 
	uint32_t DIEIDL;			// Die identification register, lower word 
	uint32_t DIEIDH;			// Die identification register, upper word 
	uint32_t rsvd4;				// Reserved hardware space 
	uint32_t LPOMONCTL;		// LPO/clock monitor control register  
	uint32_t CLKTEST;			// Clock test register 
	uint32_t DFTCTRLREG;	// DFT control register 
	uint32_t DFTCTRLREG2;	// DFT control register 2 
	uint32_t rsvd5;				// Reserved hardware space
	uint32_t rsvd6;				// Reserved hardware space
	uint32_t GPREG1;			// General purpose register
	uint32_t rsvd7;				// Reserved hardware space
	uint32_t rsvd8;				// Reserved hardware space
	uint32_t rsvd9;				// Reserved hardware space
	uint32_t SSIR1;				// System software interrupt request 1 register
	uint32_t SSIR2;				// System software interrupt request 2 register
	uint32_t SSIR3;				// System software interrupt request 3 register
	uint32_t SSIR4;				// System software interrupt request 4 register
	uint32_t RAMGCR;			// RAM control register 
	uint32_t BMMCR1;			// Bus matrix module control register 1
	uint32_t rsvd10;			// Reserved hardware space
	uint32_t CPURSTCR;		// CPU reset control register 
	uint32_t CLKCNTL;			// Clock control register 
	uint32_t ECPCNTL;			// ECP control register 
	uint32_t rsvd11;			// Reserved hardware space
	uint32_t DEVCR1;			// DEV parity control register 1
	uint32_t SYSECR;			// System exception control register 
	uint32_t SYSESR;			// System exception status register 
	uint32_t SYSTASR;			// System test abort status register 
	uint32_t GLBSTAT;			// Global status register
	uint32_t DEVID;				// Device identification register
	uint32_t SSIVEC;			// Software interrupt vector register 
	uint32_t SSIF;				// System software interrupt flag register
} systemBase1_t;
// Set the base address for the primary system registers 
#define SYSREG1 ((systemReg1_t *)0xFFFFFF00U)
 
/*
 * Secondary system module registers.
 * More info found on page 191 of the technical reference manual
 */ 
typedef volatile struct systemBase2 {
	uint32_t PLLCTL3;			// PLL control register 3
	uint32_t rsvd1;				// Reserved hardware space 
	uint32_t STCCLKDIV;		// CPU logic BIST clock divider
	uint32_t rsvd2;				// Reserved hardware space
	uint32_t ECPCNTL;			// ECP control register. The ECPCNTL register has the mirrored location at this address 
	uint32_t ECPCNTL1;		// ECP control register 1
	uint32_t rsvd3;				// Reserved hardware space
	uint32_t CLK2CNTRL;		// Clock 2 control register 
	uint32_t VCLKACON1;	// Peripheral asynchronous clock configuration 1 register 
	uint32_t rsvd4;				// Reserved hardware space
	uint32_t HCLKCNTL;		// HCLK control register
	uint32_t rsvd5;				// Reserved hardware space
	uint32_t CLKCLIP;			// Clock slip control register 
	uint32_t rsvd6;				// Reserved hardware space
	uint32_t IP1ECCERREN;	// IP ECC error enable register 
	uint32_t rsvd7;				// Reserved hardware space
	uint32_t EFC_CTLREG;	// EFUSE controller control register
	uint32_t DIEDL_REG0;	// Die identification register, lower word
	uint32_t DIEDH_REG1;	// Die identification register, upper word
	uint32_t DIEDL_REG2;	// Die identification register, lower word
	uint32_t DIEDH_REG3;	// Die identification register, upper word	
} systemBase2_t;
// Set the base address for the secondary system registers 
#define SYSREG2 ((systemBase2_t *)0xFFFFE100U)
 
 
/*
 *
 * Setup the GIO configuration control registers 
 *
 */
 typedef volatile struct gioBase {
	uint32_t GIOGCR0;		// GIO global control register 
	uint32_t rsvd1;				// Reserved hardware space
	uint32_t GIOINTDET;		// GIO interrupt detect register 
	uint32_t GIOPOL;			// GIO interrupt polarity register 
	uint32_t GIOENASET;		// GIO interrupt enable set register
	uint32_t GIOENACLR;		// GIO interrupt enable clear register
	uint32_t GIOLVLSET;		// GIO interrupt priority set register 
	uint32_t GIOLVLCLR;		// GIO interrupt priority clear register 
	uint32_t GIOFLG;			// GIO interrupt flag register 
	uint32_t GIOOFF1;			// GIO offset 1 register 
	uint32_t GIOOFF2;			// GIO offset 2 register
	uint32_t GIOEMU1;			// GIO emulation 1 register
	uint32_t GIOEMU2;			// GIO emulation 2 register 
} gioBase_t;
// Set base address for the GIO control registers 
#define GIOCNTL ((gioBase_t *)0xFFF7BC00U)
 
/*
 *
 * Setup the GIO port control registers
 *
 */
 typedef volatile struct gioPort {
	uint32_t DIR;					// GIO data direction register 
	uint32_t DIN;					// GIO data input register 
	uint32_t DOUT;				// GIO data output register 
	uint32_t DSET;				// GIO data set register 
	uint32_t DCLEAR;			// GIO data clear registers 
	uint32_t PDR;				// GIO open drain register 
	uint32_t PULDIS;			// GIO pull disable register 
	uint32_t PSL;					// GIO pull select register 
} gioPort_t;
// Set base address for GIO port A
#define GIOA ((gioPort_t *)0xFFF7BC34U)
// Set base address for GIO port A
#define GIOB ((gioPort_t *)0xFFF7BC54U)
 
/*
 *
 * Peripheral Central Recource (PCR) Control Registers
 * More info on these can be found on page 203 of the technical manual
 *
 */
 
/** TODO: 
 *    This is still in the format of TI's given register file. May need to redo because of copywrite stuffs.
 *    Mainly need to look some more at the PCR section and figure out exaclt how things with a 'x' function
 *    (such as PSxMSTID[32]). To just write out all the registers would be a monsterous task.
 */
 typedef volatile struct pcrBase
{
    uint32_t PMPROTSET0;    /* 0x0000 */
    uint32_t PMPROTSET1;    /* 0x0004 */
    uint32_t rsvd1[2U];     /* 0x0008 */
    uint32_t PMPROTCLR0;    /* 0x0010 */
    uint32_t PMPROTCLR1;    /* 0x0014 */
    uint32_t rsvd2[2U];     /* 0x0018 */
    uint32_t PPROTSET0;     /* 0x0020 */
    uint32_t PPROTSET1;     /* 0x0024 */
    uint32_t PPROTSET2;     /* 0x0028 */
    uint32_t PPROTSET3;     /* 0x002C */
    uint32_t rsvd3[4U];     /* 0x0030 */
    uint32_t PPROTCLR0;     /* 0x0040 */
    uint32_t PPROTCLR1;     /* 0x0044 */
    uint32_t PPROTCLR2;     /* 0x0048 */
    uint32_t PPROTCLR3;     /* 0x004C */
    uint32_t rsvd4[4U];     /* 0x0050 */
    uint32_t PCSPWRDWNSET0; /* 0x0060 */
    uint32_t PCSPWRDWNSET1; /* 0x0064 */
    uint32_t rsvd5[2U];     /* 0x0068 */
    uint32_t PCSPWRDWNCLR0; /* 0x0070 */
    uint32_t PCSPWRDWNCLR1; /* 0x0074 */
    uint32_t rsvd6[2U];     /* 0x0078 */
    uint32_t PSPWRDWNSET0;  /* 0x0080 */
    uint32_t PSPWRDWNSET1;  /* 0x0084 */
    uint32_t PSPWRDWNSET2;  /* 0x0088 */
    uint32_t PSPWRDWNSET3;  /* 0x008C */
    uint32_t rsvd7[4U];     /* 0x0090 */
    uint32_t PSPWRDWNCLR0;  /* 0x00A0 */
    uint32_t PSPWRDWNCLR1;  /* 0x00A4 */
    uint32_t PSPWRDWNCLR2;  /* 0x00A8 */
    uint32_t PSPWRDWNCLR3;  /* 0x00AC */
    uint32_t rsvd8[4U];     /* 0x00B0 */
    uint32_t PDPWRDWNSET;   /* 0x00C0 */
    uint32_t PDPWRDWNCLR;   /* 0x00C4 */
    uint32_t rsvd9[78U];    /* 0x00C8 */
    uint32_t MSTIDWRENA;    /* 0x0200 */
    uint32_t MSTIDENA;      /* 0x0204 */
    uint32_t MSTIDDIAGCTRL; /* 0x0208 */
    uint32_t rsvd10[61U];   /* 0x020C */
    struct
    {
        uint32_t PSxMSTID_L;
        uint32_t PSxMSTID_H;
    }PSxMSTID[32];            /* 0x0300 */
    struct
    {
        uint32_t PPSxMSTID_L;
        uint32_t PPSxMSTID_H;
    }PPSxMSTID[8];            /* 0x0400 */
    struct
    {
        uint32_t PPSExMSTID_L;
        uint32_t PPSExMSTID_H;
    }PPSExMSTID[32];            /* 0x0440 */
    uint32_t PCSxMSTID[32];    /* 0x0540 */
    uint32_t PPCSxMSTID[8];    /* 0x05C0 */
} pcrBASE_t;


#define PCRREG1 ((pcrBASE_t *)0xFFFF1000U)


#define PCRREG2 ((pcrBASE_t *)0xFCFF1000U)


#define PCRREG3 ((pcrBASE_t *)0xFFF78000U)

 #endif
 
 /**
  *
  * USEFUL STUFFS!
  *
  * Declaring register names and addresses: http://www.embedded.com/electronics-blogs/programming-pointers/4025002/Mapping-memory
  * Helps to make structs a bit more clear: http://stackoverflow.com/questions/1675351/typedef-struct-vs-struct-definitions
  * 
  */
