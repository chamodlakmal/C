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
            front=0;
        }else{
            front++;
        }
        return data;
    }


}

void display_elements()
{
    printf("\n");

    if(front==-1)
    {
        printf("\nEMPTY");

    }else{
        if(rear>=front)
        {
            for(int i=front;i<MAX;i++)
            {
                printf("%d\t",queue[i]);
            }

        }else{
            for(int i=front;i<MAX;i++)
            {
                printf("%d\t",queue[i]);
            }

            for(int i=0;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
        }
    }
}

int peek()
{
    if(front==-1&&rear==-1)
    {
        printf("\nEMPTY");
        return -1;
    }
    else
    {
       return queue[front];
    }
}

int main()
{
    insert(4);
    display_elements();
    insert(5);
    display_elements();
    insert(6);
    display_elements();
    printf("\n%d",delete_element());
    display_elements();
    insert(10);
    display_elements();
    return 0;
}
