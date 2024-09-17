#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count  = 0;
    int position = 0;
    char c = 'a';
    int  i = 0;
    while (i < s.length())
    {
       if (i != 0)
            c = s[i - 1];
        if (c - s[i] < 0 && abs(c -s[i]) > 13 )
                position =  (26 +  (c - s[i])) ;
        else if (c - s[i] > 0 && abs(c -s[i]) > 13)
             position =  ((c - s[i]) - 26 ) ;
        else
            position = c - s[i];
        count += abs(position);
        i++;

    }
    cout <<  count << endl;
}