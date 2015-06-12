#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    long a = atol(argv[1]);
    long b = 0;
    std::cout<<" start " << a << std::endl;
    while(a>0)
    {
        b = b*10 + a % 10;
        a /=10;
    }
    std::cout<<" end " << b << std::endl;
}