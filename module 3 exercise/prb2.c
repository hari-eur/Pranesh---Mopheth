#include<stdio.h>
int main(){
    int n ,m,i,j;
    printf("enter the size of matrix in odd number : ");
    scanf("%d",&n);
    printf("enter the matrix element\n");
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n enter the element to be found : ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if ( i!=0 && arr[i][j]==m){
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    printf("the replaced element matrix\n ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}