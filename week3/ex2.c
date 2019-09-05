#include <stdio.h>
void b_sort(int arr[]){
    for(int i = 0; i < 9-1; i++){
        for(int j = 0; j < 9-i-1; j ++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    b_sort(arr);
    
    return 0;
}
