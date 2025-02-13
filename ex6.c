#include <stdio.h>

int main() {
    int pi = 3.141592;
    int raio;
    float area;

    printf("Digite um valor qualquer para o raio da esfera: "); 
    scanf("%d", &raio);

    area =  4 * pi * (raio ** 2);

    printf("A area da esfera é: %2.2f", area); 

    return 0; 
}
