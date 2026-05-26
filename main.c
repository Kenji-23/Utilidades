#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Math
float media(float a, float b, float c);
int potencia(int base, int expoente);
int fatorial(int n);

// Text
int contar_caracteres(char texto[]);
void converter_maiusculas(char texto[]);
void converter_minusculas(char texto[]);

int main() {
    int val;

    do {
        printf("\n--- Utilidades ---\n"
        	   "1 - Media\n"
        	   "2 - Potencia\n"
               "3 - Fatorial\n"
               "4 - Contar caracteres\n"
               "5 - Maiusculas\n"
               "6 - Minusculas\n"
               "0 - Sair\n\n");
               
        printf("Escolha: ");
        scanf("%d", &val);

        if (val == 1) {
            float n1, n2, n3;
            printf("Num 1: ");
            scanf("%f", &n1);
            printf("Num 2: ");
            scanf("%f", &n2);
            printf("Num 3: ");
            scanf("%f", &n3);

            printf("Media = %.2f\n", media(n1, n2, n3));
        }

        else if (val == 2) {
            int base, exp;
            printf("Base: ");
            scanf("%d", &base);
            printf("Expoente: ");
            scanf("%d", &exp);

            printf("%d ^ %d = %d\n", base, exp, potencia(base, exp));
        }

        else if (val == 3) {
            int n;
            printf("Fatorial: ");
            scanf("%d", &n);

            printf("Fatorial de %d = %d\n", n, fatorial(n));
        }

        else if (val == 4) {
            char text[100];
            printf("Texto: ");
            scanf("%s", text);

            printf("Quantidade: %d\n", contar_caracteres(text));
        }

        else if (val == 5) {
            char text[100];
            printf("Texto: ");
            scanf("%s", text);

            converter_maiusculas(text);
            printf("Maiusculas: %s\n", text);
        }

        else if (val == 6) {
            char text[100];
            printf("Texto: ");
            scanf("%s", text);

            converter_minusculas(text);
            printf("Minusculas: %s\n", text);
        }

    } while (val != 0);

    return 0;
}
	
	
	
	
	
	
	

