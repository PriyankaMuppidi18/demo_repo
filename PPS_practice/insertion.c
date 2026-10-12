#include<stdio.h>

int main(void)
{
    int a[10], n, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\n Enter array values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i; j > 0 && a[j-1] > a[j]; j--)
        {
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
        }
    }
    printf("\n the sorted array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}