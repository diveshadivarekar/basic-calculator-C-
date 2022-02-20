#include<stdio.h>
void main()
{
    int num1 , num2 ;
    char op;
    clrscr();
    printf("enter first number = ");
    scanf("%d",&num1);
    printf("enter second number = ");
    scanf("%d",&num2);
    printf("\nnumber for your operator\n1 add\n2 subt \n3 multiplication\n4 divide\n5 modulus\n");
    printf("enter your operator = ");
    scanf(" %c",&op);
    
    if(op == '+' || op == '1')
    {
        printf("your answer is : %d",num1+num2);
    }
    else if(op == '-' || op == '2')
    {
        printf("your answer is : %d",num1-num2);
    }
    else if(op == '*' || op == '3')
    {
        printf("your answer is : %d",num1*num2);
    }
    else if(op == '/' || op == '4')
    {
        printf("your answer is : %d",num1/num2);
    }
    else if(op == '%' || op == '5')
    {
        printf("your answer is : %d",num1%num2);
    }
    else
    {
        printf("\ninvalid operator");
    }
    printf("\nthanks for using my calculator");
    scanf("%d",&num1);
}