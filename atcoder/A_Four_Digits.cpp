#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int n;

    cin >> n;

    if(n>=0 && n<=9999)
    {
        cout.fill('0');

        cout << setw(4) << n << endl;
    }
    
    return 0;
}