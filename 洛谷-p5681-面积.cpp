#include<cstdio>
int main()
{
    int a,b,c;
    long long s1,s2;
    scanf("%d %d %d",&a,&b,&c);
    s1=(long long)a*a;
    s2=(long long)b*c;
    if(s1>s2)printf("Alice");
    else printf("Bob");
    return 0;
}
