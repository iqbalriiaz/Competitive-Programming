#include <bits/stdc++.h>
using namespace  std;

int main()
{
   int arr[100], i; 
   double n;
   int countA=0, countB=0, countC=0;

   cin >> n;
   
   for(i=0; i<n; i++)
   {
      cin >> arr[i];

      if(arr[i]>0)
      {
         countA++;
      }
      else if(arr[i]<0)
      {
         countB++;      
      }
      else if(arr[i]==0)
      {
         countC++;
      }

   }

   double posRatio = (countA/n);
   double negRatio = (countB/n);
   double zeroRatio = (countC/n);

   cout << fixed << setprecision(6) << posRatio  <<endl;
   cout << fixed << setprecision(6) << negRatio  <<endl;
   cout << fixed << setprecision(6) << zeroRatio <<endl;

   return 0;
}