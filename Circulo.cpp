#include <stdio.h>
#include <math.h>
int main()
{
    float dia, area;
    printf("Teclea el diametro del circulo: ");
    scanf("%f", &dia);
    area = (M_PI) * ((0.5 * dia)*(0.5 * dia));
    printf("El area del circulo es: %1.2f \n", area);
    return 0;
}