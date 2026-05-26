#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utilidades.h"

// =======================
// MATEMATICA
// =======================


float media(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int potencia(int base, int expoente)
{
    int resultado = 1;
    int i;

    for(i = 0; i < expoente; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int fatorial(int n)
{
    int i;
    int fat = 1;

    for(i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

float calcular_imc(float peso, float altura)
{
    return peso / (altura * altura);
}

float converter_celsius_fahrenheit(float c)
{
    return (c * 9/5) + 32;
}

float converter_fahrenheit_celsius(float f)
{
    return (f - 32) * 5/9;
}

// =======================
// TEXTO
// =======================

int contar_caracteres(char texto[])
{
    return strlen(texto);
}

void converter_maiusculas(char texto[])
{
    int i;

    for(i = 0; texto[i] != '\0'; i++)
    {
        texto[i] = toupper(texto[i]);
    }
}

void converter_minusculas(char texto[])
{
    int i;

    for(i = 0; texto[i] != '\0'; i++)
    {
        texto[i] = tolower(texto[i]);
    }
}

int contar_vogais(char texto[])
{
    int i;
    int contador = 0;

    for(i = 0; texto[i] != '\0'; i++)
    {
        char c = tolower(texto[i]);

        if(c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u')
        {
            contador++;
        }
    }

    return contador;
}

void inverter_texto(char texto[])
{
    int inicio = 0;
    int fim = strlen(texto) - 1;

    while(inicio < fim)
    {
        char temp = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = temp;

        inicio++;
        fim--;
    }
}

int validar_email(char texto[])
{
    int i;

    for(i = 0; texto[i] != '\0'; i++)
    {
        if(texto[i] == '@')
        {
            return 1;
        }
    }

    return 0;
}

// =======================
// ARRAYS
// =======================

int maior_array(int v[], int tamanho)
{
    int maior = v[0];
    int i;

    for(i = 1; i < tamanho; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }

    return maior;
}

int menor_array(int v[], int tamanho)
{
    int menor = v[0];
    int i;

    for(i = 1; i < tamanho; i++)
    {
        if(v[i] < menor)
        {
            menor = v[i];
        }
    }

    return menor;
}

int contar_pares(int v[], int tamanho)
{
    int i;
    int contador = 0;

    for(i = 0; i < tamanho; i++)
    {
        if(v[i] % 2 == 0)
        {
            contador++;
        }
    }

    return contador;
}

int somar_array(int v[], int tamanho)
{
    int i;
    int soma = 0;

    for(i = 0; i < tamanho; i++)
    {
        soma += v[i];
    }

    return soma;
}

float media_array(int v[], int tamanho)
{
    return (float)somar_array(v, tamanho) / tamanho;
}

void ordenar_array(int v[], int tamanho)
{
    int i, j, temp;

    for(i = 0; i < tamanho - 1; i++)
    {
        for(j = 0; j < tamanho - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int pesquisar_numero(int v[], int tamanho, int valor)
{
    int i;

    for(i = 0; i < tamanho; i++)
    {
        if(v[i] == valor)
        {
            return i;
        }
    }

    return -1;
}

// =======================
// FICHEIROS
// =======================

void escrever_ficheiro(char nome[], char texto[])
{
    FILE *f;

    f = fopen(nome, "w");

    if(f == NULL)
    {
        printf("Erro ao abrir ficheiro\n");
        return;
    }

    fprintf(f, "%s", texto);

    fclose(f);
}

void ler_ficheiro(char nome[])
{
    FILE *f;
    char c;

    f = fopen(nome, "r");

    if(f == NULL)
    {
        printf("Erro ao abrir ficheiro\n");
        return;
    }

    while((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }

    fclose(f);
}

// =======================
// UTILIDADES
// =======================

int numero_par(int n)
{
    return n % 2 == 0;
}
