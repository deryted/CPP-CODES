#include<cstdio>
int main()
{
    int s,m,i1,i2,ans=2147483647,a;
    scanf("%d",&m);
    for(int i=0;i<3;i++)
    {
        scanf("%d %d",&i1,&i2);
        a=m/i1*i2;
        if(m%i1!=0)a+=i2;
        if(a<ans)ans=a;
        
    }
    printf("%d",ans);
    return 0;
}
