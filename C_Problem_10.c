#include <stdio.h>
void strcon(char src1[],char src2[], char dst[])
{
    int i,j;
    for(i=0;src1[i]!='\0';i++)
    {
        dst[i]=src1[i];
    }
    for(j=0;src2[j]!='\0';j++)
    {
        dst[i]=src2[j];
        i++;
    }
    dst[i]='\0';
}
int main()
{
    char src1[50],src2[50],dst[100];
    printf("Enter first string:");
    scanf("%s",src1);
    printf("Enter second string:");
    scanf("%s",src2);
    strcon(src1,src2,dst);
    printf("Concatenated string: %s", dst);
}
