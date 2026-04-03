// HK.hh - 管家基因（House-Keeping gene）
// 管家基因是细胞生存必需的基因，必须拥有全部类型才能活
// 类比：心脏、肺、肝——缺一个就死

#ifndef HK_HH
#define HK_HH

#include "Pearl.hh"   // 需要知道 Pearl 是什么，才能继承它

class HK : public Pearl    // "public Pearl" = 继承自 Pearl，Python 写法: class HK(Pearl):
{
public:
    int type;              // 管家基因的编号（1号、2号、3号...必须全部集齐）
    double mobility;       // 移动性（管家基因一般不跳，但保留这个字段统一接口）

    HK();                  // 默认构造函数
    HK(int t);             // 带参数的构造函数：指定基因编号
    ~HK();                 // 析构函数
    Pearl* clone() const;  // 实现父类要求的 clone（复制自己）
};

#endif
