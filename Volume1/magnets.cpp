#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    int i = 0;
    int num = 0;
    int pos = 0;
    int neg = 0;
    cin >> n;
    int v1[n];
    i = 0;
    while (i < n)
    {
        cin >> pos;
        v1[i] = pos;
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (v1[i] == v1[i + 1])
        {
            i++;
        }
        else
        {
            num++;
            i++;
        }
    }
    cout << num << endl;
}