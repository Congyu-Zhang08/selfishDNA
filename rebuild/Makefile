# Makefile - 告诉 make 工具如何编译项目
# 类似 Python 不需要编译，但 C++ 必须先编译成机器码才能运行

# 编译器选择
CXX = g++

# 编译选项:
#   -std=c++11  使用 C++11 标准（原项目用的版本）
#   -O2         优化级别2（让程序跑得更快）
#   -Wall       显示所有警告（帮你发现潜在问题）
CXXFLAGS = -std=c++11 -O2 -Wall

# 最终生成的可执行文件名
TARGET = SelfishDNA

# ====== 规则 ======

# 第一条规则 = 默认规则，输入 make 就执行这个
# 目前只有一个 main.cpp，后面会逐步添加更多文件
$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# make clean = 删除编译产物，从头来过
clean:
	rm -f $(TARGET) *.o

# 声明 clean 不是文件名（否则如果存在叫 clean 的文件，make clean 会出问题）
.PHONY: clean
