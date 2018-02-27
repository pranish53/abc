#include<stdio.h>
#include<conio.h>
int fib(int ,int ,int );
int main()
{
    int a=0,b=1,c,n=0;
    printf("%d\t%d\t",a,b);
    fib(a,b,n);
}
int fib(int a,int b,int n)
{
    int c;
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
    n+=1;
    if(n<8)
    {
        fib(a,b,n);
    }
}
