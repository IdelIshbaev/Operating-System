#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int dp;
    int fd[2];
    char string1[256] = "khochu 2 balla";
    char string2[256];
    if (pipe(fd) == 0) {
        dp = write(fd[1], string1, strlen(string1));
        close(fd[1]);
        dp = read(fd[0], string2, strlen(string1));
        close(fd[0]);
        printf("Read %d bytes: %s\n", dp, string2);
        exit(0);
    }
    return 0;
}

