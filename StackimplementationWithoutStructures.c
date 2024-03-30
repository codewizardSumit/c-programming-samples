#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



#define MAX 10
int n1, n2;


typedef struct Stack{
    int item[MAX];
    int top;

}stack ;

stack s;

void createStack(stack *s){
    s->top = -1;
}
void push(stack *s, int n1){
    if(s -> top == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }
    return s -> item[++s -> top] = n1;
        
}
int pop(stack *s){
    if(s -> top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    return s -> item[s -> top--];
}


int peek(stack *s){
    if(s -> top == -1){
        printf("Stack Overflow\n");
        return -1;
    }
    return s -> item[s -> top];

}
void display(stack *s){
    int i;
    for(i = s -> top; i >= 0; i--)
         printf("%d\n", s -> item[i]);
}



int main()
{
   
    int choice;
    createStack(&s);
    do{
        system("cls");
        printf("\t\t****************************_STACK_OPERATION_*****************************\n\n");
        printf("\n[1] PUSH OPERATION");
        printf("\n[2] POP OPERATION");
        printf("\n[3] PEEK OPERATION");
        printf("\n[4] DISPLAY OPERATION");
        printf("\n[5] EXIT");

        printf("\vPlease Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter a number to push on stack : ");
                scanf("%d ",&n1);
                push(&s,n1);
                break;
            case 2:
                n2 = pop(&s);
                if(s->top == -1){
                    printf("\nStack is underflow");
                    break;
                }
                printf("\nPoped element is %d",n2);
                break;

             case 3:
                n2 = peek(&s);
                if(s->top == -1){
                    printf("\nStack is underflow");
                    break;
                }
                printf("\nPeeked element is %d",n2);
                break;
             case 4:
                display(&s);
                break;
             case 5:
                exit(0);
                break;
             default:
                printf("\nInvalid choice\n");
                break;




        
        }

    }while(n1 != 5);


    return 0;
}
