#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>

int main(){
    char str[] = "this is a nice day";
    int FILE = open("ex1.txt", O_RDWR);
    
    ftruncate(FILE, strlen(str));
    
    struct stat my_stat;
    stat("ex1.txt", &my_stat);
    
    char *adr = mmap(NULL, my_stat.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, FILE, 0);
    
    memcpy(adr, str, strlen(str));
    munmap(adr, my_stat.st_size);
    close(FILE);
    
    return 0;
}
