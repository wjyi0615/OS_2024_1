#include <stdio.h>
#include <unistd.h>

//process 생성하기
int main()
{
    pid_t pid;
    pid = fork();
    printf("Hello, Process!\n");

    return 0;
}