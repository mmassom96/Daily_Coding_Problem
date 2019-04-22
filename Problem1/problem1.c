#include<stdio.h>
#include<stdlib.h>

int main(){
    int k = 17;
    int array[] = {10, 15, 3, 7};
    int length = sizeof(array)/sizeof(int);
    
    int i = 0;
    int j = length - 1;
    while(i<j){
        if(array[i] + array[j] == k){
            printf("For k = %d, elements %d and %d of array[] sum to k.\n", k, i, j);
            return 0;
        }
        if(j - i == 1){
            i++;
            j = length -1;
        }
        else{
            j--;
        }
    }

    printf("For k = %d, no elements of array[] sum to k.\n", k);
    return 0;
}