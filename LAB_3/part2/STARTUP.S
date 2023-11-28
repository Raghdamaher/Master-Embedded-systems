/* startup_cortexM3.s
Eng.Raghda
*/
/*SRAM 0x20000000*/
.section .vector 
.word 0x20001000 /* stack top address */
.word _reset /* 1 Reset */
.word Vector_handler /* 2 NMI */
.word Vector_handler /* 3 Hard Fault */
.word Vector_handler /* 4 MM Fault */
.word Vector_handler /* 5 Bus Fault */
.word Vector_handler /* 6 Reserved */
.word Vector_handler /* 7 Reserved */
.word Vector_handler /* 8 Reserved */
.word Vector_handler /* 9 Reserved */
.word Vector_handler /* 10 Reserved */
.word Vector_handler /* 11 SV call */
.word Vector_handler /* 12 Debug reserved */
.word Vector_handler /* 13 RESERVED */
.word Vector_handler /* 14 PendSV */
.word Vector_handler /* 15 SysTick */
.word Vector_handler /* 16 TRQ0 */
.word Vector_handler /* 17 TRQ1 */
.word Vector_handler /* 18 TRQ2 */
.word Vector_handler /* 19 ... */

.section .text
_reset:
    bl main
    b .
.thumb_func
Vector_handler:
    b _reset