#include <iostream>

class CTest
{
    public:
    CTest *member_func()
    {
        return this;
    }
};

long normal_func(long hidden_this)
{
    return hidden_this;
}

int main(int argc, const char** argv)
{
    CTest test;

    test.member_func();

    normal_func((long)&test);

    return 0;
}
