#include <string.h>
#include <stdio.h>

void expectativas_incompletas() {
    char str1[100];
    char str2[100];

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}

void longitudinales(){
    char str[100];

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

}

int main(){
    expectativas_incompletas();
    longitudinales();
}