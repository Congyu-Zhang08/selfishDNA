// Pearl.cc - 珠子基类的实现（源文件）
// 头文件里只是"声明"了函数，这里写函数的"实现"（具体代码）

#include "Pearl.hh"

// 构造函数：创建一颗珠子时，所有计数器归零
// 相当于 Python 的 def __init__(self):
Pearl::Pearl()
{
    type = 0;
    gene_age_ = 0;
    num_horizontal_transfers_ = 0;
    num_vertical_transfers_ = 0;
    num_jumps_ = 0;
}

// 析构函数：珠子被销毁时调用（这里没什么要清理的，所以是空的）
// Python 不需要这个，因为有垃圾回收机制
Pearl::~Pearl()
{
}
