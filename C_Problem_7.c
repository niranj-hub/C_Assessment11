#include <stdio.h>
int memcomp(int src[],int dst[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(src[i]!=dst[i])
            return 0;
    }
    return 1;
}
int main()
{
    int src[5],dst[5],i,result;
    printf("Enter first array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&src[i]);
    }
    printf("Enter second array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&dst[i]);
    }
    result=memcomp(src,dst,5);
    if(result==1)
        printf("Success");
    else
        printf("Failure");
}
