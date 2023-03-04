#include <iostream>
using namespace std;
int main()
{
    int a[10],add=0;
    cout << "Enter ten number for addition ";
    for(int i=0;i<10;i++){
    cin >> a[i];
    add=add+a[i];
    }
   
    cout << "Addition of ten values of array = " << add << endl;
    return 0;
}
