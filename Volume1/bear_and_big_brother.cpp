#include <iostream>

using namespace std;
int main()
{
    int a,b, y;
    cin >> a;
    cin >> b;
    y = 0;
    while (1)
    {
        y++;
        a *= 3;
        b *= 2;
        if (a > b)
            break ;
    }
    cout << y << endl;
}