// NonEss.cc - 非必需基因的实现

#include "NonEss.hh"

NonEss::NonEss() : Pearl()
{
    type = 0;
    mobility = 0.0;
}

NonEss::NonEss(int t) : Pearl()
{
    type = t;
    mobility = 0.0;
}

NonEss::~NonEss() {}

Pearl* NonEss::clone() const
{
    return new NonEss(*this);
}
