#include<stdio.h>
#include<stdlib.h>

int main(){
    int k;
    printf("Enter a value for k: ");
    scanf("%d", &k);

    int x;
    printf("Enter a value for the length of array[]: ");
    scanf("%d", &x);

    int array[x];
    int y;
    for(y = 0; y < x; y++){
        printf("Enter a value for array[%d]: ", y);
        scanf("%d", &array[y]);
    }

    printf("array[] = { ");
    for(y = 0; y < x - 1; y++){
        printf("%d, ", array[y]);
    }
    printf("%d }\n", array[y]);

    int i = 0;
    int j = x - 1;
    while(i<j){
        if(array[i] + array[j] == k){
            printf("For k = %d, elements %d and %d of array[] sum to k.\n", k, i, j);
            return 0;
        }
        if(j - i == 1){
            i++;
            j = x -1;
        }
        else{
            j--;
        }
    }
   
    printf("For k = %d, no two elements of array[] sum to k.\n", k);
    return 0;
}