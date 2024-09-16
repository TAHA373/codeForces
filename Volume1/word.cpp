#include <cctype>
#include <iostream>

using namespace std;

string ft_toUpper(string s)
{
    int  i = -1;
    while (++i < s.length())
        s[i] = toupper(s[i]);
    return (s);
}
string ft_toLower(string s)
{
    int  i = -1;
    while (++i < s.length())
        s[i] = tolower(s[i]);
    return (s);
}
int main()
{
    string s;
    cin >> s;
    int i = -1;
    int lower = 0;
    int upper = 0;

    while (++i < s.length())
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
    if (lower >= upper)
        {
            s = ft_toLower(s);
            cout << s << endl;
        }
    else
        {
            s = ft_toUpper(s);
            cout << s  << endl;
        }
    
}