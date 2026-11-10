一、工程配置笔记：

芯片型号：STM32F103C8T6

系统时钟：配置为72MHz

开发环境：Makefile+ARM GCC+Vscode

烧录工具：STM32CubeProgrammer+ST-link

二、引脚配置：

PA13 -> SYS_JIMS-SWDIO -> ST-Link调试数据�?

PA14 -> SYS_JTCK-SWCLK -> ST-Link调试时钟�?

PA6 -> GPIO-Input -> 读取按键状�?

PB0 -> GPIO-Input -> 读取按键状�?

PB4 -> GPIO-Output -> 输出高低电平

PB6 -> GPIO-Output -> 输出高低电平

PB8 -> GPIO-Output -> 输出高低电平

三、编译与烧录�?

编译：终端输入make

连接ST-Link与板�?

烧录：终端输入make flash

工程配置如下
![alt text](02project.png)

最终效果见附件

- [LED ��ת��ʾ](https://github.com/Happy-19/LightChaser-Training-71/releases/download/v1.0/LEDchange.mp4)
- [������̰���ʾ](https://github.com/Happy-19/LightChaser-Training-71/releases/download/v1.0/twopress.mp4)