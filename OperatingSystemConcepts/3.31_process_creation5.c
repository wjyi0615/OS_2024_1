// 프로세스 개수는??
// 8개 입니다..
#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();
    fork();
    fork();
    printf("Hello, fork()!\n");
    return 0;
}