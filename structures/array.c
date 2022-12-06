#include "headers/dep.h"

int main(void){
    char array[4][30] = {"this is", "an", "array", "ong"};
    for(int i = 0; i<4; i++){
        printf("%s\n", array[i]);
    }
    int numarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int num; num<10; num++){
        printf("%d\n", numarray[num]);
    }

    return 0;
}