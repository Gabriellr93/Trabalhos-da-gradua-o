#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

struct projeto
{
	int codigo;
	char titulo [50];
	char descricao [250];
	int ano;
	int status;
	char gerente [50];
	int previsao;
	float custo;
	char cliente [50];
	};
	


int main () {
	int menu, i, continuar, menu2, status, ano;
	struct projeto cadastro[200];
	
	puts (setlocale(LC_ALL, "Potuguese"));
	system ("chcp 1252");
	puts ("");

	menu = 0;
	
		while (menu == 0) {
			printf ("\nBem vindo(a) ao sistema de gerenciamento de projetos do Gabriel.\n");
			printf ("Para inserir um novo projeto digite 1, para ir ao menu de projetos cadastrados digite 2 ou digite 3 para encerrar o programa.\n");
			scanf ("%d", &menu);
		
			switch (menu)
			{
				case 1:
					printf ("Bem vindo(a) ao cadastro de projetos.\n");
					for (i=0; i<200; i++) 
					{
						cadastro[i].codigo = i + 1;
						printf ("\nProjeto - código %d\n", cadastro[i].codigo);
									
						printf ("Ano de início do projeto:\n");
						scanf ("%d", &cadastro[i].ano);
						fflush (stdin);
						
						printf ("Título do projeto:\n");
						gets (cadastro[i].titulo);
						fflush (stdin);
						
						printf ("Descrição do projeto:\n");
						gets (cadastro[i].descricao);
						fflush (stdin);
				
						printf ("Digite o número de status do projeto: 1 = A fazer; 2 = Fazendo; 3 = Concluído\n");
						scanf ("%d", &cadastro[i].status);
						fflush (stdin);
						
						printf ("Gerente do projeto:\n");
						gets (cadastro[i].gerente);
						fflush (stdin);
						
						printf ("Ano da previsão de término do projeto:\n");
						scanf ("%d", &cadastro[i].previsao);
						fflush (stdin);
						
						printf ("Qual foi o custo do projeto:\n");
						scanf ("%f", &cadastro[i].custo);
						fflush (stdin);
						
						printf ("Nome da empresa que solicitou o projeto:\n");
						gets (cadastro[i].cliente);
						fflush (stdin);
						
						printf ("\nDeseja cadastrar mais um projeto? Digite 0 para não ou 1 para sim.\n");
						scanf ("%d", &continuar);
						fflush (stdin);
						
						if ( continuar == 0 )
						{
							i = i +200;
						}
	
					}
					
					menu = 0;
					
				break;
					
				case 2:
					printf ("\nBem vindo(a) ao menu de consulta de projetos.\n");
					printf ("Para visualizar todos os projetos digite 1.\n");
					printf ("Para visualizar os projetos por status digite 2.\n");
					printf ("Para visualizar os projetos por ano de início digite 3.\n");
					scanf ("%d", &menu2);
					
					switch (menu2)
					{
						case 1:
							
							for (i=0; i<200; i++) 
							{
								printf ("\nProjeto - código %d\n", cadastro[i].codigo);
							
								printf ("Título do projeto: %s\n", cadastro[i].titulo);
						
								printf ("Descrição do projeto:\n");
								printf ("%s", cadastro[i].descricao);
						
						
								printf ("\nAno de início do projeto: %d\n", cadastro[i].ano);
												
								switch (cadastro[i].status)
								{
									case 1:
										printf ("Status: A fazer");
									break;
								
									case 2:
										printf ("Status: Fazendo");
									break;
									
									case 3:
										printf ("Status: Concluído");
									break;
									
									default:
										printf ("Status: Inválido");
									break;
								}
						
								printf ("\nGerente do projeto: %s\n", cadastro[i].gerente);
												
								printf ("Ano da previsão de término do projeto: %d\n", cadastro[i].previsao);
					
								printf ("Custo do projeto: %.2f\n", cadastro[i].custo);
						
								printf ("Nome da empresa que solicitou o projeto: %s\n", cadastro[i].cliente);
							}
							
										
						break;
						
						case 2:
							
							printf ("Insira o Status dos projetos a serem encontrados: 1 = A fazer; 2 = Fazendo; 3 = Concluído\n");
							scanf ("%d", &status);
							
							for (i=0; i<200; i++) 
							{
								if (cadastro[i].status == status)
								{
								 	printf ("\nProjeto - código %d\n", cadastro[i].codigo);
								 	printf ("Título do projeto: %s\n", cadastro[i].titulo);
								 	printf ("Descrição do projeto:\n");
									printf ("%s\n", cadastro[i].descricao);
									printf ("Ano de início do projeto: %d\n", cadastro[i].ano);
								 	printf ("Gerente do projeto: %s\n", cadastro[i].gerente);
									printf ("Ano da previsão de término do projeto: %d\n", cadastro[i].previsao);
									printf ("Custo do projeto: %.2f\n", cadastro[i].custo);
									printf ("Nome da empresa que solicitou o projeto: %s\n", cadastro[i].cliente);
								}
							}
							
						break;
						
						case 3:
							
							printf ("O projeto buscado se iniciou em qual ano?\n");
							scanf ("%d", &ano);
							
							for (i=0; i<200; i++) 
							{
								if (cadastro[i].ano == ano)
								{
								 	printf ("\nProjeto - código %d\n", cadastro[i].codigo);
								 	printf ("Título do projeto: %s\n", cadastro[i].titulo);
								 	printf ("Descrição do projeto:\n");
									printf ("%s\n", cadastro[i].descricao);
									switch (cadastro[i].status)
									{
										case 1:
										printf ("Status: A fazer");
										break;
								
										case 2:
										printf ("Status: Fazendo");
										break;
									
										case 3:
										printf ("Status: Concluído");
										break;
									
										default:
										printf ("Status: Inválido");
										break;
									}
								 	printf ("\nGerente do projeto: %s\n", cadastro[i].gerente);
									printf ("Ano da previsão de término do projeto: %d\n", cadastro[i].previsao);
									printf ("Custo do projeto: %.2f\n", cadastro[i].custo);
									printf ("Nome da empresa que solicitou o projeto: %s\n", cadastro[i].cliente);
								}
							}
							
						break;
						
						default:
							
						break;
					}
					
					
					menu = 0;
				
				break;
					
				default:
					printf ("Tem certeza que deseja deixar o programa?\n");
					printf ("Digite 0 para voltar ao menu ou 1 para encerrar.\n");
					scanf ("%d", &menu);
					
				break;
			}
		}
	
	
	printf ("Muito obrigado por utilizar o sistema de gerenciamento de projetos do Gabriel!");
	

	return (0);
} 
