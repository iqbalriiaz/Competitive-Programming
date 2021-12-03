#include <bits/stdc++.h>
using namespace  std;

int main()
{

   long long int arr[100000];
   int i, n;
   long long sum=0;

   cin >> n;

   for(i=0; i<n; i++)
   {
      cin >> arr[i];
      sum=sum+arr[i];
   }
   cout << sum;
   return 0;
}