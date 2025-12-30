#include <stdio.h>

int main() {
    int num;

    printf("enter a number ");
    scanf("%d", &num);

    if (num >= -9 && num <= 9)
        printf("single digit");
    else
        printf(" not single digit");

    return 0;
}
