#include<stdio.h>
 
void main()
{
    int sum,sub,mult,div,mod;
    int a,b;
    printf("Entre Operator(+,*,/,-)\n");
    scanf("%d%d%d%d%d",&sum,&sub,&mult,&div);
    printf("Entre The Vaule Of A & B \n");
    scanf("%d%d",&a,&b);

    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;

    switch('+')
    {
        case'+':
        printf("Addition Of Two No is %d \n",sum);
        break;
    }
    switch('-')
    {
        case'-':
        printf("Substraction Of Two No is %d \n",sub);
        break;
    }
switch('*')
    {
        case'*':
        printf("Multiplication Of Two No is %d \n",mult);
        break;
    }
    switch('/')
    {
        case'/':
        printf("Divition Of Two No is %d \n",div);
        break;
    }
}