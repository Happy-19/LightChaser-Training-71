一、工程配置笔记：

芯片型号：STM32F103C8T6

系统时钟：配置为72MHz

开发环境：Makefile+ARM GCC+Vscode

烧录工具：STM32CubeProgrammer+ST-link

二、引脚配置：

PA13 -> SYS_JIMS-SWDIO -> ST-Link调试数据线

PA14 -> SYS_JTCK-SWCLK -> ST-Link调试时钟线

PA6 -> GPIO-Input -> 读取按键状态

PB0 -> GPIO-Input -> 读取按键状态

PB4 -> GPIO-Output -> 输出高低电平

PB6 -> GPIO-Output -> 输出高低电平

PB8 -> GPIO-Output -> 输出高低电平

三、编译与烧录：

编译：终端输入make

连接ST-Link与板子

烧录：终端输入make flash

工程配置如下
![alt text](02project.png)
最终效果见附件