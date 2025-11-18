#include<stdio.h>
int main()
{
    int n=20, *p=NULL,**pp=NULL;
    p=&n;
    pp=&p;
    printf("%d",***(&pp));
}