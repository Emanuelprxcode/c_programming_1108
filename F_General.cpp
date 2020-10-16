#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, cof2a, cofb4ac, x1, x2;
    printf("Teclea el valor del coeficiente A:");
    scanf("%f", &a);
    printf("Teclea el valor del coeficiente B:");
    scanf("%f", &b);
    printf("Teclea el valor del coeficiente C:");
    scanf("%f", &c);
    cof2a = 2 * a;
    cofb4ac = (pow(b, 2)) - (4 * a * c);
    if (cof2a != 0)
    {
        if (cofb4ac >= 0)
        {
            x1 = ((-b) + (sqrt(cofb4ac))) / (cof2a);
            x2 = ((-b) - (sqrt(cofb4ac))) / (cof2a);
            printf("El valor de x1 es: %1.2f \n", x1);
            printf("El valor de x2 es: %1.2f \n", x2);
        }
    }
    else
    {
        printf("No hay solucion en los reales \n");
    }

    return 0;
}