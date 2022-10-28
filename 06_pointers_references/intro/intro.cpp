#include <cassert>
#include <iostream>
#include <string>

using namespace std;

unsigned int length(const char* str)
{
    if (str == nullptr)
    {
        return 0;
    }
    else
    {
        return strlen(str);
    }
}


int main()
{
    assert(length("j") == 1);
    assert(length("jub") == 3);
    assert(length("") == 0);
    assert(length("asbestos") == 8);
    assert(length(nullptr) == 0);
    return 0;
}
