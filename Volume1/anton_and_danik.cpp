#include <iostream>
using namespace std;

int count_n_char(string s, char c, int len)
{
    int  i = 0;
    int count =  0;
    while (i < len)
    {
        if ( c == s[i]) 
            count++;
        i++;
    }
    return (count);
}
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a, d;
    a = count_n_char(s, 'A', n);
    d = count_n_char(s, 'D', n);
    if (a > d)
        cout << "Anton\n";
    else if (a < d)
         cout << "Danik\n";
    else
        cout << "Friendship\n";
}
