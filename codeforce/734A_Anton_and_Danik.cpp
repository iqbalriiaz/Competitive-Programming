#include <bits/stdc++.h>
using namespace  std;

int main()
{
   int n, i, countA=0, countB=0;
   string s;

   cin >> n >> s;

   for(i=0; i<n; i++)
   {
      if(s[i]=='A')
      {
         countA++;
      }
      else if(s[i]=='D')
      {
         countB++;
      }
   }

   if(countA>countB)
   {
      cout << "Anton";
   }
   else if(countB>countA)
   {
      cout << "Danik";
   }

   else cout << "Friendship";

    
    
   return 0;
}