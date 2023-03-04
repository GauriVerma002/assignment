#include <iostream>
using namespace std;
int main()
{
    int a, b, swap;
    cout << "Enter two number for swapping ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "swapped values are = " << a << " " << b << endl;
    return 0;
}
