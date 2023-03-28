#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    printf("Transversing array using pointers \n");
    int i;
    for(i=0;i<5;i++){
        printf("%d ",*ptr+i);
    }
    return 0;
}