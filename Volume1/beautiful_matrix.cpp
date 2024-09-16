#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    int matrix[5][5];
    int line, colomn, moves;
    line = 0;
    colomn = 0;
    moves = 0;
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >>  matrix[i][j];
            if (matrix[i][j] == 1)
                {
                    line = i;
                    colomn = j;
                } 
        }
    }
    // while (line < 2)
    // {
    //     line++;
    //     moves++;
    // }
    // while (colomn < 2)
    //     {
    //         colomn++;
    //         moves++;
    //     }
    // while (line > 2)
    // {
    //     line--;
    //     moves++;
    // }
    // while (colomn > 2)
    // {
    //     colomn--;
    //     moves++;
    // }

    cout << abs(line - 2) + abs(colomn - 2)<< endl;
}

// 1 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
