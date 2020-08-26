#include <stdio.h>
#define MAX 3
int queue[MAX];
int front=-1;
int rear=-1;

void insert(int num)
{
    if((front==0 && rear==MAX-1)||rear==(front-1)%(MAX-1))
    {
        printf("\nOVERFLOW");

    }else if(front==-1 &&rear==-1)
    {
        rear=front=0;
        queue[rear]=num;
    }else if(rear==MAX-1 && front!=0)
    {
        rear=0;
        queue[rear]=num;
    }else{
        rear++;
        queue[rear]=num;
    }
}

int delete_element()
{
    if(front==-1)
    {
        printf("\nQUEUE IS UNDERFLOW");
        return -1;
    }else{
        int data=queue[front];
        queue[front]=-1;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }else if(front==MAX-1)
        {
            front=0
        }else{
            front++;
        }
        return data;
    }


}

int main()
{
    insert(10);
    return 0;
}
