#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
int main1()
{
    char** arr;
    int count=fillArr(&arr,stdin);
    lineSort(arr, count);
    printLines((const char**)arr, count);
    return 0;
}