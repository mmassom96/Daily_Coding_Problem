#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int product_array[5];

    int totalprod = 1;
    int i;
    for(i = 0; i < 5; i++){
        totalprod = totalprod * array[i];
    }

    for(i = 0; i < 5; i++){
        product_array[i] = totalprod / array[i];
    }

    printf("Initial Array: [ ");
    for(i = 0; i < 4; i++){
        printf("%d, ", array[i]);
    }
    printf("%d ]\n", array[i]);

    printf("New Array: [ ");
    for(i = 0; i < 4; i++){
        printf("%d, ", product_array[i]);
    }
    printf("%d ]\n", product_array[i]);
    
    return 0;
}