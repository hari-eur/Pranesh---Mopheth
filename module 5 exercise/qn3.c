#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[100];
	int op;
        printf("Enter the option:\n 1 to Encrypt.\n 2 to Decrypt.\n 3 to quit.\n");
        scanf("%d",&op);
	printf("Enter the file name:");
	scanf("%s",name);
	FILE *ftp=fopen(name,"r+");
	//FILE *ftp1=fopen("e.txt","w+");
	//FILE *ftp2=fopen("d.txt","w+");
	char ch,ch1;
	switch(op)
	{
		case 1:
			{
				FILE *ftp1=fopen("e.txt","w+");
				while((ch=fgetc(ftp))!=EOF)
        				{
						ch=ch+100;
				                fputc(ch,ftp1);
        				}
				fclose(ftp);
				fclose(ftp1);
				break;
			}
		case 2:
			{
				FILE *ftp2=fopen("d.txt","w+");
				printf("Condition Satisfied\n");
				while((ch1=fgetc(ftp))!=EOF)
					{
						printf("Inside loop\n");
						ch1=ch1-100;
						fputc(ch1,ftp2);
					
					}
				fclose(ftp);
				fclose(ftp2);
				break;
			}
		case 3:
			{
				exit(1);
			}
	}
	//fclose(ftp);
	//fclose(ftp1);
	//fclose(ftp2);
	return 0;
}

