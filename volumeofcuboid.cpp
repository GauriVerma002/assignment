#include <iostream>
using namespace std;
int main()
{
    int vol, l, w, h;
    cout << "Enter length width and height to calculate volume of cuboid ";
    cin >> l >> w >> h;
    vol = l * w * h;
    cout << "volume of cuboid =" << vol << endl;
    return 0;
}
