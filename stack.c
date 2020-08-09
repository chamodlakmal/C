#include <stdio.h>
#define MAX 3

int stack[MAX];
int top=-1;

void push(int data){

    if(top==MAX-1){
        printf("Stack is Full");
    }else{
        top++;
        stack[top]=data;
    }
}

int main(){

    push(8);
    push(8);
    push(8);
    push(8);
    return 0;
}
