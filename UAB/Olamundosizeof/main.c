#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que coloque Olá Mundo! numa linha e em bom português (com acentos), e que indique o tamanho em bytes
(operador sizeof) dos seguintes tipos de dados: char; short; int; long; long long; float; double; long double.
Coloque um valor em cada linha.*/
int main()
{
    printf("Olá Mundo!\n");
    printf("sizeof(char): %lu\n", sizeof(char));
    printf("sizeof(short): %lu\n", sizeof(short));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(long): %lu\n", sizeof(long));
    printf("sizeof(long long): %lu\n", sizeof(long long));
    printf("sizeof(float): %lu\n", sizeof(float));
    printf("sizeof(double): %lu\n", sizeof(double));
    printf("sizeof(long double): %lu\n", sizeof(long double));

    return 0;
}
