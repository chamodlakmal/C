#include <stdio.h>
#define MAX 3

int stack[MAX];
int top=-1;

void display() {

    if (top==-1) {
        printf("Stack is Empty\n");
    }
    else {
        for (int i=top;i>=0;i--) {
            printf("\n%d", stack[i]);
        }
    }


}

void push(int data) {

    if (top==MAX-1) {
        printf("Stack is Full");
    }
    else {
        top++;
        stack[top]=data;
    }
}

int pop() {
    if (top==-1) {
        printf("Stack is Empty");
        return -1;
    }
    else {
        int val=stack[top];
        top--;
        return val;
    }

}

int peek() {

    if (top==-1) {
        printf("Stack is Empty");
        return -1;
    }
    else {
        return stack[top];
    }
}

int main() {

    int option, number;

    do {
        printf("\n*********MAIN MENU*********");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\n Enter the number to be pushed on stack: ");
            scanf("%d", &number);
            push(number);
            break;
        case 2:
            number=pop();
            if (number==-1) {

            }
            else {
                printf("\n The value deleted from the stack is: %d", number);
            }
            break;
        case 3:
            number=peek();
            if (number==-1) {

            }
            else {
                printf("\n The value stored at top of stack is: %d", number);
            }
            break;
        case 4:
            display();
            break;
        }

    } while (option!=5);

    return 0;
}
