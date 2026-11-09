# GNUmakefile
# ---------------------------------------------------------------------------
# 放在工程根目录，和 CubeMX 生成的 Makefile 并列。
#
# 为什么叫 GNUmakefile：
#   GNU make 查找 makefile 的顺序是  GNUmakefile -> makefile -> Makefile，
#   所以有这个文件时会优先读它。这里用 include 把 CubeMX 的 Makefile 拉进来，
#   于是原来的 make / make clean / 所有变量全部照常工作，只是多了几个 target。
#
# 为什么不在 Makefile 里直接加：
#   CubeMX 每次 GENERATE CODE 都会整个重写 Makefile，手加的 target 会被抹掉。
#   而 CubeMX 不认识 GNUmakefile，永远不会覆盖它。
# ---------------------------------------------------------------------------

include Makefile

# STM32CubeProgrammer CLI 路径。
# 优先级（高到低）：
#   1. 命令行传入： make flash FLASH_CLI="C:/其他路径/STM32_Programmer_CLI.exe"
#   2. 环境变量：   set FLASH_CLI=...   （然后再 make flash）
#   3. 下面这个默认值（本机安装位置）
FLASH_CLI ?= E:/STM32CubeProgrammer/bin/STM32_Programmer_CLI.exe

.PHONY: flash flash-only

# 编译 + 烧录
flash: all
	@echo ">>> flashing $(BUILD_DIR)/$(TARGET).elf"
	"$(FLASH_CLI)" -c port=SWD -d $(BUILD_DIR)/$(TARGET).elf -v -rst

# 只烧录，不重新编译（改完代码没动过、只想重烧时用）
flash-only:
	@echo ">>> flashing $(BUILD_DIR)/$(TARGET).elf"
	"$(FLASH_CLI)" -c port=SWD -d $(BUILD_DIR)/$(TARGET).elf -v -rst
