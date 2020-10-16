#include <stdio.h>
int main()
{
    char tel[10];
    float rec, bon;
    printf("Teclea el numero de telefono: \n");
    scanf("%s", tel);
    printf("Teclea el monto de la recarga: \n");
    scanf("%f", &rec);
    bon = rec * 0.1;
    printf("El numero es: %s tiene %1.1f de saldo  mas %1.2f de bonificacion.", tel, rec, bon);
    return 0;
}