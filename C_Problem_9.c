#include <stdio.h>
void intcon(int src1[],int size1,int src2[],int size2,int dst[])
{
    int i,j=0;
    for(i=0;i<size1;i++)
    {
        dst[j]=src1[i];
        j++;
    }
    for(i=0;i<size2;i++)
    {
        dst[j]=src2[i];
        j++;
    }
}
int main()
{
    int src1[5],src2[5],dst[10];
    int i;
    printf("Enter 5 elements of first array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&src1[i]);
    }
    printf("Enter 5 elements of second array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&src2[i]);
    }
    intcon(src1,5,src2,5,dst);
    printf("Concatenated array:");
    for(i=0;i<10;i++)
    {
        printf("%d ",dst[i]);
    }
}
