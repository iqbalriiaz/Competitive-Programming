#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sum=0;
    cin >> a >> b;
    if((a-1)>b)
    {
        sum=a+(a-1);
        cout << sum;
    }

    else if((b-1)>a)
    {
        sum=b+(b-1);
        cout << sum;
    }

    if((a-1)==b || (b-1)==a)
    {
        sum=a+b;
        cout << sum;
    }
    
    else if(a==b)
    {
        sum=a+b;
        cout << sum;
    }
    return 0;

} 
