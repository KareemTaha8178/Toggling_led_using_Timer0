/* 
 * File:   hal_internal_interrupt.h
 * Author: Kareem Taha
 *
 * Created on October 6, 2022, 1:47 PM
 */

#ifndef HAL_INTERRUPT_H
#define	HAL_INTERRUPT_H

 /* Section : Includes */

#include "hal_interrupt_cfg.h"

 /* Section : Macros Definition */

 /* Section : Macros Functions Declaration */

/*________________________ ADC ____________________*/

#if ADC_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for ADC module */
#define ADC_Interrupt_Disable()                (PIE1bits.ADIE = 0)
/* set interrupt enable for ADC module */
#define ADC_Interrupt_Enable()                 (PIE1bits.ADIE = 1)
/* clear interrupt flag for ADC module */
#define ADC_Interrupt_Flag_Clear()             (PIR1bits.ADIF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set ADC module interrupt -> high priority */
#define ADC_Interrupt_Priority_High()          (IPR1bits.ADIP = 1)
/* set ADC module interrupt -> low priority */
#define ADC_Interrupt_Priority_Low()           (IPR1bits.ADIP = 0)
#endif

#endif



/*________________________ TIMER0 ____________________*/

#if TIMER0_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for TIMER0 module */
#define TIMER0_Interrupt_Disable()                (INTCONbits.TMR0IE = 0)
/* set interrupt enable for TIMER0 module */
#define TIMER0_Interrupt_Enable()                 (INTCONbits.TMR0IE = 1)
/* clear interrupt flag for TIMER0 module */
#define TIMER0_Interrupt_Flag_Clear()             (INTCONbits.TMR0IF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set TIMER0 module interrupt -> high priority */
#define TIMER0_Interrupt_Priority_High()          (INTCON2bits.TMR0IP = 1)
/* set TIMER0 module interrupt -> low priority */
#define TIMER0_Interrupt_Priority_Low()           (INTCON2bits.TMR0IP = 0)
#endif

#endif

 /* Section : Data Types Declaration */

 /* Section : Function Declaration */

#endif	/* HAL_INTERRUPT_H */

