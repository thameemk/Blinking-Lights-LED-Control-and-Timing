/*******************************************************
System clock initialization created by the
CodeWizardAVR V3.37 Automatic Program Generator
© Copyright 1998-2019 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
*******************************************************/

// I/O Registers definitions
#include <xmega128b1.h>

// Standard definitions
#include <stddef.h>

// System Clocks initialization
void system_clocks_init(void)
{
unsigned char n,s;

// Optimize for speed
#pragma optsize- 
// Save interrupts enabled/disabled state
s=SREG;
// Disable interrupts
#asm("cli")

// Internal 2 MHz RC oscillator initialization
// Enable the internal 2 MHz RC oscillator
OSC.CTRL|=OSC_RC2MEN_bm;
// Wait for the internal 2 MHz RC oscillator to stabilize
while ((OSC.STATUS & OSC_RC2MRDY_bm)==0);

// Disable the auto-calibration of the internal 2 MHz RC oscillator
DFLLRC2M.CTRL=0<<DFLL_ENABLE_bp;

// System Clock prescaler A division factor: 1
// System Clock prescalers B & C division factors: B:1, C:1
// ClkPer4: 2000.000 kHz
// ClkPer2: 2000.000 kHz
// ClkPer:  2000.000 kHz
// ClkCPU:  2000.000 kHz
n=(CLK.PSCTRL & (~(CLK_PSADIV_gm | CLK_PSBCDIV1_bm | CLK_PSBCDIV0_bm))) |
	CLK_PSADIV_1_gc | CLK_PSBCDIV_1_1_gc;
CCP=CCP_IOREG_gc;
CLK.PSCTRL=n;

// Select the system clock source: 2 MHz Internal RC Osc.
n=(CLK.CTRL & (~CLK_SCLKSEL_gm)) | CLK_SCLKSEL_RC2M_gc;
CCP=CCP_IOREG_gc;
CLK.CTRL=n;

// Disable the unused oscillators: 32 kHz, 32 MHz, external clock/crystal oscillator, PLL
OSC.CTRL&= ~(OSC_RC32KEN_bm | OSC_RC32MEN_bm | OSC_XOSCEN_bm | OSC_PLLEN_bm);

// ClkPer output disabled
PORTCFG.CLKEVOUT&= ~(PORTCFG_CLKOUTSEL_gm | PORTCFG_CLKOUT_gm);
// Restore interrupts enabled/disabled state
SREG=s;
// Restore optimization for size if needed
#pragma optsize_default
}

