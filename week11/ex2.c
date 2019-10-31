
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>

int main(){
    
    setvbuf(stdout, NULL, _IOLBF, 5);
    
    printf("%c", 'h');
    sleep(1);
    printf("%c", 'e');
    sleep(1);
    printf("%c", 'l');
    sleep(1);
    printf("%c", 'l');
    sleep(1);
    printf("%c", 'o');
    sleep(1);
}
