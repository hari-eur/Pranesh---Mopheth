// in this program different types of pattern are formed 


#include<stdio.h>




void p1(){

	int i,j;
	printf("\nPattern 1\n\n");
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
	printf("\n");
	}	
}
int p2(){

        int i,j;
	printf("\nPattern  2\n\n");
        for(i=1;i<=8;i++){
                for(j=1;j<=i;j++){
                        printf("* ");
                }
        printf("\n");
        }
        return 0;
}

int p3(){

        int i,j;
	printf("\nPattern 3\n\n");
        for(i=1;i<=8;i++){
                for(j=1;j<=i;j++){
                        printf("%c",j+64);
                }
        printf("\n");
        }
        return 0;
}

int p4(){

        int i,j;
        printf("\nPattern 4\n\n");
        for(i=1;i<=8;i++){
                for(j=8;j>=i;j--){
                        printf("%d",j);
                }
        printf("\n");
        }
        return 0;
}
int p5(){

        int i,j;
        printf("\nPattern 5\n\n");
        for(i=8;i>=1;i--){
                for(j=1;j<=i;j++){
                        printf("%c",j+64);
                }
        printf("\n");
        }
        return 0;
}
int p6(){

        int i,j;
        printf("\nPattern 6\n");
        for(i=1;i<=8;i++){
                for(j=8;j>=i;j--){
                        printf("* ");
                }
        printf("\n");
        }
        return 0;
}
int p7(){

        int i,j;
        printf("\nPattern 7\n");
        for(i=1;i<=8;i++){
                for(j=1;j<=8;j++){
			if (i==8||i==1||j==8||j==1){
				printf("* ");
			
			}
			else
			{
				printf("  ");
			}
                }
        printf("\n");
        }
        return 0;
}
int p8(){

        int i,j;
        printf("\nPattern 8\n");
        for(i=1;i<=8;i++){
                for(j=1;j<=i;j++){
			if(i==8||j==1||j==i){
				printf("* ");
			}
			else
			{
				printf("  ");

			}
                       
                }
        printf("\n");
        }
        return 0;
}
int p9(){

        int i,j,k;
        printf("\nPattern 9\n");
        for(i=1;i<=8;i++){
		for (k=8;k>=i;k--){
			printf(" ");
		
		}
                for(j=1;j<=i;j++){
                        printf("%d",j);
                }
        printf("\n");
        }
        return 0;
}
int p10(){

        int i,j,k;
        printf("\nPattern 10\n");
        for(i=1;i<=8;i++){
                for (k=8;k>=i;k--){
                        printf(" ");

                }
                for(j=1;j<=i;j++){
                        printf("*");
                }
        printf("\n");
        }
        return 0;
}
int p11(){

        int i,j,k;
        printf("\nPattern 11\n");
        for(i=1;i<=8;i++){
                for (k=8;k>=i;k--){
                        printf(" ");

                }
                for(j=1;j<=i;j++){
                        printf("%c",j+64);
                }
        printf("\n");
        }
        return 0;
}

int p12(){

	int s,i,j,c,n;
	printf("\n pascals triangle \n\n");
	for(i=0;i<n;i++){

		for(s=0;s<n-i-1;s++)
			printf(" ");
		for(j=0;j<i+1;j++)
		{
			if(j==0||i==0)
			{
				c=1;
			
			}
			else
				c=c*(i-j+1)/j;
				
			printf("%d ",c);
		}
		printf("\n");
	}
        return 0;
}


int main(){
	int a,n;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("\n");
	p1();
	a=p2(); //a=p2();
	a=p3(); //a=p3();
	a=p4(); //a=p4();
	a=p5(); //a=p5();
	a=p6(); //a=p6();
	a=p7(); //a=p7();
	a=p8(); //a=p8();
	a=p9(); //a=p9();
	a=p10(); //a=p10();
	a=p11(); //a=p11();
        a=p12(); //a=p12();
	return 0;
}
