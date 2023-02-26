#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{

    int PassLen = 20;           // password length
    char Password[PassLen + 1]; // characters of password
    char ch;
    int chPos = 0; // character position

    printf("please enter your password : password length 1-%d\n", PassLen);

    while (1)
    {

        ch = getch(); // getting the charcter one by one using getch() function

        if (ch == 13)
        { // when user press enter key
            break;
        }
        else if (ch == 8)
        {
            if (chPos > 0)
            {
                chPos--;
                Password[chPos] = '\0';
                printf("\b \b");
            }
        }
        else if (ch == 32 || ch == 9)
        { // when user given space or tab
            continue;
        }
        else
        {
            if (chPos < PassLen)
            {
                Password[chPos] = ch;
                chPos++;
                printf("#");
            }
            else
            {
                printf("your input exceeds password length\n");
                break;
            }
        }
    }
    Password[chPos] = '\0';
    printf("\n");
    if (strlen(Password) == 0)
    {
        printf("no password entered\n");
    }
    else
    {
        printf("your password is %s /n", Password);
    }
    return 0;
}