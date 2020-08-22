#include <stdio.h>
#define MAX 3

int queue[MAX];
int front=-1, rear=-1;

void insert();
int delete_element();

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

int main()
{
    insert();
    insert();
    printf("%d",delete_element());
    printf("%d",delete_element());
    return 0;
}
