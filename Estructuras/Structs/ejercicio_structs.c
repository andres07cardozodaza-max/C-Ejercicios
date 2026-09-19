#include <stdio.h>
#include <string.h>
 
//------------- STRUCTS ---------------------------
 
struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};
 
struct Libro {
    char titulo[50];
    char autor[30];
    int año;
};
 
struct Persona {
    char nombre[30];
    int edad;
};
 
struct EstudianteNotas {
    char nombre[30];
    float nota1, nota2, nota3;
    float promedio;
};
 
//---------------------------------------------------
 
void ejercicio1() { // Struct de estudiante
    struct Estudiante est;
    strcpy(est.nombre, "Carlos");
    est.edad = 20;
    est.promedio = 4.3;
 
    printf("--- Ejercicio 1 ---\n");
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Promedio: %.2f\n\n", est.promedio);
}
 
//----------------------------------------------------
 
void ejercicio2() { // Arreglo de structs para libros
    struct Libro libros[5] = {
        {"Cien años de soledad", "Gabriel Garcia Marquez", 1967}    ,
        {"El Quijote", "Miguel de Cervantes", 1605},
        {"1984", "George Orwell", 1949},
        {"Rayuela", "Julio Cortazar", 1963},
        {"El Aleph", "Jorge Luis Borges", 1949}
    };
 
    printf("--- Ejercicio 2 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Titulo: %s | Autor: %s | Año: %d\n",
               libros[i].titulo, libros[i].autor, libros[i].año);
    }
    printf("\n");
}
 
//-----------------------------------------------------
 
void ejercicio3() { // Recibir datos de una persona por teclado
    struct Persona persona;
 
    printf("--- Ejercicio 3 ---\n");
    printf("Ingrese nombre: ");
    scanf("%s", persona.nombre);
 
    printf("Ingrese edad: ");
    scanf("%d", &persona.edad);
 
    printf("\nDatos ingresados:\n");
    printf("Nombre: %s\n", persona.nombre);
    printf("Edad: %d\n\n", persona.edad);
}
 
//------------------------------------------------------
 
void ejercicio4() { // Promedio de notas de varios estudiantes
    struct EstudianteNotas estudiantes[3] = {
        {"Ana", 4.0, 3.5, 4.5},
        {"Luis", 3.0, 3.8, 4.0},
        {"Maria", 4.5, 4.2, 4.8}
    };
 
    printf("--- Ejercicio 4 ---\n");
    for (int i = 0; i < 3; i++) {
        estudiantes[i].promedio =
            (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3) / 3;
 
        printf("%s -> Promedio: %.2f\n", estudiantes[i].nombre, estudiantes[i].promedio);
    }
    printf("\n");
}
 
//------------------------------------------------------
 
void ejercicio5() { // Comparar dos structs de tipo persona
    struct Persona p1 = {"Ana", 30};
    struct Persona p2 = {"Ana", 30};
 
    printf("--- Ejercicio 5 ---\n");
    if (strcmp(p1.nombre, p2.nombre) == 0 && p1.edad == p2.edad) {
        printf("Las personas son iguales.\n\n");
    } else {
        printf("Las personas son diferentes.\n\n");
    }
}
 
//-------------------- MAIN --------------------------
 
int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
 
    return 0;
}