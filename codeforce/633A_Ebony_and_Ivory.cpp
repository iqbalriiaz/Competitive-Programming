#include <iostream>
using namespace std;
int main(){
    
    long long a, b, c, i, j;

    cin >> a >> b >> c;

    for (i=0; i<c/a+2; i++)
    {
            for(j=0;j<c/b+2;j++)
            {
                if(((i*a)+(j*b))==c)
                {
                 cout << "Yes";
                 return 0;
                }
            }

        }
        cout << "No" << endl;
} 

