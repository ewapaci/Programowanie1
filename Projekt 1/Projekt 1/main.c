#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("W jezyku C wielkosc liter ma znaczenie \n");
	printf("Wykonywanie programu rozpoczyna sie od funkcji main \n");
	printf("Wszystkie instrukcje konczy sie znakiem srednika \n");

	char k[50];
	printf("\nPodaj imie\n");
	scanf_s("%s", &k);
	printf("\nTo jest twoje imie %s\n", k);
	printf("Podaj nazwisko\n");
	scanf_s("%s", &k);
	printf("\nTo jest twoje nazwisko %s \n", k);

	printf("\n# # # # # \n # # # #\n# # # # # \n # # # #\n# # # # #\n");

	int a;
	int b;
	printf("\nPodaj pierwsza dowolna liczbe calkowita \n");
	scanf_s("%d", &a);
	printf("Podaj druga dowolna liczbe calkowita \n");
	scanf_s("%d", &b);
	printf("Wynik dodawania: %d\n", (a + b));
	printf("Wynik odejmowania: %d\n", (a - b));
	printf("Wynik mnozenia: %d\n", (a*b));
	printf("Wynik dzielenia: %d\n", (a / b));
	printf("Wynik modulo: %d\n", (a%b));

	float r;
	float wynik;
	printf("\nPodaj promien kola, moze to byc liczba rzeczywista \n");
	scanf_s("%f", &r);
	wynik = 3.14*pow(r, 2);
	printf("Pole kola: %f \n", wynik);

	float x;
	float wynik2;
	printf("\nPodaj liczbe rzeczywista x \n");
	scanf_s("%f", &x);
	wynik2 = 12 * pow(x, 3) + 45 * pow(x, 2) + 0.5*x + 0.2471;
	printf("Wynik wielomianu f(x) = 12x^3 + 45x^2 + 0,5x + 0,2471: %f\n", wynik2);

	float h;
	float e;
	float wynik3;
	printf("\nPodaj wysokosc walca\n");
	scanf_s("%f", &h);
	printf("Podaj promien podstawy walca \n");
	scanf_s("%f", &e);
	wynik3 = 3.14*pow(e, 2)*h;
	printf("Objetosc walca: %f\n", wynik3);

	_getch();
	return;
}