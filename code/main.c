#include "ch32fun.h"
#include <stdio.h>

int main() {
    // Initialize system
    SystemInit();


    Delay_Ms(2000); // uh idk so i dont mess up my chip

    RCC->APB1PCENR

    // allow for deep sleep mode
    PWR->CTLR |= PWR_CTLR_PDDS;
    PFIC->SCTLR |= PFIC_SCTLR_SLEEPDEEP;

    while(1) {
        __WFE();
    }

}