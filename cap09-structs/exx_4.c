#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas
{
int matricula;
char nome[50];
float salario;  
};

void cadastro(int qtd, struct pessoas pessoa[20]){

if (qtd < 20)
{

while(getchar() != '\n');
printf("\n--- SISTEMA DE CADASTRO ---\n");
printf("NOME: ");
fgets(pessoa[qtd].nome, 50, stdin);
pessoa[qtd].nome[strcspn(pessoa[qtd].nome, "\n")] = '\0';
printf("SALARIO: ");
scanf("%f", &pessoa[qtd].salario);
while(getchar() != '\n');
pessoa[qtd].matricula = (qtd + 1);

}

}

void ordenar(int qtd, struct pessoas pessoa[20]){

struct pessoas aux; 

for (int i = 0; i < qtd; i++)
{
for (int j = i+1; j < qtd; j++)
{
if (pessoa[i].matricula > pessoa[j].matricula)
{
aux = pessoa[i];
pessoa[i] = pessoa[j];
pessoa[j] = aux;
}
}
}

}



void classificar(int qtd, struct pessoas pessoa[20]){


if (qtd == 0)
{
printf("Nenhum cadastro efetuado!");
return;
}

ordenar(qtd, pessoa);

printf("\n=== REGISTROS CLASSIFICADOS POR ORDEM DE MATRICULA ===\n");
for (int i = 0; i < qtd; i++)
{
printf("MATRICULA: %d\n", pessoa[i].matricula);
printf("NOME: %s\n", pessoa[i].nome);
printf("SALARIO: %.2f\n", pessoa[i].salario);
}
}


void pesquisa(int qtd, struct pessoas pessoa[20]){


if (qtd == 0)
{
printf("Nenhum cadastro efetuado!");
return;
}

int pesquisa;
int achou=0;
int meio;
int inicio=0;
int fim=qtd-1;

ordenar(qtd, pessoa);


printf("Digite a matricula do empregado que deseja pesquisar\n");
scanf("%d", &pesquisa);


while (inicio <= fim)
{
meio = (inicio + fim)/2;

if (pessoa[meio].matricula == pesquisa)
{
achou = 1;
printf("O empregado pesquisado foi encontrado com sucesso!\n");
printf("MATRICULA: %d\n", pessoa[meio].matricula);
printf("NOME: %s\n", pessoa[meio].nome);
printf("SALARIO: %.2f\n", pessoa[meio].salario);
break;
}

else if (pessoa[meio].matricula > pesquisa)
{
fim = meio - 1;
}

else
{
inicio = meio + 1; 
}


}

if (achou == 0)
{
printf("O empregado pesquisado nao existe!\n");
return;
}

}


void acima(int qtd, struct pessoas pessoa[20]){
if (qtd == 0)
    {
        printf("Nenhum cadastro efetuado!\n");
        return;
    }

    
    ordenar(qtd, pessoa);

    int encontrados = 0;
    printf("\n=== EMPREGADOS QUE RECEBEM ACIMA DE 1000 REAIS ===\n");
    for (int i = 0; i < qtd; i++)
    {
        if (pessoa[i].salario > 1000.0)
        {
            printf("MATRICULA: %d | NOME: %s | SALARIO: %.2f\n", pessoa[i].matricula, pessoa[i].nome, pessoa[i].salario);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum empregado cadastrado nesta faixa.\n");
    }
}

void abaixo(int qtd, struct pessoas pessoa[20]){
if (qtd == 0)
    {
        printf("Nenhum cadastro efetuado!\n");
        return;
    }

    
    ordenar(qtd, pessoa);

    int encontrados = 0;
    printf("\n=== EMPREGADOS QUE RECEBEM ABAIXO DE 1000 REAIS ===\n");
    for (int i = 0; i < qtd; i++)
    {
        if (pessoa[i].salario < 1000.0)
        {
            printf("MATRICULA: %d | NOME: %s | SALARIO: %.2f\n", pessoa[i].matricula, pessoa[i].nome, pessoa[i].salario);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum empregado cadastrado nesta faixa.\n");
    }
}


void igual(int qtd, struct pessoas pessoa[20]){
if (qtd == 0)
    {
        printf("Nenhum cadastro efetuado!\n");
        return;
    }

    ordenar(qtd, pessoa);

    int encontrados = 0;
    printf("\n=== EMPREGADOS QUE RECEBEM 1000 REAIS ===\n");
    for (int i = 0; i < qtd; i++)
    {
        if (pessoa[i].salario == 1000.0)
        {
            printf("MATRICULA: %d | NOME: %s | SALARIO: %.2f\n", pessoa[i].matricula, pessoa[i].nome, pessoa[i].salario);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum empregado cadastrado nesta faixa.\n");
    }
}





int main() {
   
    struct pessoas pessoa[20];
    int opcao;
    int qtd=0;

    do
    {
    
    printf("\n=== MENU ===\n");
    printf("1. CADASTRAR\n");
    printf("2. CLASSIFICAR OS REGISTROS\n");
    printf("3. PESQUISAR\n");
    printf("4. APRESENTAR EMPREGADOS QUE RECEBEM ACIMA DE 1000 REAIS\n");
    printf("5. APRESENTAR EMPREGADOS QUE RECEBEM ABAIXO DE 1000 REAIS\n");
    printf("6. APRESENTAR EMPREGADOS QUE RECEBEM 1000 REAIS\n");
    printf("7. SAIR DO PROGRAMA\n");
    printf("ESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        if (qtd < 20)
        {
        cadastro(qtd, pessoa);
        qtd++;
        }
        else
        {
        printf("Limite maximo de cadastros atingido!\n");
        }
        break;
    
    case 2: 
        classificar(qtd, pessoa);
        break;

    case 3: 
        pesquisa(qtd, pessoa);
        break;

    case 4: 
        acima(qtd, pessoa);
        break; 

    case 5:
        abaixo(qtd, pessoa);
        break;

    case 6: 
        igual(qtd, pessoa);
        break;

    case 7: 
        printf("Saindo...\n");
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }


    } while (opcao !=7);
    

    return 0;
}