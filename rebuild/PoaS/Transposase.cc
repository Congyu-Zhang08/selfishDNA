// Transposase.cc - 转座酶的实现
// 结构和 HK 几乎一样，区别在于 mobility 有实际意义

#include "Transposase.hh"

Transposase::Transposase() : Pearl()
{
    type = 0;
    mobility = 0.0;
}

Transposase::Transposase(int t) : Pearl()
{
    type = t;
    mobility = 0.0;   // mobility 会在 Genome::GenerateGenome 里设置具体值
}

Transposase::~Transposase() {}

Pearl* Transposase::clone() const
{
    return new Transposase(*this);
}
