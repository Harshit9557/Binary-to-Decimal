#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s+=(r*pow(2,c));
        c++;
        n=n/10;
    }
    printf("%d",s);
}
