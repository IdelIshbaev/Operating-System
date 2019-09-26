#include  <stdio.h>
#include  <signal.h>
#include  <stdlib.h>
#include  <unistd.h>

void  INThandler(int sig){
    printf("%s", "\nu hited ctrl-c, bye\n");
    exit(0);
}

int  main(void){
    signal(SIGINT, INThandler);
    while (1)
        pause();
    return 0;
}
