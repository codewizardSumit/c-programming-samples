#include <stdio.h>
#include <conio.h>

void add();
void mult();
void div();
void sub();
void user_input();
int x,y;

int main()
{
    int ch;
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Choose the operation :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        div();
        break;
    default:
        printf("\nWrong Choice! please Enter number correctly");
    }
    getch();
    return 0;
    
}
void user_input()
{
 
    printf("Enter the two numbers :");
    scanf("%d %d",&x,&y);
}
void add()

{
    int sum;
    user_input();
    sum = x + y;
    printf("\nAddition is %d",sum);
}
void sub()
{
    int sub;
    user_input();
    sub = x - y;
    printf("\nSubtraction is %d",sub);

}
void mult()
{
    int mult;
    user_input();
    mult = x * y;
    printf("\nMultiplication is %d",mult);
    
}
void div()
{
    int div;
    user_input();
    if(y == 0){
        printf("\n[!]Error. Division by zero");
        return 0;
    }
    div = x / y;
    printf("\nDivision is %d",div);
    
}