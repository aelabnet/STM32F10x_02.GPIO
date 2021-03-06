/*******************************************************************************
** 文件名: 		mian.c
** 版本：  		1.0
** 工作环境: 	RealView MDK-ARM 5.20
** 作者: 		  aelab
** 生成日期: 	2015-04-10
** 功能:		  控制GPIO开关
** 相关文件:	无
** 修改日志：	2015-04-10   创建文档
*******************************************************************************/
/* 包含头文件 *****************************************************************/
#include "stm32f10x.h"
#include "ae_GPIO.h"
/* 类型声明 ------------------------------------------------------------------*/
/* 宏定义 --------------------------------------------------------------------*/

/* 变量 ----------------------------------------------------------------------*/


/* 函数声明 ------------------------------------------------------------------*/
/* 函数功能 ------------------------------------------------------------------*/

/*******************************************************************************
  * @函数名称	main
  * @函数说明   主函数 
  * @输入参数   无
  * @输出参数   无
  * @返回参数   无
  *****************************************************************************/
int main(void)
{
	  LED_Init();

    while (1)
    {

			if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_10))
				GPIO_SetBits(GPIOA,GPIO_Pin_9);
			else
				GPIO_ResetBits(GPIOA,GPIO_Pin_9);
			  
				 
    }
}

#ifdef  USE_FULL_ASSERT
/*******************************************************************************
  * @函数名称	assert_failed
  * @函数说明   报告在检查参数发生错误时的源文件名和错误行数
  * @输入参数   file: 源文件名
  				line: 错误所在行数 
  * @输出参数   无
  * @返回参数   无
  *****************************************************************************/
void assert_failed(uint8_t* file, uint32_t line)
{
    /* 用户可以增加自己的代码用于报告错误的文件名和所在行数,
       例如：printf("错误参数值: 文件名 %s 在 %d行\r\n", file, line) */

    /* 无限循环 */
    while (1)
    {
    }
}
#endif

/***********************************文件结束***********************************/
