// #include <climits>
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     int  i = 0;
//     int num;
//     int count =  1, m = 1e9;
//     int top = INT_MIN;
//     for (i = 0; i < n; i++)
//         array[i] = 0;
//     i = 0;
//     while (i < n)
//     {
//         cin >> num;
//         array[i] =  num;
//         i++;
//     }
//     i = 0;
//     int j = 0;
//     for (i = 0; i < n; i++)
//     {
//         m = array[i];
//         for(j = i + 1; j < n; j++)
//         {
//             if (m >= array[j])
//                 count++;
//             else
//                 break;
//             m = min(m, array[j]);
//         }
//         m = array[i];
//         for (j = i-1; j >= 0 ; j--)
//         {
//             if (m >= array[j])
//                 count++;
//             else
//                 break;
//             m = min(m, array[j]);
//         }
//         if (top < count)
//             top = count;
//         count = 1;
//     }
//         cout << top << endl;
// }

#include <climits>
#include <iostream>
#include <limits.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int array[n];
    int  i = 0;
    int num;
    int count =  1;
    int top = INT_MIN;
    for (i = 0; i < n; i++)
        array[i] = 0;
    i = 0;
    while (i < n)
    {
        cin >> num;
        array[i] =  num;
        i++;
    }
    i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (array[i] >= array[j])
                count++;
            else
                break ;
            cout << count << endl;
        }
        for (j = i - 1; j >= 0 ; j--)
        {
            if (array[i] >= array[j])
                count++;
            else
                break ;
        }
        if (top < count)
            top = count;
        count = 1;
 
    }
    cout << top << endl;
}