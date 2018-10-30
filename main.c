#include <stdio.h>

int main() {
    unsigned int n = 1;

    //do{
    //  n++
    //  }while(!(n % 22 == 0 && n % 14 == 0));

    // do-while fait au moins une fois l'execution => il faut commencer a n = 1 et pas n = 0 pour que la condition
    // soit respecter au début.


    while(!(n % 22 == 0 && n % 14 == 0)){
        n++;
    }

    printf ("%u\n", n);

    return 0;
}