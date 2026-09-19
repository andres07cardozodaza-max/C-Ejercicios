#include <stdio.h>


void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
int main() {
    int opcion;
    do {
        printf("\n========================================\n");
        printf("    MENU DE EJERCICIOS (TIPO INT)\n");
        printf("========================================\n");
        printf("1. Sumar dos numeros enteros\n");
        printf("2. Determinar si un numero es par o impar\n");
        printf("3. Calcular el factorial de un numero\n");
        printf("4. Encontrar el mayor de tres numeros\n");
        printf("5. Contar del 1 al 100 con un ciclo\n");
        printf("0. Salir\n");
        printf("========================================\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                ejercicio5();
                break;
            case 0:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion no valida. Intenta de nuevo.\n");
        }
    } while (opcion != 0);
    return 0;
}

void ejercicio1() {

    int num1, num2, suma;
    printf("\n--- Ejercicio 1: Suma de dos numeros ---\n");
    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("La suma es: %d\n", suma);
}

void ejercicio2() {
    int numero;
    printf("\n--- Ejercicio 2: Par o Impar ---\n");
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("El numero %d es PAR.\n", numero);
    } else {
        printf("El numero %d es IMPAR.\n", numero);
    }
}
void ejercicio3() {
    int n;
    long long factorial = 1;
    printf("\n--- Ejercicio 3: Factorial ---\n");
    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %lld\n", n, factorial);
    }
}
void ejercicio4() {
    int a, b, c, mayor;
    printf("\n--- Ejercicio 4: Mayor de tres numeros ---\n");
    printf("Ingresa tres numeros enteros (separados por espacio): ");
    scanf("%d %d %d", &a, &b, &c);
    mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
    printf("El numero mayor es: %d\n", mayor);
}
void ejercicio5() {
    printf("\n--- Ejercicio 5: Conteo del 1 al 100 ---\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}