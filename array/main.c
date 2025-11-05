#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main()
{
    int N = 5;
    int result = factorial(N);

    printf("%d! = %d", N, result);

    return 0;
}

/*int factorial(int num) {
    if (num > 0) {
        int n = num * factorial(num - 1);
        return n;
    }
    else {
        return 1;
    }
}*/

int factorial(int num) {
    int result = 1;

    if (num <= 1) { // 여기에다 안 두면 계속 재귀를 타게됨
        printf("finish num : ", num);
        return 1;
    }

    printf("num: %d, ", num);
    int recursive = factorial(num - 1);
    printf("recursive: %d, ", recursive);

    result = num * recursive;
    printf("%d * %d = %d\n", num, recursive, result);
    
    return result;
}