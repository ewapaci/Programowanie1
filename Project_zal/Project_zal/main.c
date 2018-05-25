#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int uczen;
	int liczba;
	printf("Ile uczniow jest w klasie? ");
	scanf_s("%d", &uczen);
	printf("Podaj dowolna cyfre: ");
	scanf_s("%d", &liczba);
	
	while((uczen != 0) && (liczba != 0))
	{
		printf("Wybrane cyfry musza byc wieksze od zera!\n");
		printf("Ile uczniow jest w klasie? ");
		scanf_s("%d", &uczen);
		printf("Podaj dowolna cyfre: ");
		scanf_s("%d", &liczba);
	}



	_getch();
	return;
}