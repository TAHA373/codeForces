#include <stdio.h>

int main()
{
    int n,h,person_h,min_width;
    min_width = 0;
    person_h = 0;
    int i = 0;

    scanf("%d", &n);
    scanf("%d", &h);
    while(i < n)
    {
        scanf("%d",&person_h);
        if (person_h > h)
            min_width+=2;
        else
            min_width+=1;
        i++;
    }
    printf("%d\n", min_width);
}