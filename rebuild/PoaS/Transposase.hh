// Transposase.hh - 转座酶（自私的跳跃基因）
// 这是整个项目的"主角"——它能在基因组里跳来跳去、自我复制
// mobility 越高，跳跃越频繁

#ifndef TRANSPOSASE_HH
#define TRANSPOSASE_HH

#include "Pearl.hh"

class Transposase : public Pearl
{
public:
    int type;
    double mobility;   // 关键属性！控制跳跃频率，范围 0.0 ~ 1.0
                       // 这个值本身也会突变（进化），是研究的核心

    Transposase();
    Transposase(int t);
    ~Transposase();
    Pearl* clone() const;
};

#endif
