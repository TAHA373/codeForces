#include <iostream>

using namespace std;

int main()
{
    int n;
    int line = 0;
    int store = 0;
    int number_of_problems = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        store = 0;
        for(int j = 0; j < 3; j++)
        {
            cin >> line;
            store += line;             
        }
        if (store > 1)
            number_of_problems+=1;
    }
    cout << number_of_problems << endl;
}