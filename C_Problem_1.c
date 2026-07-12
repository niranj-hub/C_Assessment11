#include <stdio.h>
int main()
{
    int x;
    int *ptr;
    printf("Enter a number:");
    scanf("%d",&x);
    ptr=&x;
    printf("Original value=%d\n",*ptr);
    printf("Enter the new value:");
    scanf("%d",ptr);
    printf("Changed value=%d\n",*ptr);
}
