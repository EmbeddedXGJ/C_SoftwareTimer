#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
#include "software_timer.h"
#include "cmd.h"

void SoftWareTimer_Init(void);

int main(void)
{		
 
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
 	LED_Init();			     //LED�˿ڳ�ʼ��
	event_init();
	SoftWareTimer_Init();
	TIM3_Int_Init(9,7199);   //10Khz�ļ���Ƶ�ʣ�������5000Ϊ500ms     1ms
	 
   	while(1)
	{
		software_timer_main_loop();
		event_handle_loop();
	}
}	 
 
