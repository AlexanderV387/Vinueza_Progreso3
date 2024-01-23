#include <stdio.h>

int main(){
    int m;
    char nombre[50];
    char direccion[50];
    char materia[50];
    int matricula;
    float nota;

    do {
        printf("Desea ingresar los datos de un alumno?\n");
        printf("Presione 1 para si o 2 para no\n");
        scanf("%d", &m);

        if (m == 1) {
            printf("Ingrese el nombre del alumno: ");
            scanf("%s", nombre);
            printf("Ingrese la direccion del alumno: ");
            scanf("%s", direccion);
            printf("Ingrese la materia del alumno: ");
            scanf("%s", materia);
            printf("Ingrese la matricula del alumno: ");
            scanf("%d", &matricula);
            printf("Ingrese la nota del alumno: ");
            scanf("%f", &nota);
           
            while (nota>10 || nota<0)
            {
                printf("Solo se puede ingresar un numero de 0 a 10: ");
                scanf("%f", &nota);
            }
            

            printf("Nombre: %s\n", nombre);
            printf("Direccion: %s\n", direccion);
            printf("Materia: %s\n", materia);
            printf("Matricula: %d\n", matricula);
            printf("Nota: %.2f\n", nota);
        }
    } while (m == 1);

    return 0;
}
