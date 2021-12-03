#include <iostream>
using namespace std;

int main(){

    int i,a,b, count = 0;

    cin >> a >> b;

    for(i=a; i<=b; i++){
        count++; //to count the iteration of the loop
    }
    cout << count; //print the iteration count
    return 0;
}