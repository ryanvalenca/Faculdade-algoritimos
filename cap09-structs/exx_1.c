#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct cliente
    {
    char nome[50];
    char endereco[50];
    char telefone[20];
    };

int main() {
    
    struct cliente clientes[10];
    int opcao;
    int qtd_cadastrados=0;
    int achou = 0;
    char pesquisar[50];
    struct cliente aux;
    
    do
    {
    printf("\n=== SISTEMA DO PROGRAMA ===\n");
    printf("1. Cadastrar Novo Cliente(MAX:10)\n");
    printf("2. Pesquisar um Registro\n");
    printf("3. Classificar por ordem de nome os registros cadastrados\n");
    printf("4. Apresentar todos os registros\n");
    printf("5. Sair do programa de cadastro\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    while(getchar() != '\n');
    
    switch (opcao)
    {
    case 1:
        if (qtd_cadastrados < 10)
        {
        printf("\n--- Cadastro do Cliente %d ---\n", qtd_cadastrados + 1);

        printf("Nome: ");
        fgets(clientes[qtd_cadastrados].nome, 50, stdin);
        clientes[qtd_cadastrados].nome[strcspn(clientes[qtd_cadastrados].nome, "\n")] = 0;

        printf("Endereco: ");
        fgets(clientes[qtd_cadastrados].endereco, 50, stdin);
        clientes[qtd_cadastrados].endereco[strcspn(clientes[qtd_cadastrados].endereco, "\n")] = 0;

        printf("Telefone: ");
        fgets(clientes[qtd_cadastrados].telefone, 20, stdin);

        qtd_cadastrados++;
        printf("Cliente cadastrado com sucesso!\n");

        }
        else
        {
        printf("Limite de 10 clientes atingido!\n");
        }

        break;
    
    case 2:
        if (qtd_cadastrados == 0)
        {
        printf("Nenhum cliente encontrado para pesquisar!\n");
        break;
        }
        achou = 0;
        printf("Digite o nome a ser pesquisado: ");
        fgets(pesquisar, 50, stdin);

        pesquisar[strcspn(pesquisar, "\n")] = 0;

        for (int i = 0; i < qtd_cadastrados; i++)
        {
        if (strcmp(clientes[i].nome, pesquisar) == 0)
        {
        printf("\n=== CLIENTE ENCONTRADO ===\n");
        printf("Nome: %s\n", clientes[i].nome);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Telefone: %s\n", clientes[i].telefone);
        achou = 1;
        break;
        }
        }
        if (achou == 0)
        {
        printf("O Cliente pesquisado nao foi encontrado!\n");
        }
        break;

    case 3:
        if (qtd_cadastrados == 0)
        {
        printf("Nenhum cliente cadastrado!");
        break;
        }
        
        for (int i = 0; i < qtd_cadastrados; i++)
        {
        for (int j = i+1; j < qtd_cadastrados; j++)
        {
        if (strcmp(clientes[i].nome, clientes[j].nome) > 0)
        {
        aux = clientes[i];
        clientes[i] = clientes[j];
        clientes[j] = aux;
        }
        }
        }

        printf("Ordem Alfabetica dos nomes dos clientes:\n");

        for (int i = 0; i < qtd_cadastrados; i++)
        {
        printf("%s\n", clientes[i].nome);
        }
        break;

    case 4:
        if (qtd_cadastrados == 0)
        {
        printf("Nenhum cliente cadastrado no momento!");
        break; 
        }
        
        for (int i = 0; i < qtd_cadastrados; i++)
        {
        printf("Nome: %s\n", clientes[i].nome);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Telefone: %s", clientes[i].telefone);
        }
        break;

    case 5: 
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida!\n");


    }


    } while (opcao != 5);
    

    return 0;
}