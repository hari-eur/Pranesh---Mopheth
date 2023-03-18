#include <stdio.h>
# define print(...) printf(__VA_ARGS__)
int main(){
    char str[25],str1[25],str2[25];
    scanf("%s",str);
    scanf("%s",str1);
    scanf("%s",str2);
    print("welcome to %s\n",str);
    print("hello to %s :Welcome to %s\n",str1,str2);
    return 0;
}