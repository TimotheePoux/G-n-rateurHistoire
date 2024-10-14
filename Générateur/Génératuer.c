#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int alea = 0;
	char choix1[50] = "";
	char choix2[50] = "";
	char choix3[50] = "";
	char personnage[50] = "";
	char lieu[50] = "";
	char action[50] = "";
	char objet[50] = "";
	printf("Personnage: ");
	scanf_s("%s", &choix1);
	getchar();
	scanf_s("%s", &choix2);
	getchar();
	scanf_s("%s", &choix3);
	getchar();
	alea = (rand() % 3);
	/*
	switch (alea)
	{
	case 0:
		personnage = choix1;
		break;
	case 1:
		personnage = choix2;
		break;
	case 2:
		personnage = choix3;
		break;
	}
	*/

	return 0;
}