#include <bits/stdc++.h>

using namespace std;

int sum_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int lastDigit = n % 10;
    int newNum = n / 10;

    return lastDigit + sum_digit(newNum);
}

int main()
{

    cout << sum_digit(1245);

    return 0;
}