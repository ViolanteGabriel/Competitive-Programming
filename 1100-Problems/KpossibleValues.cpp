#include <iostream>
#include <vector>
#include <typeinfo>
#include <set>
using namespace std;

int pow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int t, a, b, l, counter = 0, exponentX = 0, exponentY = 0;
    set<int> divisors;
    cin >> t;
    for (int i = 0; i < t; i++)
    {  
        cin >> a >> b >> l;
        for(exponentX = 0, exponentY = 0; pow(a, exponentX) * pow(b, exponentY) <= l; exponentX++)
        {
            for (exponentY = 0; pow(a, exponentX) * pow(b, exponentY) <= l; exponentY++)
            {
                if (l % (pow(a, exponentX) * pow(b, exponentY)) == 0) 
                {
                    if (divisors.find(pow(a, exponentX) * pow(b, exponentY)) == divisors.end())
                    {
                        counter++;
                        divisors.insert(pow(a, exponentX) * pow(b, exponentY));
                    }
                }
            }
            exponentY = 0;  
        }
        printf("%d\n", counter);
        counter = 0;
        divisors.clear();
    }
    return 0;
}
