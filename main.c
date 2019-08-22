#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"

 int main(void)
 {		
 
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
 	LED_Init();			     //LED�˿ڳ�ʼ��
	TIM3_Int_Init(19999,7199);//2s=(19999+1)(7199+1)/72000 
   	while(1)
	{
		LED0=!LED0;
		delay_ms(1000);		  //1000msΪһ�������任һ�Σ�������2s��һ�� 
	}	 

 
}	 
 
