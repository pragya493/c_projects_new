//Malloc vs Calloc - ex. taken from Portfolio-courses https://www.youtube.com/@PortfolioCourses

#include <stdio.h>
#include <stdlib.h>
#define N 1000
#include <time.h>  //to generate random numbers

int main() {

    int size;
    srand(time(0));  //seed for random number generation
    size = rand() % 10000;  //generate a random size up to 9999
    int *junk;
    junk = (int*)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        junk[i] = rand();   //fill with random numbers
    }
    free(junk);

    int *arr;
    // arr = (int *)malloc(N * sizeof(int));
    arr = (int *)calloc(N, sizeof(int));
    for(int i=0; i< N; i++){
        printf("%d", arr[i]);
    }
    free(arr);

    return 0;
}

/*
    clock_t start, end;
    int *arr;

    //calculate time taken by malloc
    start = clock();
    arr = (int *)malloc(10000000 * sizeof(int));
    end = clock();
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit if memory allocation fails
    }
    else{
        printf("Time taken by malloc: %fs seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    } 
    free(arr);

    //calculate time taken by calloc
    start = clock();
    arr = (int *)calloc(10000000, sizeof(int));
    end = clock();
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit if memory allocation fails
    }
    else{
        printf("Time taken by calloc: %fs seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    } 
    free(arr);
*/
