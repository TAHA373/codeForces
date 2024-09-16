#include <cctype>
#include <iostream>


using namespace std;
string  ft_toUpper(string s)
{
    int i = -1;
    while (++i < s.length())
        s[i] = toupper(s[i]);
    return s;
}
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    s1 = ft_toUpper(s1);
    s2 = ft_toUpper(s2);
    if (s1 == s2)
        cout << 0 << endl;
    else if (s1 > s2)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}