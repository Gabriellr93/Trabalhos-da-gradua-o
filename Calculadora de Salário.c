#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int main () {
	float s1, s2;
	
	puts (setlocale(LC_ALL, "Potuguese"));
	system ("chcp 1252");
	puts ("");

	printf ("Bem vindo(a) ao sistema de RH da Gabnovation - Gabriel Luiz Ribeiro - RA 1704270-5 - todos os direitos reservados.\n");
	printf ("Informe seu sal�rio atual: ");
	scanf ("%f", &s1);
	
	s2 = s1 + s1 * 0.075;
	
	printf("Seu novo sal�rio sem o abono ser� de: %.2f \n", s2);
	
		if (s2 <= 1750) {
			s2 = s2 +150;
			printf ("Seu novo sal�rio com abono ser� de: %.2f \n", s2);
	}
		else {
			printf ("Voc� n�o ter� direito ao abono!\n");
		}

	
	printf ("Muito obrigado por utilizar o sistema de RH da Gabnovation!");
	

	return 0;
} 
