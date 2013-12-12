#include<stdio.h>
#include<conio.h>
int abc(int, int);
int main()
{
    int a,b,x;
    scanf("%d",&a);
    scanf("%d",&b);
    x=abc(a,b);
    printf("%d",x);
    getch();
}
int abc(int a,int b)
{
    int i,j;
    if(b!=0)
    {            
    j=a;
    for( i=1;i<b;i++)
    {
    j=j*a;
    }
}
else 
{
     j=1;
     }
return j;
}
