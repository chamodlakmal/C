#include <stdio.h>
#define MAX 3

int queue[MAX];
int front=-1, rear=-1;

void insert();
int delete_element();
int peek();
void display();

void insert() {

    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    if (rear==MAX-1)
        printf("\n OVERFLOW");
    else if (rear==-1&&front==-1) {
        front=0;
        rear=0;
        queue[rear]=num;
    }
    else {
        rear++;
        queue[rear]=num;
    }

}

int delete_element(){
    int val;
    if(front==-1||front>rear){
        printf("\n UNDERFLOW");
        return -1;
    }else{
      val= queue[front];
      front++;
      if(front>rear){
        front=rear=-1;
      }
      return val;
    }
}

int peek(){

    if(front==-1||front>rear)
    {
        printf("QUEUE IS EMPTY");
        return -1;

    }else{
        return queue[front];
    }

}

void display()
{

    printf("\n");
    if(front==-1||front>rear)
    {
        printf("QUEUE IS EMPTY");

    }else{
        for(int i=front;i<=rear;i++){
            printf("\t %d",queue[i]);
        }
    }


}

int main()
{
    insert();
    insert();
    printf("%d",delete_element());
    insert();
    printf("%d",peek());
    display();
    return 0;
}
