#include<stdio.h>
#include<stdlib.h>


int main(){

	FILE *fptr;

	fptr=fopen("hello.txt","w");
	fprintf(stderr," hello pranesh \n"); 
	//fprintf(stdout," hello pranesh \n");

	if (fptr==NULL)
		printf("Unable to open the file");
	else
	{
		fprintf(fptr,"my name is praneshkumar"); //fprintf(STDERR, "My name is PraneshKumar");
		printf("Data written successfully\n"); //Dmesg command, Check thisout
	}
	fclose(fptr);
	return 0;
}
