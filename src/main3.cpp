#include <stdio.h>
#include "task3.h"
#define SIZE 50
int main3()
{
    char str[SIZE];
    fgets(str, SIZE, stdin);
    printf("%d",isPalindrome(str));
    return 0;
}