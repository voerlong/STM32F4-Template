#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"

//ALIENTEK ̽����STM32F407������ ʵ��0
//STM32F4����ģ��-�⺯���汾
//����֧�֣�www.openedv.com
//�Ա����̣�http://eboard.taobao.com
//������������ӿƼ����޹�˾  
//���ߣ�����ԭ�� @ALIENTEK
void GPIO_8bit_init(void)
{
		
}

int main(void)
{
	uart_init(115200);
	delay_init(168);

  while(1){
    printf("1\r\n");
		delay_ms(500);
	}
}


