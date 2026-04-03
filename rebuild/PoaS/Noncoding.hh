// Noncoding.hh - 非编码DNA（垃圾DNA）
// 不编码任何蛋白质，没有功能，但占据基因组空间
// 基因组越大，维护成本越高，所以非编码DNA是一种"负担"
// 但它也是突变的"原料"——有时能变成有功能的基因

#ifndef NONCODING_HH
#define NONCODING_HH

#include "Pearl.hh"

class Noncoding : public Pearl
{
public:
    int type;          // 记住它"曾经是什么类型的基因"（基因退化成非编码后保留原编号）
    double mobility;

    Noncoding();
    Noncoding(int t);
    ~Noncoding();
    Pearl* clone() const;
};

#endif
