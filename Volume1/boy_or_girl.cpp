#include <iostream>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int len = 0;
    int count = 0;
    int check = 0;
    //s1 = s2;
    int j =0;
    int i = 0;
    for ( i = 0; i < s1.length(); i++)
    {
        for (j = s1.length() - 1; j >= 0 ; j--)
        {
            if (s1[i] == s1[j] && j > i )
                count++;
        }
        if (count)
            check += 1;
       count = 0;
    }
    len = s1.length() - check;
    if (len % 2 == 0 )
        cout << "CHAT WITH HER!\n";
    else
         cout << "IGNORE HIM!\n";
}