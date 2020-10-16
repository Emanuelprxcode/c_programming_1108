#include <stdio.h>
int main()
{
    float parcial, tarea, proyecto, cal_final;
    printf("Teclea el promedio de las tareas: ");
    scanf("%f", &tarea);

    printf("Teclea el promedio de los parciales: ");
    scanf("%f", &parcial);

    printf("Teclea la califiacacion de tu protecto: ");
    scanf("%f", &proyecto);

    cal_final = (tarea*0.2)+(proyecto*0.2)+(parcial*0.6);
    printf("La calificaion final es: %1.2f \n" , cal_final);

    return 0;
}