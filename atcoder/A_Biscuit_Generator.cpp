#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a, b, t, i, result=0;
 cin >> a >> b >> t;

//solution one
    for(i=1; i<=t; i++)
    {
        if(i%a==0)
        {
            result = result+b;
        }
    }
//solution two
//result = (t/a)*b also works

    cout << result;
    return 0;

} 
