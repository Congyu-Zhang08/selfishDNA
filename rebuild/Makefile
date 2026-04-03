# Makefile - SelfishDNA 复刻版
#
# 编译流程：
#   每个 .cc 文件 → 编译成 .o 文件（目标文件）→ 最后链接成可执行文件
#   Pearl.cc → Pearl.o ─┐
#   HK.cc    → HK.o    ─┤
#   ...                  ├─→ SelfishDNA（可执行文件）
#   main.cpp → main.o  ─┘

CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall

TARGET = SelfishDNA

# 所有需要编译的 .o 文件（每加一个新 .cc 就在这里加一行）
OBJECTS = main.o \
          PoaS/Pearl.o \
          PoaS/HK.o \
          PoaS/Transposase.o \
          PoaS/Noncoding.o \
          PoaS/NonEss.o

# 规则1：把所有 .o 链接成最终可执行文件
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# 规则2：通用规则——怎么把 .cc 变成 .o
#   $< = 输入文件（.cc）
#   $@ = 输出文件（.o）
#   -c = "只编译，不链接"（生成 .o 而不是可执行文件）
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 规则3：main.cpp 比较特殊（.cpp 后缀，不是 .cc）
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: clean
