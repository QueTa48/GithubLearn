#include "SomeClassA.h"

SomeClassA::SomeClassA()
{
    _pData = new int(5);
}

SomeClassA::~SomeClassA()
{
    delete _pData;
}

void SomeClassA::printData()
{
    std::cout << *_pData << std::endl;
}