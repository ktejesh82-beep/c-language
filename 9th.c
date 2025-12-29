#include <stdio.h>

int main() {
    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("yes");
    else if (ch >= 'a' && ch <= 'z')
        printf("no");
    

    return 0;
}