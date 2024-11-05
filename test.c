#include<stdio.h>
int main()
{
    int n,flag,count=0;
    printf("Enter a value:");
    scanf("%d",&n);
    for(int i=1;i<=(n*n*n);i++)
    {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            flag=1;
        }
        if(i==1)
        continue;
        if(flag==0)
        {
           count++;
           if(count<=n)
           {
            printf("%d ",i);
           }
        }
    }
    return 0;
}