#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
int main(){
    DIR *dir = opendir("tmp");
    if(dir == NULL) {
        return 1;
    }
    char dir_name[100];
    struct stat fStat;
    struct dirent *dp;
    strcpy(dir_name, "tmp/");
    while((dp = readdir(dir))!=NULL){
        stat(dir_name,&fStat);
        strcat(dir_name,dp->d_name);
        if(fStat.st_nlink > 1){
            printf("%s Links found. Link files:\n",dp->d_name);
            struct dirent *link;
            DIR *dir2 = opendir("tmp");
            while((link = readdir(dir2)) != NULL){
                if((link->d_ino == dp->d_ino) &(strcmp(link->d_name,dp->d_name)!=0)){
                    printf("%s ",link->d_name);
                }
            }
            printf("\n");
        }
        else printf("%s with no links\n", dp->d_name);
        strcpy(dir_name,"tmp/");
    }
    return 0;
}
