#include<stdio.h>

int main(void)
{
    int a[20], i, j, n, temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\n Enter values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
    printf("\n The sorted array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}