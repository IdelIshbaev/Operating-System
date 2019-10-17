#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int search_in_frame(int page_num, int frame[], int page_frames) {
    for (int i = 0; i < page_frames; i++) {
        if (frame[i] == page_num) return 1;
    }
    return 0;
}
void shift_age(int age[], int page_num, int frame[], int page_frames) {
    for (int i = 0; i < page_frames; i++) {
        if (frame[i] == page_num) age[i] = INT_MAX;
        else
            age[i] = age[i]>>1;
    }
}
int find_most_aged_ind(int *age, int page_frames) {
    int min = INT_MAX;
    int i = 0;
    int ind = 0;
    for (i = 0; i < page_frames; i++) {
        if (age[i] < min) {
            min = age[i];
            ind = i;
        }
    }
    return ind;
}
int main(){
    int hit = 0;
    int miss = 0;
    int page_frames;
    scanf("%d", &page_frames);
    int frame[page_frames];
    int age[page_frames];
    
    for (int i = 0; i < page_frames; i++) {
        frame[i] = 0;
    }
    
    for (int i = 0; i < page_frames; i++) {
        age[i] = 0;
    }
    FILE *file = fopen("input.txt", "r");
    int page_num;
    while (!feof(file)) {
        fscanf(file, "%d", &page_num);
        int ch = search_in_frame(page_num, frame, page_frames);
        if(ch == 1){
            hit++;
            shift_age(age, page_num, frame, page_frames);
        }else{
            miss++;
            int most_aged_ind = find_most_aged_ind(age, page_frames);
            frame[most_aged_ind] = page_num;
            age[most_aged_ind] = 0;
            shift_age(age, page_num, frame, page_frames);
        }

    }

    float doub = (double)hit/(double)miss;
    printf("%lf\n", doub);
    fclose(file);
    return 0;
}
