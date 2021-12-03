#include <bits/stdc++.h>
using namespace  std;

int main()
{

   int t, n[1000], i, j,k , arr[1000];
   
   cin >> t;

   for(i=1; i<=t; i++)
   {  
      cin >> n[k];

      for(j=0; j<n[k]; j++)
      {
         cin >> arr[j];
      }

      
   }

   for(j=(n[k]-1); j>=0; j--)
      {
         cout << arr[j]  << endl;
      }
   
   return 0;
}

//problem hacker rank: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
//value isn't reversing for 2 test cases
// only the last test case is working