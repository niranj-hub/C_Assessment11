#include <stdio.h>
int increment(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        p[i]++;
    }
}
int main()
{
    int a[5],i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    increment(a);
    printf("After increment:");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
