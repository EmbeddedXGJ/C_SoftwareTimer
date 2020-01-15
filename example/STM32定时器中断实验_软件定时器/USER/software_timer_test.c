#include "software_timer.h"
#include "debug.h"

software_timer_t timer1_t;
software_timer_t timer2_t;
software_timer_t timer3_t;
//software_timer_t timer4_t;
//software_timer_t timer5_t;
//software_timer_t timer6_t;

void timer1_cb(void *parm)
{
	PRINT_INFO("1000ms >> dyy");
}

void timer2_cb(void *parm)
{
	PRINT_INFO("2000ms >> dyy");
}

void timer3_cb(void *parm)
{
	PRINT_INFO("500ms  >> dyy");
} 

void timer4_cb(void *parm)
{
	printf("timer4\r\n");
} 


void timer5_cb(void *parm)
{
	printf("timer5\r\n");
} 

void timer6_cb(void *parm)
{
	printf("timer6\r\n");
} 


void SoftWareTimer_Init(void)
{
    software_timer_init(&timer1_t,1000,1000,timer1_cb);
    software_timer_init(&timer2_t,2000,2000,timer2_cb);
    software_timer_init(&timer3_t,500,500,timer3_cb);
//	timer_init(&timer4_t,29,1,timer4_cb);
//	timer_init(&timer5_t,45,1,timer5_cb);
//	timer_init(&timer6_t,85,1,timer6_cb);

	software_timer_start(&timer1_t);
	software_timer_start(&timer2_t);
	software_timer_start(&timer3_t);
//	traverse_list();
//	printf("\r\n");
	
//	timer_stop(&timer2_t);
//	traverse_list();
//	printf("\r\n");
//	
//	timer_stop(&timer3_t);
//	traverse_list();
//	
//	printf("\r\n");
//	timer_stop(&timer1_t);
//	traverse_list();
//	
//	printf("\r\n");
//	timer_start(&timer2_t);
//	traverse_list();
}

