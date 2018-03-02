#include<stdio.h>
#include<conio.h>
#include<Windows.h>
int main() {
	float a;
	float b;
	float wynik;
	printf("Podaj pierwsza liczbe rzeczywista: ");
	scanf_s("%f", &a);
	printf("Podaj druga liczbe rzeczywista: ");
	scanf_s("%f", &b);
	if (b != 0)
	{
		wynik = a / b;
		printf("Wynik dzielenia to %f\n", wynik);
	}
	else {
		printf("Dzielenie przez zero nie yyystnieje");
		Sleep(3000);
		return;
	}

	_getch();
	return;
}

//sgrt("liczba") - pierwiastek
//math.h - biblioteka z funkcjami matematycznymi
//#include<Windows.h>  Sleep("iloœæ czasu w milisekundach(1s = 1000milisekund)"); - zatrzymuje okno konsoli na okreslony czas