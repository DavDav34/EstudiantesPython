#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CALIFICACIONES 3
#define MAX_NOMBRE 100

typedef struct {
    char nombre[MAX_NOMBRE];
    float calificaciones[NUM_CALIFICACIONES];
    float promedio;
    char estado[10];
} Estudiante;

float calcular_promedio(float calificaciones[], int cantidad) {
    float suma = 0.0;
    int i;
    for (i = 0; i < cantidad; i++) {
        suma += calificaciones[i];
    }
    return suma / cantidad;
}

void evaluar_aprobacion(float promedio, char estado[]) {
    if (promedio >= 6.0) {
        strcpy(estado, "Aprobado");
    } else {
        strcpy(estado, "Reprobado");
    }
}

int main() {
    int num_estudiantes;
    int aprobados = 0, reprobados = 0;
    
	// continuar aqui con la logica del programa
    printf("ingresa el numero de estudiantes a registrar ");
    scanf("%d", &num_estudiantes);
    getchar(); 

    Estudiante* estudiantes = (Estudiante*)malloc(num_estudiantes * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
	int i;
    for (i = 0; i < num_estudiantes; i++) {
        printf("\nRegistro del estudiante %d\n", i + 1);
        
        printf("Nombre del estudiante: ");
        fgets(estudiantes[i].nombre, MAX_NOMBRE, stdin);
        estudiantes[i].nombre[strcspn(estudiantes[i].nombre, "\n")] = '\0';
		int j;
        for ( j= 0; j < NUM_CALIFICACIONES; j++) {
            printf("Calificacion en esta materia %d: ", j + 1);
            scanf("%f", &estudiantes[i].calificaciones[j]);
        }
        getchar();

        estudiantes[i].promedio = calcular_promedio(estudiantes[i].calificaciones, NUM_CALIFICACIONES);
        evaluar_aprobacion(estudiantes[i].promedio, estudiantes[i].estado);

        if (strcmp(estudiantes[i].estado, "Aprobado") == 0) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    printf("\n--- Resultados ---\n");
    int k;
    for (k = 0; k < num_estudiantes; k++) {
        printf("\nEstudiante: %s\n", estudiantes[k].nombre);
        printf("Calificaciones: ");
        int f;
        for (f = 0; f < NUM_CALIFICACIONES; f++) {
            printf("%.2f ", estudiantes[k].calificaciones[f]);
        }
        printf("\nPromedio: %.2f\n", estudiantes[k].promedio);
        printf("Estado: %s\n", estudiantes[k].estado);
    }

    printf("\nResumen final:\n");
    printf("Total de estudiantes: %d\n", num_estudiantes);
    printf("Aprobados: %d\n", aprobados);
    printf("Reprobados: %d\n", reprobados);

    free(estudiantes);
	
    return 0;
}
