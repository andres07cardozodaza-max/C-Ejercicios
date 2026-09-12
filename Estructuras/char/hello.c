#include <stdio.h>
#include <ctype.h>
int main (){
    char letra = 'E';
   char otraLetra = 'b';
   printf("El carácter es: %c y su código ASCII es: %d\n", letra, letra);
   char min = tolower(letra);
   if (isalpha(min)) {
       if (min == 'a' || min == 'e' || min == 'i' || min == 'o' || min == 'u') {
           printf("'%c' es una vocal.\n", letra);
       } else {
           printf("'%c' es una consonante.\n", letra);
       }
   } else {
       printf("'%c' no es una letra valida.\n", letra);
   }
   if (isalpha(otraLetra)) {
       if (!isupper(otraLetra)) {
           printf("La letra '%c' convertida a mayúscula es: %c\n", otraLetra, toupper(otraLetra));
       } else {
           printf("La letra '%c' ya es mayúscula.\n", otraLetra);
       }
   }
   char palabra[] = "Programacion";
   int contador = 0;
   int i = 0;
   while (palabra[i] != '\0') {
       if (tolower(palabra[i]) == tolower(letra)) {
           contador++;
       }
       i++;
   }
   printf("La letra '%c' aparece %d veces en la palabra \"%s\".\n", letra, contador, palabra);
 
   otraLetra = '8';
   if (isdigit(otraLetra)) {
       printf("'%c' es un dígito numérico.\n", otraLetra);
   } else {
       printf("'%c' NO es un dígito numérico.\n", otraLetra);
   }
   return 0;
}