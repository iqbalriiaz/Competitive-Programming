#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b;
  cin >> a >> b;

  while(a>0 && b>0) 
  /* after cheking all the digits, 
  at some point the digits value will be zero
  (meaning all the digits have been checked 
  and only then the conditon will be false*/
  {
    if((a%10)+(b%10)>=10)

   /* adding each digits of both numbers 
   wheather they have any carry or not */

   /* mod by 10 is used to find out 
      digits(from right)of a num
      i.e 1126%10=6  */
      {
         cout << "Hard\n";
         return 0;
      }

    a/=10;b/=10;
   /* division by 10 is used to cut-out 
   the last digits of the num
      i.e 1126/10=112 */
  }
  
  cout << "Easy\n";
}