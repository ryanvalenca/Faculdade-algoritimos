#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct alunos
{
char nome[50];
float notas[4];
};


int cadastro(int qtd, struct alunos alunos[20], struct alunos aux){

    if (qtd < 20)
    {
        printf("\n--- CADASTRAR ALUNO %d ---\n", qtd + 1);
        printf("Nome: ");
        fgets(alunos[qtd].nome, 50, stdin);
        alunos[qtd].nome[strcspn(alunos[qtd].nome, "\n")] = 0;

        for (int i = 0; i < 4; i++)
        {
            printf("Nota %d: ", i+1);
            scanf("%f", &alunos[qtd].notas[i]);
        }
        while(getchar() != '\n');

        qtd++;
        printf("Cliente cadastrado com sucesso!\n");

        
        if (qtd == 20)
        {
            for (int i = 0; i < 20 - 1; i++) 
            {
                for (int j = i+1; j < 20; j++)
                {
                    if (strcmp(alunos[i].nome, alunos[j].nome) > 0)
                    {
                        aux = alunos[i];
                        alunos[i] = alunos[j];
                        alunos[j] = aux;
                    }
                }
            }
            printf("\n[Sistema]: Limite de 20 atingido. Tabela ordenada por nome automaticamente!\n");
        }
    }
    
    else
    {
        printf("O limite de 20 cadastros foi estourado!\n");
    }
return qtd; 
}

void pesquisa(int qtd, struct alunos alunos[20]){

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return; 
}

char pesquisa[50]; 
printf("Qual aluno deseja pesquisar: ");
fgets(pesquisa, 50, stdin);
pesquisa[strcspn(pesquisa, "\n")] = 0;

int achou = 0; 
int meio;
int fim = qtd - 1; 
int inicio = 0;



while (inicio <= fim)
{
meio = (inicio + fim)/2; 

if (strcmp(alunos[meio].nome, pesquisa) == 0)
{
achou = 1; 

float soma = 0;
for (int i = 0; i < 4; i++)
{
soma += alunos[meio].notas[i];
}
float media = soma/4.0;

printf("\n=== REGISTRO ENCONTRADO ===\n");
printf("Nome: %s\n", alunos[meio].nome);
printf("Media: %.1f\n", media);
printf("Notas: Bim1: %.1f | Bim2: %.1f | Bim3: %.1f | Bim4: %.1f\n", alunos[meio].notas[0], alunos[meio].notas[1], alunos[meio].notas[2], alunos[meio].notas[3]);

if (media >= 5)
{
printf("Aprovado!\n");
}
else
{
printf("Reprovado!\n");
}
break;
}
else if (strcmp(alunos[meio].nome, pesquisa) < 0)
{
inicio = meio + 1;
}
else
{
fim = meio - 1;
}
}

if (achou == 0)
{
printf("Desculpe! o Aluno pesquisado nao existe.\n");
}

}


void apresentacao(struct alunos alunos[20], int qtd){
float media;

if (qtd == 0)
{
printf("Nenhum cadastro efetuado!\n");
return; 
}


printf("\n=== TODOS OS REGISRTROS CADASTRADOS ===\n");
for (int i = 0; i < qtd; i++)
{
float soma = 0;
for (int j = 0; j < 4; j++)
{
soma += alunos[i].notas[j];
}
float media = soma / 4.0;

printf("Nome: %s\n", alunos[i].nome);
printf("Media: %.1f\n", media);
if (media >= 5)
{
printf("Aprovado!\n");
}
else
{
printf("Reprovado!\n");
}

}

}






int main() {
    
    struct alunos alunos[20];
    int opcao; 
    int qtd=0; 
    struct alunos aux;

    do
    {
    printf("\n== MENU ==\n");
    printf("1. Cadastrar Aluno\n");
    printf("2. Pesquisar\n");
    printf("3. Apresentar todos os registros\n");
    printf("4. Sair do programa de cadastro\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    while(getchar() != '\n');

    switch (opcao)
    {
    case 1:
        qtd = cadastro(qtd, alunos, aux); 
        break;
    
    case 2:
        pesquisa(qtd, alunos);
        break;
    
    case 3:
        apresentacao(alunos, qtd);
        break;

    case 4: 
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida!\n");


    }


    } while (opcao != 4);
    

    return 0;
}