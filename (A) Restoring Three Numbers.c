#include<stdio.h>
 
int main()
{
    int num[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(int j=0;j<4;j++)
    {
        if(num[j]>max)
        {
            max=num[j];
        }
    }
    int a=max-num[0];
    if(a!=0)
      { printf("%d ",a);}
    int b=max-num[1];
        if(b!=0)
       {printf("%d ",b);}
    int c=max-num[2];
        if(c!=0)
       {printf("%d ",c);}
    int d=max-num[3];
        if(d!=0)
       {printf("%d ",d);}
    return 0;
}