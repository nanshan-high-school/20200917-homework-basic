#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a;

    printf("Input a number(-2147483647~2147483647): ");
    scanf("%d", &n);

    a = n/3;
    if(n-a*3 == 0)
        printf("%d is a multiple of 3 ", n);
    else
        printf("%d isn't a multiple of 3 ", n);

    return 0;
}