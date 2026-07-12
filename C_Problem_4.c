#include <stdio.h>
int find_2digit_odd_sum7(int n)
{
    int ones,tens;
    ones=n%10;
    tens=n/10;
    if(n%2!=0 && ones+tens==7)
        return n;
    else
        return 0;
}
int main()
{
    int i,x;
    for(i=10;i<=99;i++)
    {
        x=find_2digit_odd_sum7(i);
        if(x!=0)
            printf("%d ",x);
    }
}
