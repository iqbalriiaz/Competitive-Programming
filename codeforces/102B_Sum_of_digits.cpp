#include <iostream>
#include<string>
using namespace std;

int main() 
{
	 string n;
	 cin>>n;

	 int counter=0;
	 int length=n.length();

	while(length>1)
    {
		int sum=0;

		for(int i=0;i<length;i++)
        {
//it basically sums the digits of a number represented as a string.
//and for this the string must contains only chars in the '0'..'9' range
//i.e 5 + '0' == '5'
			sum=sum+n[i]-'0'; 
			
	    }
		 n=to_string(sum);
         length=n.length();
         ++counter;
	 }
	 cout<<counter;

	return 0;
}
