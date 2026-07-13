#include <stdio.h>
int strcomp(char src[],char dst[])
{
    int i=0;
    while(src[i]!='\0'||dst[i]!='\0')
    {
        if(src[i]!=dst[i])
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    char src[50],dst[50];
    int result;
    printf("Enter first string:");
    scanf("%s",src);
    printf("Enter second string:");
    scanf("%s",dst);
    result=strcomp(src,dst);
    if(result==1)
        printf("Success");
    else
        printf("Failure");
}
