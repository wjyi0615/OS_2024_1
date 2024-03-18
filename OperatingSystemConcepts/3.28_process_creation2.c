#include <stdio.h>
#include <unistd.h>

//process pid 확인하기
int main()
{
    pid_t pid;
    pid = fork();
    printf("Hello, Process! %d\n", pid);

    return 0;
}