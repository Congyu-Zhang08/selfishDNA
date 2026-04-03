// HK.cc - 管家基因的实现

#include "HK.hh"

// 默认构造函数
HK::HK() : Pearl()     // ": Pearl()" = 先调用父类构造函数（Python 里 super().__init__()）
{
    type = 0;
    mobility = 0.0;
}

// 带参数的构造函数：创建指定编号的管家基因
// 比如 new HK(3) 就创建 3 号管家基因
HK::HK(int t) : Pearl()
{
    type = t;
    mobility = 0.0;
}

HK::~HK() {}

// clone：返回自己的一个副本
// 这样不管指针类型是 Pearl* 还是 HK*，调用 clone() 都能正确复制
Pearl* HK::clone() const
{
    return new HK(*this);
    // *this = "我自己这个对象"
    // new HK(*this) = 创建一个新的 HK，内容和我一样
    // 这叫"拷贝构造"，C++ 默认会逐字段复制
}
