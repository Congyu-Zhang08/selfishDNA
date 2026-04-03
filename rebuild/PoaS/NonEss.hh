// NonEss.hh - 非必需基因（Non-Essential gene）
// 不是生存必需的，但拥有它能提升适应度
// 类比：跑得快不是活着的必要条件，但能帮你抢到更多食物

#ifndef NONESS_HH
#define NONESS_HH

#include "Pearl.hh"

class NonEss : public Pearl
{
public:
    int type;
    double mobility;

    NonEss();
    NonEss(int t);
    ~NonEss();
    Pearl* clone() const;
};

#endif
