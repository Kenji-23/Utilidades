#ifndef UTILIDADES_H
#define UTILIDADES_H

// =======================
// MATEMATICA
// =======================

float media(float a, float b, float c);

int potencia(int base, int expoente);

int fatorial(int n);

float calcular_imc(float peso, float altura);

float converter_celsius_fahrenheit(float c);

float converter_fahrenheit_celsius(float f);

// =======================
// TEXTO
// =======================

int contar_caracteres(char texto[]);

void converter_maiusculas(char texto[]);

void converter_minusculas(char texto[]);

int contar_vogais(char texto[]);

void inverter_texto(char texto[]);

int validar_email(char texto[]);

// =======================
// ARRAYS
// =======================

int maior_array(int v[], int tamanho);

int menor_array(int v[], int tamanho);

int contar_pares(int v[], int tamanho);

int somar_array(int v[], int tamanho);

float media_array(int v[], int tamanho);

void ordenar_array(int v[], int tamanho);

int pesquisar_numero(int v[], int tamanho, int valor);

// =======================
// FICHEIROS
// =======================

void escrever_ficheiro(char nome[], char texto[]);

void ler_ficheiro(char nome[]);

// =======================
// UTILIDADES
// =======================

int numero_par(int n);

#endif