#include <bits/stdc++.h>
using namespace std;
string s;
int n, count=0;
int main() 
{
    cin >> n >> s;
    for (int i = 0; i <n; i++) 
    {
        if (s[i] == s[i + 1]) 
        {
            count++;
        }
    }
    cout << count;
    return 0;
}