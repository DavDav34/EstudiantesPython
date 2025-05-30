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
	
    return 0;
}
