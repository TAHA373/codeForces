#include <iostream>
using namespace std;

void ft_even(int n)
{
    string s = "ROYGRBIV";
    int i = 0;
    int j = 0;
    while (i < n)
    {   
        if (j > 7)
            j = 0;
        cout << s[j];
        i++;
        j++;
    }
    cout << "\n";
}
void ft_odd(int n)
{
    string s = "ROYGBIV";
    int i = 0;
    int j = 0;
    int flag = 0;
    while (i < n)
    {   
        if (j > 6)
            {
                flag = 1;
                j = 5;
            }
        cout << s[j];
        i++;
        if (flag)
            j--;
        else
            j++;
    }
    cout << "\n";
}
int main()
{
    int n;
    cin >> n;
    int color = 1;
    int i = 1;
    int j = 1;

    int round = 0;
    round = n / 4;
    if (!(n % 4))
        ft_even(n);
    else
        ft_odd(n);
}