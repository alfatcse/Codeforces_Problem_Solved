#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50];
    int length,i=0,a=0,b=0;
    gets(str);
    length = strlen(str);
    for(i; i<length; i++)
    {
        if(str[i]=='a')
        {
          a++;
        }
        else
        {
           b++;
        }
    }
    while(a<b||a==b)
    {
        b--;
    }
    printf("%d",a+b);
    return 0;
}