#include "headers/dep.h"

struct monkey{
    int a;
    float b;
    char str[20];
};

int main(void){
    struct monkey data;
    data.a = 5 * sizeof(data);
    data.b = 5.5  * sizeof(data);
    strcpy(data.str, "Hello Losers.");
    printf("The integer value is: %d\n", data.a);
    printf("The floating point: %f\n", data.b);
    printf("The string: %s\n", data.str);
    return 0;
}