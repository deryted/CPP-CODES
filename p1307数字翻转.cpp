#include<cstdio>
int main()
{
    int a,s;
    scanf("%d",&a);
    while(a)
    {
        s=s*10+a%10;
        a/=10;
    }
    printf("%d",s);
    return 0;
}
