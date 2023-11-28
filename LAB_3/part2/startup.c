/* Eng.Raghda Maher */
#include "stdint.h"

#define SP 0x20001000

extern unsigned int _E_TEXT;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;

extern int main(void);
void default_Handler(void)
{
    Reset_Handler();
}

void NMI(void) __attribute__((weak,alias("default_Handler")));
void H_fault_Handler(void) __attribute__((weak,alias("default_Handler")));
void MM_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));
void Bus_Fault(void) __attribute__((weak,alias("default_Handler")));
void Usage_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));

uint32_t vectors[] __attribute__((section(".vectors"))) = {
    SP,
    (uint32_t)&Reset_Handler,
    (uint32_t)&NMI,
    (uint32_t)&H_fault_Handler,
    (uint32_t)&MM_Fault_Handler,
    (uint32_t)&Bus_Fault,
    (uint32_t)&Usage_Fault_Handler
};
void Reset_Handler(void)
{
	//copy data from flash to sram 
unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
unsigned char* P_src = (unsigned char*)&_E_text ;
unsigned char* P_dis = (unsigned char*)&_S_DATA ;

int i=0;
	for (i; i < DATA_size ; i++ ) {
		
		*((unsigned char*)P_dis++) = *((unsigned char*)P_src++);
	}
	
	//init the .bss section
unsigned int BSS_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
P_dis = (unsigned char*)&_S_bss ;
i=0;
	for (i ; i < BSS_size ; i++ ) {
		
		*((unsigned char*)P_dis++) = (unsigned char)0;
	}
	//jump to main
    main();
}
