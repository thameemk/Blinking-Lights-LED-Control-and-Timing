/*******************************************************
I/O Ports initialization created by the
CodeWizardAVR V3.37 Automatic Program Generator
© Copyright 1998-2019 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
*******************************************************/

// I/O Registers definitions
#include <xmega128b1.h>

// Ports initialization
void ports_init(void)
{
// PORTA initialization
// OUT register
PORTA.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Input
// Pin5: Input
// Pin6: Input
// Pin7: Input
PORTA.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTA.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTA.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTA.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTA.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTA.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTA.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTA.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTA.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTA.INTCTRL=(PORTA.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTA.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTA.INT1MASK=0x00;

// PORTB initialization
// OUT register
PORTB.OUT=0xF0;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Output
// Pin5: Output
// Pin6: Output
// Pin7: Output
PORTB.DIR=0xF0;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTB.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTB.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTB.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTB.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTB.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTB.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTB.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTB.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTB.INTCTRL=(PORTB.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTB.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTB.INT1MASK=0x00;

// PORTC initialization
// OUT register
PORTC.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Input
// Pin5: Input
// Pin6: Input
// Pin7: Input
PORTC.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTC.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTC.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTC.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTC.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTC.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTC.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTC.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTC.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// PORTC Peripheral Output Remapping
// OC0A Output: Pin 0
// OC0B Output: Pin 1
// OC0C Output: Pin 2
// OC0D Output: Pin 3
// USART0 XCK: Pin 1
// USART0 RXD: Pin 2
// USART0 TXD: Pin 3
// SPI MOSI: Pin 5
// SPI SCK: Pin 7
PORTC.REMAP=(0<<PORT_SPI_bp) | (0<<PORT_USART0_bp) | (0<<PORT_TC0D_bp) | (0<<PORT_TC0C_bp) | (0<<PORT_TC0B_bp) | (0<<PORT_TC0A_bp);
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTC.INTCTRL=(PORTC.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTC.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTC.INT1MASK=0x00;

// PORTD initialization
// OUT register
PORTD.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
PORTD.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTD.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTD.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTD.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTD.INTCTRL=(PORTD.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
PORTD.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
PORTD.INT1MASK=0x00;

// PORTE initialization
// OUT register
PORTE.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Input
// Pin5: Output
// Pin6: Input
// Pin7: Input
PORTE.DIR=0x20;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTE.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTE.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTE.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTE.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTE.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTE.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTE.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTE.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// PORTE Peripheral Output Remapping
// OC0A Output: Pin 0
// OC0B Output: Pin 1
// OC0C Output: Pin 2
// OC0D Output: Pin 3
// USART0 XCK: Pin 1
// USART0 RXD: Pin 2
// USART0 TXD: Pin 3
// SPI MOSI: Pin -1
// SPI SCK: Pin -1
PORTE.REMAP=(0<<PORT_SPI_bp) | (0<<PORT_USART0_bp) | (0<<PORT_TC0D_bp) | (0<<PORT_TC0C_bp) | (0<<PORT_TC0B_bp) | (0<<PORT_TC0A_bp);
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTE.INTCTRL=(PORTE.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTE.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTE.INT1MASK=0x00;

// PORTG initialization
// OUT register
PORTG.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Input
// Pin5: Input
// Pin6: Input
// Pin7: Input
PORTG.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTG.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTG.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTG.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTG.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTG.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTG.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTG.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTG.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTG.INTCTRL=(PORTG.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTG.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTG.INT1MASK=0x00;

// PORTM initialization
// OUT register
PORTM.OUT=0x00;
// Pin0: Input
// Pin1: Input
// Pin2: Input
// Pin3: Input
// Pin4: Input
// Pin5: Input
// Pin6: Input
// Pin7: Input
PORTM.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTM.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTM.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin2 Output/Pull configuration: Totempole/No
// Pin2 Input/Sense configuration: Sense both edges
// Pin2 Inverted: Off
PORTM.PIN2CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin3 Output/Pull configuration: Totempole/No
// Pin3 Input/Sense configuration: Sense both edges
// Pin3 Inverted: Off
PORTM.PIN3CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin4 Output/Pull configuration: Totempole/No
// Pin4 Input/Sense configuration: Sense both edges
// Pin4 Inverted: Off
PORTM.PIN4CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin5 Output/Pull configuration: Totempole/No
// Pin5 Input/Sense configuration: Sense both edges
// Pin5 Inverted: Off
PORTM.PIN5CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin6 Output/Pull configuration: Totempole/No
// Pin6 Input/Sense configuration: Sense both edges
// Pin6 Inverted: Off
PORTM.PIN6CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin7 Output/Pull configuration: Totempole/No
// Pin7 Input/Sense configuration: Sense both edges
// Pin7 Inverted: Off
PORTM.PIN7CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTM.INTCTRL=(PORTM.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
// Pin2 Pin Change interrupt 0: Off
// Pin3 Pin Change interrupt 0: Off
// Pin4 Pin Change interrupt 0: Off
// Pin5 Pin Change interrupt 0: Off
// Pin6 Pin Change interrupt 0: Off
// Pin7 Pin Change interrupt 0: Off
PORTM.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
// Pin2 Pin Change interrupt 1: Off
// Pin3 Pin Change interrupt 1: Off
// Pin4 Pin Change interrupt 1: Off
// Pin5 Pin Change interrupt 1: Off
// Pin6 Pin Change interrupt 1: Off
// Pin7 Pin Change interrupt 1: Off
PORTM.INT1MASK=0x00;

// PORTR initialization
// OUT register
PORTR.OUT=0x00;
// Pin0: Input
// Pin1: Input
PORTR.DIR=0x00;
// Pin0 Output/Pull configuration: Totempole/No
// Pin0 Input/Sense configuration: Sense both edges
// Pin0 Inverted: Off
PORTR.PIN0CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Pin1 Output/Pull configuration: Totempole/No
// Pin1 Input/Sense configuration: Sense both edges
// Pin1 Inverted: Off
PORTR.PIN1CTRL=PORT_OPC_TOTEM_gc | PORT_ISC_BOTHEDGES_gc;
// Interrupt 0 level: Disabled
// Interrupt 1 level: Disabled
PORTR.INTCTRL=(PORTR.INTCTRL & (~(PORT_INT1LVL_gm | PORT_INT0LVL_gm))) |
	PORT_INT1LVL_OFF_gc | PORT_INT0LVL_OFF_gc;
// Pin0 Pin Change interrupt 0: Off
// Pin1 Pin Change interrupt 0: Off
PORTR.INT0MASK=0x00;
// Pin0 Pin Change interrupt 1: Off
// Pin1 Pin Change interrupt 1: Off
PORTR.INT1MASK=0x00;
}

// Virtual Ports initialization
void vports_init(void)
{
// PORTA mapped to VPORT0
// PORTB mapped to VPORT1
PORTCFG.VPCTRLA=PORTCFG_VP13MAP_PORTB_gc | PORTCFG_VP02MAP_PORTA_gc;
// PORTC mapped to VPORT2
// PORTD mapped to VPORT3
PORTCFG.VPCTRLB=PORTCFG_VP13MAP_PORTD_gc | PORTCFG_VP02MAP_PORTC_gc;
}

