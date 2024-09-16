#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    vector<int> v1;
    cin >> n;
    int i = -1;
    while (++i < n)
    {
        cin >> num;
        v1.push_back(num);
    }
    sort(v1.begin(), v1.end());
    for (i = 0; i < n; i++)
        cout << v1[i] << " ";
    cout << endl;

}