#include <bits/stdc++.h>
using namespace  std;

int main()
{
   int y, a, b, c, d;

   cin >> y;

   while (true)
   {
       y=y+1;

       a=y/1000;   //first digit
       b=y/100%10; //second digit
       c=y/10%10; //third digit
       d=y%10;    //fourth digit

       if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
       {
           break;
       }
   }

    cout << y << endl;
    return 0;

}