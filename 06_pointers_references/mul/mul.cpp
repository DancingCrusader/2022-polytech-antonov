#include <cassert>
#include <iostream>
#include <string>

using namespace std;

const char arr[] = "0123456789";

// строку в целое переводим
int convert(const char* a)
{
    int res = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (a[i] == arr[x])
            {
                res *= 10;
                res += x;
            }
        }
    }
    // если число а отрицательное смотрим:
    if (a[0] == '-')
    {
        res *= -1;
    }
    return res;
}

// а тут наоборот, строку в целое
const char* int_to_str(int a)
{
    int arrn[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int i = 1;
    int b = a;
    // смотрим сколько в Б цифр
    while (b / 10 != 0)
    {
        b /= 10;
        i++;
    }
    // смешная часть - включаем динамический массив
    char *result = new char[i + 2];
    b = a;
    // положительные а тут:
    if (a >= 0)
    {
        for (int x = i - 1; x > -1; x--)
        {
            for (int z = 0; z < 10; z++)
            {
                if ((a % 10) == arrn[z])
                {
                    result[x] = arr[z];
                    break;
                }
            }
            a /= 10;
            result[i] = '\0';
        }
    }
    // отрицательные (прости господи) тут:
    else
    {
        a = b;
        result[0] = '-';
        a *= (-1);
        for (int x = 1; x < i + 1; x++)
        {
            for (int z = 0; z < 10; z++)
            {
                if ((a % 10) == arrn[z])
                {
                    result[i - x + 1] = arr[z];
                    break;
                }
            }
            a /= 10;
        }
        result[i + 1] = '\0';
    }

    return result;
}

// результат произведения ОБРАТНО в численный
int pre_mul(const char* a, const char* b)
{
    int res = convert(a) * convert(b);
    return res;
}

// или он же ^^^ в виде строки. Классно, а?
const char* mul(const char* a, const char* b)
{
    return int_to_str(pre_mul(a, b));
}

// я - муль 1000-7
int main()
{
    std::cout << mul("-200", "-45") << endl;
    return 0;
}
