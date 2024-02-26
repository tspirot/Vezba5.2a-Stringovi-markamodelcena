// Vezba5.2a.cpp : This file contains the 'main' function. Program execution begins and ends there.
// FUNKCIJE ZA RAD SA STRINGOVIMA
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char marka[21], model[31];
	int cena;
	puts("Unesite marku automobila: ");
	//scanf("%s ", marka);
	gets(marka);
	puts("Unesite model automobila: ");
	//getchar();//hvata enter
	gets(model);//citanje cele linije do entera
	puts("Marka: ");
	puts(marka);
	puts("Model: ");
	puts(model);
	puts("Unesite cenu automobila: ");
	char cenaStr[10];
	gets(cenaStr);
	puts("Cena: ");
	puts(cenaStr);
	// broj znakova u ceni
	//int n = strlen(cenaStr);
	// provera da li je cena broj
	int i = 0;
	while (cenaStr[i]!='\0')
	{
		if(!isdigit(cenaStr[i]))
			break;
		i++;
	}
	// konverzija u broj
	if (cenaStr[i] == '\0')
	{
		cena = atoi(cenaStr);
		printf("Cena: %d\n", cena);
	}
	else
		puts("Cena nije broj");
	// kopiranje i spajanje stringova
	char markaModel[52];// 20+30+' '+ '\0
	// markaModel = marka;//nije dozvoljeno
	strcpy(markaModel, marka);
	puts(markaModel);
	strcat(markaModel, " ");
	strcat(markaModel, model);
	puts(markaModel);
	strcat(markaModel, " ");
	_itoa(cena, cenaStr, 10);
	strcat(markaModel, cenaStr);
	puts(markaModel);
	// pore?enje stringova
	if (strcmp(marka, model) > 0)
		puts("Marka je iza modela"); // zamena
	else
		if (strcmp(marka, model) < 0)
			puts("Marka je ispred modela");
		else // ==0
			puts("Marka i model su isti");
}
