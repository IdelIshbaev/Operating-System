
#include  <stdio.h>
#include  <signal.h>
#include  <stdlib.h>
#include  <unistd.h>

void  KILLhandler(int sig){
    printf("%s", "kill comand");
    exit(0);
}

void  STOPhandler(int sig){
    printf("%s", "stop comand");
    exit(0);
}

void  USR1handler(int sig){
    printf("%s", "ussr comand");
    exit(0);
}

int  main(void){
    signal(SIGKILL, KILLhandler);
    signal(SIGSTOP, STOPhandler);
    signal(SIGUSR1, USR1handler);
    while (1)
        pause();
    return 0;
}
