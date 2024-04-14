#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10 
//defining structure for the queue
typedef struct queue {
    int que[MAX_SIZE];
    int Front;
    int Rear;
} ques; //ques is an alias for the structure queue

void createq(ques *);
void enqueue(ques *, int);
int dequeue(ques *);
void display(ques *);
int isEmpty(ques *);
int isFull(ques *);

int main() {
    int ele, val, ch; 
    ques q;
    createq(&q);

    do {
        printf("\nMain Menu:\n");
        printf("\n[press 1] ENQUEUE.\n[press 2] DEQUEUE.\n[press 3] DISPLAY.\n[press 4] EXIT.\n");
        printf("\nEnter your choice please : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (!isFull(&q)) {
                    printf("\nEnter a number to be inserted into the queue : ");
                    scanf("%d", &ele);
                    enqueue(&q, ele);
                    printf("\n%d is successfully inserted\n", ele);
                } else {
                    printf("\nOverflow: Elements cannot be inserted\n");
                }
                break;
            case 2:
                if (!isEmpty(&q)) {
                    val = dequeue(&q);
                    printf("Removed value is : %d", val);
                } else {
                    printf("\nUnderflow: No element to remove\n");
                }
                break;
            case 3:
                if (!isEmpty(&q)) {
                    printf("\nQueue elements : ");
                    display(&q);
                } else {
                    printf("\nUnderflow: No element to show\n");
                }
                break;
            case 4:
                printf("\nThank you\nGood Bye\n");
                exit(0);
            default:
                printf("\n[!]. Invalid value. Please Enter a valid number\n");
        }

    } while (ch != 4);//running the do-while loop untill user choose 4

    return 0;
}

void createq(ques *q) {
    //initializing empty queue
    q->Front = -1; 
    q->Rear = -1;
}

void enqueue(ques *q, int num) {
    if (q->Rear == MAX_SIZE - 1) {
        printf("\nOverflow: Elements cannot be inserted\n");
        return;
    }
    if (isEmpty(q)) {
        //setting front pointer to index value 0 of the array
        q->Front = 0; 
    }
    q->Rear++;
    q->que[q->Rear] = num;
}

int dequeue(ques *q) {
    int num;
    if (isEmpty(q)) {
        printf("\nUnderflow: No element to remove\n");
        return -1; // Return a default value indicating underflow
    }
    num = q->que[q->Front];
    if (q->Front == q->Rear) { // If there was only one element in the queue
        q->Front = -1;
        q->Rear = -1;
    } else {
        q->Front++;
    }
    return num;
}

void display(ques *q) {
    for (int i = q->Front; i <= q->Rear; i++) { //running for loop from front to rear 
        printf("%d ", q->que[i]);
    }
}

int isEmpty(ques *q) {
    return (q->Front == -1 && q->Rear == -1);
}

int isFull(ques *q) {
    return (q->Rear == MAX_SIZE - 1);
}
