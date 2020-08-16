#include <stdio.h>
#define MAX 3

int queue[MAX];
int front=-1,rear=-1;

void insert();

void insert(){

    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    if(rear==MAX-1)
        printf("\n OVERFLOW");
    else if(rear==-1&&front==-1){
       front=0;
       rear=0;
       queue[rear]=num;
    }else{
        rear++;
        queue[rear]=num;
    }

}

int main()
{
    insert();
    insert();
    insert();
    insert();
    return 0;
}
