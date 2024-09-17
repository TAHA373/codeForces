#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    int num;
    stack<int> n_snack;
    int  i = -1;
    cin >> n;
    while (++i < n)
    {
        cin >> num;
        n_snack.push(num);
    }
    i = -1;
    // while (++i < n)
    // {
    //     if (n_snack[i] == n_snack[i + 1])
    //         n_snack.
    // }
    // i = -1;
    while (!n_snack.empty())
    {
        cout << n_snack.top() << " "; 
        n_snack.pop();
    }
    
    
}