/* Register definitions for pic16f917.
 * This file was automatically generated by:
 *   inc2h.pl V1.6
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16f917.h>

data __at (INDF_ADDR) volatile char      INDF;
sfr  __at (TMR0_ADDR)                    TMR0;
data __at (PCL_ADDR) volatile char       PCL;
sfr  __at (STATUS_ADDR)                  STATUS;
sfr  __at (FSR_ADDR)                     FSR;
sfr  __at (PORTA_ADDR)                   PORTA;
sfr  __at (PORTB_ADDR)                   PORTB;
sfr  __at (PORTC_ADDR)                   PORTC;
sfr  __at (PORTD_ADDR)                   PORTD;
sfr  __at (PORTE_ADDR)                   PORTE;
sfr  __at (PCLATH_ADDR)                  PCLATH;
sfr  __at (INTCON_ADDR)                  INTCON;
sfr  __at (PIR1_ADDR)                    PIR1;
sfr  __at (PIR2_ADDR)                    PIR2;
sfr  __at (TMR1L_ADDR)                   TMR1L;
sfr  __at (TMR1H_ADDR)                   TMR1H;
sfr  __at (T1CON_ADDR)                   T1CON;
sfr  __at (TMR2_ADDR)                    TMR2;
sfr  __at (T2CON_ADDR)                   T2CON;
sfr  __at (SSPBUF_ADDR)                  SSPBUF;
sfr  __at (SSPCON_ADDR)                  SSPCON;
sfr  __at (CCPR1L_ADDR)                  CCPR1L;
sfr  __at (CCPR1H_ADDR)                  CCPR1H;
sfr  __at (CCP1CON_ADDR)                 CCP1CON;
sfr  __at (RCSTA_ADDR)                   RCSTA;
sfr  __at (TXREG_ADDR)                   TXREG;
sfr  __at (RCREG_ADDR)                   RCREG;
sfr  __at (CCPR2L_ADDR)                  CCPR2L;
sfr  __at (CCPR2H_ADDR)                  CCPR2H;
sfr  __at (CCP2CON_ADDR)                 CCP2CON;
sfr  __at (ADRESH_ADDR)                  ADRESH;
sfr  __at (ADCON0_ADDR)                  ADCON0;
sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
sfr  __at (TRISA_ADDR)                   TRISA;
sfr  __at (TRISB_ADDR)                   TRISB;
sfr  __at (TRISC_ADDR)                   TRISC;
sfr  __at (TRISD_ADDR)                   TRISD;
sfr  __at (TRISE_ADDR)                   TRISE;
sfr  __at (PIE1_ADDR)                    PIE1;
sfr  __at (PIE2_ADDR)                    PIE2;
sfr  __at (PCON_ADDR)                    PCON;
sfr  __at (OSCCON_ADDR)                  OSCCON;
sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
sfr  __at (ANSEL_ADDR)                   ANSEL;
sfr  __at (PR2_ADDR)                     PR2;
sfr  __at (SSPADD_ADDR)                  SSPADD;
sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
sfr  __at (WPUB_ADDR)                    WPUB;
sfr  __at (WPU_ADDR)                     WPU;
sfr  __at (IOCB_ADDR)                    IOCB;
sfr  __at (IOC_ADDR)                     IOC;
sfr  __at (CMCON1_ADDR)                  CMCON1;
sfr  __at (TXSTA_ADDR)                   TXSTA;
sfr  __at (SPBRG_ADDR)                   SPBRG;
sfr  __at (CMCON0_ADDR)                  CMCON0;
sfr  __at (VRCON_ADDR)                   VRCON;
sfr  __at (ADRESL_ADDR)                  ADRESL;
sfr  __at (ADCON1_ADDR)                  ADCON1;
sfr  __at (WDTCON_ADDR)                  WDTCON;
sfr  __at (LCDCON_ADDR)                  LCDCON;
sfr  __at (LCDPS_ADDR)                   LCDPS;
sfr  __at (LVDCON_ADDR)                  LVDCON;
sfr  __at (EEDATL_ADDR)                  EEDATL;
sfr  __at (EEADRL_ADDR)                  EEADRL;
sfr  __at (EEDATH_ADDR)                  EEDATH;
sfr  __at (EEADRH_ADDR)                  EEADRH;
sfr  __at (LCDDATA0_ADDR)                LCDDATA0;
sfr  __at (LCDDATA1_ADDR)                LCDDATA1;
sfr  __at (LCDDATA2_ADDR)                LCDDATA2;
sfr  __at (LCDDATA3_ADDR)                LCDDATA3;
sfr  __at (LCDDATA4_ADDR)                LCDDATA4;
sfr  __at (LCDDATA5_ADDR)                LCDDATA5;
sfr  __at (LCDDATA6_ADDR)                LCDDATA6;
sfr  __at (LCDDATA7_ADDR)                LCDDATA7;
sfr  __at (LCDDATA8_ADDR)                LCDDATA8;
sfr  __at (LCDDATA9_ADDR)                LCDDATA9;
sfr  __at (LCDDATA10_ADDR)               LCDDATA10;
sfr  __at (LCDDATA11_ADDR)               LCDDATA11;
sfr  __at (LCDSE0_ADDR)                  LCDSE0;
sfr  __at (LCDSE1_ADDR)                  LCDSE1;
sfr  __at (LCDSE2_ADDR)                  LCDSE2;
sfr  __at (EECON1_ADDR)                  EECON1;
sfr  __at (EECON2_ADDR)                  EECON2;

// 
// bitfield definitions
// 
volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;
volatile __ADCON1_bits_t __at(ADCON1_ADDR) ADCON1_bits;
volatile __ANSEL_bits_t __at(ANSEL_ADDR) ANSEL_bits;
volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;
volatile __CCP2CON_bits_t __at(CCP2CON_ADDR) CCP2CON_bits;
volatile __CMCON0_bits_t __at(CMCON0_ADDR) CMCON0_bits;
volatile __CMCON1_bits_t __at(CMCON1_ADDR) CMCON1_bits;
volatile __EECON1_bits_t __at(EECON1_ADDR) EECON1_bits;
volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;
volatile __IOC_bits_t __at(IOC_ADDR) IOC_bits;
volatile __IOCB_bits_t __at(IOCB_ADDR) IOCB_bits;
volatile __LCDCON_bits_t __at(LCDCON_ADDR) LCDCON_bits;
volatile __LCDDATA0_bits_t __at(LCDDATA0_ADDR) LCDDATA0_bits;
volatile __LCDDATA1_bits_t __at(LCDDATA1_ADDR) LCDDATA1_bits;
volatile __LCDDATA10_bits_t __at(LCDDATA10_ADDR) LCDDATA10_bits;
volatile __LCDDATA11_bits_t __at(LCDDATA11_ADDR) LCDDATA11_bits;
volatile __LCDDATA2_bits_t __at(LCDDATA2_ADDR) LCDDATA2_bits;
volatile __LCDDATA3_bits_t __at(LCDDATA3_ADDR) LCDDATA3_bits;
volatile __LCDDATA4_bits_t __at(LCDDATA4_ADDR) LCDDATA4_bits;
volatile __LCDDATA5_bits_t __at(LCDDATA5_ADDR) LCDDATA5_bits;
volatile __LCDDATA6_bits_t __at(LCDDATA6_ADDR) LCDDATA6_bits;
volatile __LCDDATA7_bits_t __at(LCDDATA7_ADDR) LCDDATA7_bits;
volatile __LCDDATA8_bits_t __at(LCDDATA8_ADDR) LCDDATA8_bits;
volatile __LCDDATA9_bits_t __at(LCDDATA9_ADDR) LCDDATA9_bits;
volatile __LCDPS_bits_t __at(LCDPS_ADDR) LCDPS_bits;
volatile __LCDSE0_bits_t __at(LCDSE0_ADDR) LCDSE0_bits;
volatile __LCDSE1_bits_t __at(LCDSE1_ADDR) LCDSE1_bits;
volatile __LCDSE2_bits_t __at(LCDSE2_ADDR) LCDSE2_bits;
volatile __LVDCON_bits_t __at(LVDCON_ADDR) LVDCON_bits;
volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;
volatile __OSCCON_bits_t __at(OSCCON_ADDR) OSCCON_bits;
volatile __OSCTUNE_bits_t __at(OSCTUNE_ADDR) OSCTUNE_bits;
volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;
volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;
volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;
volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;
volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;
volatile __RCSTA_bits_t __at(RCSTA_ADDR) RCSTA_bits;
volatile __SSPCON_bits_t __at(SSPCON_ADDR) SSPCON_bits;
volatile __SSPSTAT_bits_t __at(SSPSTAT_ADDR) SSPSTAT_bits;
volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;
volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;
volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;
volatile __TXSTA_bits_t __at(TXSTA_ADDR) TXSTA_bits;
volatile __VRCON_bits_t __at(VRCON_ADDR) VRCON_bits;
volatile __WDTCON_bits_t __at(WDTCON_ADDR) WDTCON_bits;
volatile __WPU_bits_t __at(WPU_ADDR) WPU_bits;
volatile __WPUB_bits_t __at(WPUB_ADDR) WPUB_bits;

