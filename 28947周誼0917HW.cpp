#include <stdio.h>
using namespace std;

int main() 
{
    int num;
    printf("請輸入一個整數num: ");
    scanf("%d", &num);

    if(num % 3 == 0)
    {
        printf("%d 是3的倍數\n",num);
    }   
    else
    {
        printf("%d 不是3的倍數\n",num);
    }    
}    
