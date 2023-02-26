// In this program sprintf and snprintf are used 


#include<stdio.h>
#include<string.h>

int main(){

	char str[100];
	sprintf(str,"My name is praneshkumar");
	printf("%s",str);
	printf("\n");


	int len =strlen(str);
	printf("%d\n" , len);

	char pi[20];

	double dpi = 3.141592;

	sprintf(pi,"%f",dpi);
	printf("%s\n",pi);

	return 0;

}
