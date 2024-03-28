#include <iostream>

using namespace std;

void primeChecker(int n)
{
    int counter;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i != 1 && i != n) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    primeChecker(n);
    return 0;
}