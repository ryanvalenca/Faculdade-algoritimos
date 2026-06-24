#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas
{
char nome[50];
float altura; 
};


void cadastro(int qtd, struct pessoas pessoa[15]){

if (qtd < 15)
{
printf("\n--- SISTEMA DE CADASTRO ---\n");
printf("NOME: ");
fgets(pessoa[qtd].nome, 50, stdin);
pessoa[qtd].nome[strcspn(pessoa[qtd].nome, "\n")] = '\0';
printf("ALTURA[METROS]: ");
scanf("%f", &pessoa[qtd].altura);
while(getchar() != '\n');
printf("Cadastrado com sucesso!\n");

}

}

void apresentarmenores(int qtd, struct pessoas pessoa[15]){

int encontrado=0;

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return;
}


printf("\n=== MENORES DE 1.5 M ===\n");
for (int i = 0; i < qtd; i++)
{
    if (pessoa[i].altura <= 1.5)
    {
    printf("NOME: %s\n", pessoa[i].nome); 
    printf("ALTURA: %.2f\n", pessoa[i].altura);
    encontrado++;
    }
   
}

if (encontrado == 0)
{
printf("Nenhum cadastro MENOR de 1.5M encontrado!");
}

}


void apresentarmaiores(int qtd, struct pessoas pessoa[15]){

int encontrado=0;

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return;
}


printf("\n=== MAIORES DE 1.5 M ===\n");
for (int i = 0; i < qtd; i++)
{
    if (pessoa[i].altura > 1.5)
    {
    printf("NOME: %s\n", pessoa[i].nome); 
    printf("ALTURA: %.2f\n", pessoa[i].altura);
    encontrado++;
    }

}

if (encontrado == 0)
{
printf("Nenhum cadastro MAIOR de 1.5M encontrado!");
}

}


void apresentarmaiores2(int qtd, struct pessoas pessoa[15]){

int encontrado=0;

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return;
}


printf("\n=== MAIORES DE 1.5 M E MENOS DE 2M ===\n");
for (int i = 0; i < qtd; i++)
{
    if (pessoa[i].altura > 1.5 && pessoa[i].altura < 2.0)
    {
    printf("NOME: %s\n", pessoa[i].nome); 
    printf("ALTURA: %.2f\n", pessoa[i].altura);
    encontrado++;
    }
    
}

if (encontrado == 0)
{
printf("Nenhum cadastro MAIOR de 1.5M e MENOR de 2M encontrado!");
}


}


void apresentartudo(int qtd, struct pessoas pessoa[15]){

float media=0;

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return;
}


printf("\n=== TODOS OS REGISTROS ===\n");
for (int i = 0; i < qtd; i++)
{

    printf("NOME: %s\n", pessoa[i].nome); 
    printf("ALTURA: %.2f\n", pessoa[i].altura);
    media += pessoa[i].altura;  

}

printf("\nMEDIA EXTRAIDA DE TODAS AS ALTURAS DOS REGISTROS: %.2f\n", media/qtd);
}





int main() {
    
    struct pessoas pessoa[15];
    int opcao;
    int qtd=0;


    do
    {
    printf("\n=== MENU ===\n");
    printf("1. CADASTRAR REGISTRO\n");
    printf("2. Pessoas com 1.5 m ou menores\n");
    printf("3. Pessoas com mais de 1.5 m\n");
    printf("4. Pessoas com mais de 1.5 m e menos de 2.0 m\n");
    printf("5. Todos os registros e media das alturas\n");
    printf("6. Sair do programa\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    while(getchar() != '\n');

    
    switch (opcao)
    {
    case 1:
        if (qtd < 15)
        {
        cadastro(qtd, pessoa);
        qtd ++; 
        }
        else
        {
        printf("Limite Maximo de Cadastros atingido!");
        }
        break;
    
    case 2: 
        apresentarmenores(qtd, pessoa);
        break; 

    case 3: 
        apresentarmaiores(qtd, pessoa);
        break; 

    case 4: 
        apresentarmaiores2(qtd, pessoa);
        break;
    case 5: 
        apresentartudo(qtd, pessoa); 
        break;
    case 6: 
        printf("Saindo...\n");
        break; 

    default:
        printf("Opcao invalida!\n");
        break;
    }


    } while (opcao != 6);
    



    return 0;
}