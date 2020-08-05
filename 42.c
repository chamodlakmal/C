#include <stdio.h>
int main(){
    int size;
    printf("Enter your array size :");
    scanf("%d",&size);
    if(size>=0){
       int myArray[size];
        for(int i=0;i<size;i++){
            printf("Enter your myArray[%d]th element :",i);
            scanf("%d",&myArray[i]);
        }

        int minimum=myArray[0];

        for(int i=1;i<size;i++){
            if(minimum>myArray[i]){
               minimum= myArray[i];
            }
        }
        printf("Minimum number : %d",minimum);
    }else{
        printf("Array size can't be minus value.");
    }


    return 0;
}
