/***** Mapping concept *****/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int frequency_array[n + 1];
    for (int i = 1; i < n + 1; i++)
        frequency_array[i] = 0;
    int curr;
    curr = n;
    int  i = -1;

    while (++i < n)
    {
        int num;
        cin >> num;
        frequency_array[num] = 1;
        while (frequency_array[curr] == 1)
        {
            cout << curr << " ";
            curr--;
        }
        cout << "\n";
    }
}