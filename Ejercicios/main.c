#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void absolute(){
    int n;
    scanf("%d", n);
    int absolute = abs(n);
    printf("El valor absoluto del numero introducido es: %d", absolute);
}

void inception() {
    srand(time(0));

    int random = rand();
    printf("Número aleatorio: %d\n", random);
}

