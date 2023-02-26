#include<stdio.h>
#include<stdlib.h>


int main(){

	FILE *fptr;

	fptr=fopen("hello.txt","w");

	if (fptr==NULL)
		printf("Unable to open the file");
	else
	{
		fprintf(fptr,"my name is praneshkumar");
		printf("Data written successfully\n");
	}
	fclose(fptr);
	return 0;
}
