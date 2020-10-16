#include <stdio.h>
int main()
{
    float base, altura, area;
    printf("Teclea la base del triangulo: ");
    scanf("%f", &base);
    printf("Teclea la aturas del triangulo: ");
    scanf("%f", &altura);
    area=(base*altura)/2;
    printf("El area es: %1.2f \n", altura);
    return 0;
}