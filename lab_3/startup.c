/* Eng.Raghda Maher */
#include "stdint.h"

#define SP 0x20001000
void Reset_Handler(void);
extern unsigned int _E_TEXT;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
extern int main(void);
static unsigned long stack_top[256];
void default_Handler(void)
{
    Reset_Handler();
}

void NMI_Handler(void) __attribute__((weak,alias("default_Handler")));
void H_fault_Handler(void) __attribute__((weak,alias("default_Handler")));

void(*g_p_fn_vetors[])() __attribute__((section(".vectors"))) = {
     (void (*)()) ((unsigned long)stack_top+sizeof(stack_top)),
    Reset_Handler,
   NMI_Handler,
   H_fault_Handler
};
void Reset_Handler(void)
{
	//copy data from flash to sram 
unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
unsigned char* P_src = (unsigned char*)&_E_TEXT ;
unsigned char* P_dis = (unsigned char*)&_S_DATA ;

int i=0;
	for (i; i < DATA_size ; i++ ) {
		
		*((unsigned char*)P_dis++) = *((unsigned char*)P_src++);
	}
	
	//init the .bss section
unsigned int BSS_size = (unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS ;
P_dis = (unsigned char*)&_S_BSS ;
i=0;
	for (i ; i < BSS_size ; i++ ) {
		
		*((unsigned char*)P_dis++) = (unsigned char)0;
	}
	//jump to main
    main();
}
