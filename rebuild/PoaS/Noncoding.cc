// Noncoding.cc - 非编码DNA的实现

#include "Noncoding.hh"

Noncoding::Noncoding() : Pearl()
{
    type = 0;
    mobility = 0.0;
}

Noncoding::Noncoding(int t) : Pearl()
{
    type = t;
    mobility = 0.0;
}

Noncoding::~Noncoding() {}

Pearl* Noncoding::clone() const
{
    return new Noncoding(*this);
}
