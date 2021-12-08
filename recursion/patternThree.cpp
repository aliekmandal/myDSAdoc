/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <bits/stdc++.h>

using namespace std;

void patternThree(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";

    patternThree(n - 1);

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{

    patternThree(5);
    return 0;
}