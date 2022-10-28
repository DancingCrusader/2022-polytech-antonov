#include <cassert>
#include <iostream>
#include <string>

using namespace std;

bool test(const char* str)
{
    if (str == nullptr)
    {
        return false;
    }
    else
    {
        if ((strlen(str) / 2 == 1) && (strlen(str) % 2 == 0))
        {
            return false;
        }
        else
        {
            int a = strlen(str);
            for (int i = 0; i < (a / 2); i++)
            {
                if (str[a / 2 - i] == str[a / 2 + i])
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
    }
}


int main()
{
    assert(test("gib") == false);
    assert(test("robust") == false);
    assert(test("sas") == true);
    assert(test("veeyeev") == true);
    assert(test("versionoisrev") == true);
    assert(test("qwertyuiooiuytrewq") == true);
    assert(test("-+-=-+-") == true);
    assert(test(nullptr) == false);
    return 0;
}
