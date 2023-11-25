#include "mymath.h"
int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}
bool istrue()
{
    return true;
}
void ThrowError()
{
    throw std::runtime_error("There is a runtile error!!");
}