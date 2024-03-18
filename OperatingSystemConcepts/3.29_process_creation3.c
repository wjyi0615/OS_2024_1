//wait queue 에 프로세스 할당하기
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid>0)
        wait(NULL);
    printf("Hello, Process! %d\n", pid);

    return 0;
}