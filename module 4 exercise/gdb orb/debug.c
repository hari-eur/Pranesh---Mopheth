

// c programming code with segmentation fault error

/*#include<stdio.h>
int main(){
    char *str ="pen";
    str[0]='h';
    printf("%s\n",str);
    return 0;
}*/

// c programming after removing the error

#include<stdio.h>
int main(){
    char str[4]="pen";
    str[0]='h';
    printf("%s\n",str);
    return 0;
}