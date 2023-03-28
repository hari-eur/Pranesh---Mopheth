#include<stdio.h>
#include<stdlib.h>
int main(){
    int size ;
    printf("enter the size of the array \n");
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    int i;
    printf("enter the elements of array of integers \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(i=0;i<size;i++){
        sum =sum+arr[i];

    }
    printf("sum of the array elements: %d\n ",sum);
    free(arr);
    return 0;

    

}