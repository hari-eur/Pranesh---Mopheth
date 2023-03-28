#include<stdio.h>
void permute(char *str,int left,int right);
int main(){
    char str[10];
    printf("enter the string\n");
    scanf("%[^\n]s",&str);
    int i;
    int len =0,num=0,low=0,upper=0,special=0;
    for(i=0;str[i]!=0;i++){
        len++;
    }
    if(len!=8){
        printf("enter character length of 8 \n");
    }
    else{
        for(i=0;i<len;i++){
            if(str[i]>='0' && str[i]<='9'){
                num++;
            }
            else if(str[i]>='a' &&str[i]<='z'){
                low++;

            }
            else if(str[i]>='A' && str[i]<='Z'){
                upper++;
            }
            else{
                special++;
            }
        }
        if(num!=0 && low!=0 && upper!=0 && special!=0){
            printf("given testcases are satisfied\n");
            printf("the possible permutations are ;\n");
            permute(str,0,len-1);
        }
        else{
            printf("given testcases are not satisfied\n");
        }

        return 0;
    }


}
void permute(char *str,int left,int right){
    int i,j;
    char temp;
    for(i=left;i<=right;i++){
        for(j=i+1;j<right;j++){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            permute(str,i+1,right);
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;

        }
    }
    printf("%s\n",str);
}