#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>





int Stack[100]; //Declaring a 100 elements stack array
int top = -1; // Declaring and initializing the stack pointer


void push(int ); //Declaring a function prototype for inserting an element into the stack
int pop(int ); //Declaring a function prototype for removing an element from the stack
void dispay(); //Declaring a function prototype for displaying the element of a stack

void main(){
    int ch;
    int n1 = 0, n2 = 0;
    while(1){
        

        //Creating an INTERACTIVE INTERFACE for performing stack operations
        printf("\t\t++++++++++++++++++-> WELCOME TO STACK IMPLEMENTATION <-+++++++++++++++++++++\n");

        printf("\n\nSelect a choice from the following\n\n");
        printf("1. Push an element into the stack\n");
        printf("2. Pop an element from the stack\n");
        printf("3. Display the elements of the stack\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);



        //creating a switch cases for the respective function
        // if (isdigit(ch)){
    
            switch (ch){
                case 1:
                    printf("Enter the element you want to to push into the stack: ");
                    scanf("%d", &n1);
               
                    push(n1);
                    break;
            
                case 2:
                    n2 = pop(n2);
                    printf("\n%d is popped out of the stack\n\n\t",n2);
                    getch();
                    break;

                case 3:
                    dispay();
                    getch();
                    break;

                case 4:
                    exit(0);
                    break;
                default:
                    printf("\nInvalid choice\n\n\t");
                    break;
            }
      
    }
    
        
}
//PUSH FUNCTION

void push(int n1){
    if(top == 99){
        printf("\nStack is full\n\n\t");
        getch();
        return;
    }
    else{
        top++;
        Stack[top] = n1;
    }
}

//POP FUNCTION

int pop(int n2){
    if(top == -1){
        printf("\nStack is empty.");
        printf(" Kindly choose push operation to fill the stack\n");
        getch();
        exit(0);
    }
    else{
        n2 = Stack[top];
        top--;
    }
    return n2;
}

//DISPLAY FUNCTION

void dispay(){
    if(top == -1){
        printf("\nStack is empty\n\n\t");
        getch();
        return;
    }
    else{
        for(int i = top; i >= 0; i--){
            printf("\n%d is found on stack\n",Stack[i]);
        }
    }
}