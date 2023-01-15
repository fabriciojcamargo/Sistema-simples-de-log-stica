#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//STRUCTS//
typedef struct cadastro CADTRANSPORTE;
struct cadastro{
    char caminhaoTransporte[100];
    char motoristaTransporte[100];
    char destinoTransporte[100];
    char statusTransporte[100];
};

//Variáveis//
int numero;
char login[30];
char senha[30];
int data;
int dia;
char mes[15];
int ano;

//VAR FORNECEDORES//
char nomeFornecedor[100];
char paisFornecedor[100];
char cidadeFornecedor[100];
int contatoForncedor[12];
//VAR CLIENTE//
char nomeCliente[100];
int contatoCliente[12];
char paisCliente[100];
char cidadeCliente[100];
//VAR PRODUTOS//
char nomeProduto[100];
char donoProduto[100];
int quantidadeProduto[20];
int contatoProdutos[12];
//VAR FUNCIONARIO//
char nomeFuncionario[100];
int contatoFuncionario[12];
int cpfFuncionario[12];
char cargoFuncionario[100];
int cepFuncionario[10];
char cidadeFuncionario[100];
char ruaFuncionario[100];
int numCasaFuncionario[20];
char complementoFuncionario[100];
//VAR TRANSPORTE//
//char caminhaoTransporte[100];
//char motoristaTransporte[100];
//char destinoTransporte[100];
//char statusTransporte[100];
FILE *projeto_pim;


//Funções//
void telaLogin();
void telaMenu();
void menuRetorno();
//FORNCEDOR//
void telaFornecedor();
void cadastroFornecedor();
void perfilFornecedor();
void listarFornecedor();
//CLIENTE//
void telaCliente();
void cadastroCliente();
void perfilCliente();
void listarCliente();
//PRODUTO//
void telaProdutos();
void cadastroProdutos();
void perfilProdutos();
void listarProdutos();
//FUNCIONARIO//
void telaFuncionario();
void cadastroFuncionario();
void perfilFuncionario();
void listarFuncionario();
//TRANSPORTE//
void telaTransporte();
void cadastroTransporte();
void perfilTransporte();
void listarTransporte();
void pesquisaTransporte();


//inicio//
int main (int argc, char** argv)
{
    telaLogin();
    return 0;
}


// TELA DE LOGIN //
void telaLogin()
{
    char gerente [30] = "gerente"; //Login cadastro no sistema//
    char senhaGerente [30] = "senha"; //Senha cadastrada em sistema//

    printf("\tEntre com o seu login\n");
    printf(" Login: ");
    scanf("%s", &login);
    printf(" Senha: ");
    scanf("%s", &senha);

    if (strcmp (gerente, login) == 0 && strcmp (senhaGerente, senha) == 0){
        system("cls");
        telaMenu();
    }
    else
        system("cls");
        printf("\t ACESSO NEGADO \t");
}


// TELA DO MENU //
void telaMenu()
{
    printf("********************************************************************************\n\n");
    printf("********************************* SEJA BEM VINDO *******************************\n\n");
    printf("********************************************************************************\n\n");
    printf("  1- Clientes\n");
    printf("  2- Fornecedores\n");
    printf("  3- Produtos\n");
    printf("  4- Funcionarios\n");
    printf("  5- Transporte\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada:");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            telaCliente();
            break;
        case 2:
            system("cls");
            telaFornecedor();
            break;
        case 3:
            system("cls");
            telaProdutos();
            break;
        case 4:
            system("cls");
            telaFuncionario();
            break;
        case 5:
            system("cls");
            telaTransporte();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void menuRetorno()
{
    printf("*********************************************************************************\n\n");
    printf("************************* VOCE RETORNOU A TELA DE MENU **************************\n\n");
    printf("****************** ESCOLHA UMA OPCAO OU APERTE ZERO PARA SAIR *******************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Clientes\n");
    printf("  2- Fornecedores\n");
    printf("  3- Produtos\n");
    printf("  4- Funcionarios\n");
    printf("  5- Transporte\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
             telaCliente();
            break;
        case 2:
            system("cls");
            telaFornecedor();
            break;
        case 3:
            system("cls");
            telaProdutos();
            break;
        case 4:
            system("cls");
            telaFuncionario();
            break;
        case 5:
            system("cls");
            telaTransporte();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}



// TELA DOS FORNCEDORES //
void telaFornecedor()
{
    projeto_pim = fopen ("DadosPim.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("****************************** SOBRE FORNECEDORES *******************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Cadastrar um novo fornecedor\n");
    printf("  2- Perfis cadastrados\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n");
    printf(" \n Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            cadastroFornecedor();
            break;
        case 2:
            system("cls");
            perfilFornecedor();
            break;
        case 3:
            system("cls");
            menuRetorno();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }


    fprintf (projeto_pim, "%s \n %s", nomeFornecedor, paisFornecedor);
    fclose(projeto_pim);
}


// TELA DOS CLIENTES //
void telaCliente()
{
    projeto_pim = fopen ("DadosPim.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("******************************* SOBRE CLIENTES **********************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Cadastrar um novo cliente\n");
    printf("  2- Cadastros\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n\n");
    printf(" \n Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero){
        case 1:
            system("cls");
            cadastroCliente();
            break;
        case 2:
            system("cls");
            perfilCliente();
            break;
        case 3:
            system("cls");
            menuRetorno();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}


// CADASTRO DOS FORNECEDORES //
void cadastroFornecedor()
{
    static int linha;

    projeto_pim = fopen ("DadosFornecedores.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("****************************** CADASTRO DE FORNECEDORES *************************\n\n");
    printf("*********************************************************************************\n\n");

    printf(" Digite a razao social: ");
    fflush(stdin);
    fgets(nomeFornecedor, 100, stdin);
    printf(" Digite o pais: ");
    fscanf(stdin,"%s", paisFornecedor);
    printf(" Digite a cidade: ");
    fscanf(stdin, "%s", cidadeFornecedor);
    printf(" Digite o telefone para contato com o DDD: ");
    fscanf(stdin, "%d", contatoForncedor);
    printf(" Qual o dia de hoje? ");
    fscanf(stdin, "%d", &dia);
    printf(" Qual o mes? (Digite as 3 primeiras letras) ");
    fscanf(stdin, "%s", &mes);
    printf(" Qual o ano? ");
    fscanf(stdin, "%d", &ano);

    linha++;

    fprintf (projeto_pim, " \n Nome do Fornecedor: %s País do Fornecedor: %s \n Cidade do Fornecedor: %s \n Telefone para contato com DDD: %d \n Data do Cadastro: %d/%s/%d \n**********************************************************************************", nomeFornecedor, paisFornecedor, cidadeFornecedor, contatoForncedor, dia, mes, ano);
    fclose(projeto_pim);

    system("cls");
    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO REALIZADO ******************************\n\n");
    return menuRetorno();
}
void perfilFornecedor()
{
    projeto_pim = fopen ("DadosPim.txt", "a");

    printf("***************************************************************************************\n\n");
    printf("****************************** CADASTRO DE FORNECEDORES *******************************\n\n");
    printf("***************************************************************************************\n\n");
    printf("  1- Informacoes cadastradas\n");
    printf("  2- Voltar\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            listarFornecedor();
            break;
        case 2:
            system("cls");
            telaFornecedor();
            break;
        case 3:
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void listarFornecedor()
{
     projeto_pim = fopen ("DadosFornecedores.txt", "r");

    int i;

    if(projeto_pim == NULL){
           printf("O arquivo está com problemas, favor verificar !\n");
        }
        else{
             fflush(stdin);
                printf("*************************************************************************************\n\n");
                printf("******************************* CADASTROS LOCALIZADOS *******************************\n\n");
                printf("*************************************************************************************\n");
             while(fgets(nomeFornecedor, 100, projeto_pim) != NULL){
                    printf("\n%s\n", nomeFornecedor);
        }
    }
    fclose(projeto_pim);
    getch();
    system("cls");
    return menuRetorno();
}






// CADASTRO DE CLIENTES //
void cadastroCliente()
{
   projeto_pim = fopen ("DadosCliente.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO DE CLIENTES ****************************\n\n");
    printf("*********************************************************************************\n\n");

    printf(" Digite a razao social: ");
    fflush(stdin);
    fgets(nomeCliente, 100, stdin);
    printf(" Digite o pais: ");
    fgets(paisCliente, 100, stdin);
    printf(" Digite a cidade: ");
    fgets(cidadeCliente, 100, stdin);
    printf(" Digite o telefone para contato com o DDD: ");
    fscanf(stdin, "%d", contatoCliente);
    printf(" Qual o dia de hoje? ");
    fscanf(stdin, "%d", &dia);
    printf(" Qual o mes? (Digite as 3 primeiras letras) ");
    fscanf(stdin, "%s", &mes);
    printf(" Qual o ano? ");
    fscanf(stdin, "%d", &ano);

    fprintf (projeto_pim, " \n Nome do Cliente: %s Pais do Cliente: %s  Cidade do Cliente: %s  Telefone para contato com DDD: %d \n Data do Cadastro: %d/%s/%d \n**********************************************************************************", nomeCliente, paisCliente, cidadeCliente, contatoCliente, dia, mes, ano);
    fclose(projeto_pim);

    system("cls");
    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO REALIZADO ******************************\n\n");
    return menuRetorno();
}
void perfilCliente()
{
    projeto_pim = fopen ("DadosPim.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("********************************* SOBRE CLIENTES ********************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Perfis Cadastrados\n");
    printf("  2- Voltar\n");
    printf("  0- Sair\n\n");
    printf(" Digite a opcao desejada:");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            listarCliente();
            break;
        case 2:
            system("cls");
            telaCliente();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void listarCliente()
{
     projeto_pim = fopen ("DadosCliente.txt", "r");

    int i;

    if(projeto_pim == NULL){
           printf("O arquivo está com problemas, favor verificar !\n");
        }
        else{
             fflush(stdin);
                printf("*************************************************************************************\n\n");
                printf("******************************* CADASTROS LOCALIZADOS *******************************\n\n");
                printf("*************************************************************************************\n");
             while(fgets(nomeCliente, 100, projeto_pim) != NULL){
                    printf("\n%s\n", nomeCliente);
        }
    }
    fclose(projeto_pim);
    getch();
    system("cls");
    return menuRetorno();
}


// TELA E CADASTRO DE PRODUTOS //
void telaProdutos()
{
    projeto_pim = fopen ("DadosPim.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("******************************* SOBRE PRODUTOS **********************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Cadastrar um novo produto\n");
    printf("  2- Produtos cadastrados\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            cadastroProdutos();
            break;
        case 2:
            system("cls");
            perfilProdutos();
            break;
        case 3:
            system("cls");
            menuRetorno();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void cadastroProdutos()
{
    projeto_pim = fopen ("DadosProdutos.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("******************************* SOBRE PRODUTOS **********************************\n\n");
    printf("*********************************************************************************\n\n");
    printf(" Nome do proprietario: ");
    fflush(stdin);
    fgets(donoProduto, 100, stdin);
    printf(" Telefone de contato com DDD: ");
    fscanf(stdin, "%d", &contatoProdutos);
    printf(" Qual o nome da bebida: ");
    fflush(stdin);
    fgets(nomeProduto, 100, stdin);
    printf(" Qual a quantidade de garrafas: ");
    fscanf(stdin, "%d", quantidadeProduto);
    printf(" Qual o dia de hoje? ");
    fscanf(stdin, "%d", &dia);
    printf(" Qual o mes? (Digite as 3 primeiras letras) ");
    fscanf(stdin, "%s", &mes);
    printf(" Qual o ano? ");
    fscanf(stdin, "%d", &ano);


    fprintf (projeto_pim, " \n Nome do Proprietario: %s Telefone para contato: %d \n Nome da Bebida: %s Quantidade de Garrafas: %d \n Data de Cadastro: %d/%s/%d \n**********************************************************************************", donoProduto, contatoProdutos, nomeProduto, quantidadeProduto, dia, mes, ano);
    fclose(projeto_pim);

    system("cls");
    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO REALIZADO ******************************\n\n");
    return menuRetorno();
}
void perfilProdutos()
{
    printf("*********************************************************************************\n\n");
    printf("******************************** SOBRE PRODUTOS *********************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Produtos cadastrados\n");
    printf("  2- Voltar\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            listarProdutos();
            break;
        case 2:
            system("cls");
            telaProdutos();
            break;
        case 0:
            exit(EXIT_SUCCESS);

    }
}
void listarProdutos()
{
     projeto_pim = fopen ("DadosProdutos.txt", "r");

    int i;

    if(projeto_pim == NULL){
           printf("O arquivo está com problemas, favor verificar !\n");
        }
        else{
             fflush(stdin);
                printf("*************************************************************************************\n\n");
                printf("******************************* CADASTROS LOCALIZADOS *******************************\n\n");
                printf("*************************************************************************************\n");
             while(fgets(nomeProduto, 100, projeto_pim) != NULL){
                    printf("\n%s\n", nomeProduto);
        }
    }
    fclose(projeto_pim);
    getch();
    system("cls");
    return menuRetorno();
}


//TELA E CADASTRO DOS FUNCIONARIOS//
void telaFuncionario()
{
    printf("*********************************************************************************\n\n");
    printf("******************************* SOBRE FUNCIONÁRIOS ******************************\n\n");
    printf("*********************************************************************************\n\n");
    printf("  1- Cadastrar um novo funcionario\n");
    printf("  2- Lista de Cadastrados\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n\n");
    printf(" Digite a opcao desejada:");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            cadastroFuncionario();
            break;
        case 2:
            system("cls");
            listarFuncionario();
            break;
        case 3:
            system("cls");
            menuRetorno();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void cadastroFuncionario()
{
    projeto_pim = fopen ("DadosFuncionario.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("******************************** SOBRE FUNCIONÁRIOS *****************************\n\n");
    printf("*********************************************************************************\n\n");
    printf(" Nome Completo do funcionario: ");
    fflush(stdin);
    fgets(nomeFuncionario, 100, stdin);
    printf(" Digite o CPF: ");
    fscanf(stdin, "%d", cpfFuncionario);
    printf(" Telefone para contato com DDD: ");
    fscanf(stdin, "%d", contatoFuncionario);
    printf(" Digite o cargo: ");
    fflush(stdin);
    fgets(cargoFuncionario, 100, stdin);
    printf(" Qual o dia de hoje? ");
    fscanf(stdin, "%d", &dia);
    printf(" Qual o mes? (Digite as 3 primeiras letras) ");
    fscanf(stdin, "%s", &mes);
    printf(" Qual o ano? ");
    fscanf(stdin, "%d", &ano);

    fprintf (projeto_pim, " \n Nome do Funcionário: %s  CPF do Funcionário: %d \n Telefone de contato com DDD: %d \n Cargo: %s  Data de Cadastro: %d/%s/%d \n**********************************************************************************", nomeFuncionario, cpfFuncionario, contatoFuncionario, cargoFuncionario, dia, mes, ano);
    fclose(projeto_pim);

    system("cls");
    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO REALIZADO ******************************\n\n");
    return menuRetorno();
}
void listarFuncionario()
{
     projeto_pim = fopen ("DadosFuncionario.txt", "r");

    int i;

    if(projeto_pim == NULL){
           printf("O arquivo está com problemas, favor verificar !\n");
        }
        else{
             fflush(stdin);
                printf("*************************************************************************************\n\n");
                printf("******************************* CADASTROS LOCALIZADOS *******************************\n\n");
             while(fgets(nomeFuncionario, 100, projeto_pim) != NULL){
                    printf("\n%s\n", nomeFuncionario);
        }
    }
    fclose(projeto_pim);
    getch();
    system("cls");
    return menuRetorno();
}


// TELA E CADASTRO DO TRANSPORTE//
void telaTransporte()
{
    printf("********************************************************************************\n\n");
    printf("******************************* SOBRE TRANSPORTE *******************************\n\n");
    printf("********************************************************************************\n\n");
    printf("  1- Novo Cadastro\n");
    printf("  2- Informacoes Sobre Transporte\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada:");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            cadastroTransporte();
            break;
        case 2:
            system("cls");
            perfilTransporte();
            break;
        case 3:
            system("cls");
            menuRetorno();
            break;
        case 0:
            exit(EXIT_SUCCESS);
    }
}
void cadastroTransporte()
{
    char *status = "S";
    int linha;

    CADTRANSPORTE cadt;

    projeto_pim = fopen ("DadosTransporte.txt", "a");

    printf("*********************************************************************************\n\n");
    printf("****************************** CADASTRO DO TRANSPORTE ***************************\n\n");
    printf("*********************************************************************************\n\n");


    printf(" Nome do motorista responsavel: ");
    fflush(stdin);
    fgets(cadt.motoristaTransporte, 100, stdin);
    printf(" Qual o modelo do veiculo: ");
    fgets(cadt.caminhaoTransporte, 100, stdin);
    printf(" O veiculo esta em entrega? (S - Sim | N - Nao) ");
    scanf("%s", &cadt.statusTransporte);
    if(strcmp (status, cadt.statusTransporte)==0){
        printf(" Qual a cidade de destino?");
        fflush(stdin);
        fgets(cadt.destinoTransporte, 100, stdin);
    }
    printf(" Qual o dia de hoje? ");
    fscanf(stdin, "%d", &dia);
    printf(" Qual o mes? (Digite as 3 primeiras letras) ");
    fscanf(stdin, "%s", &mes);
    printf(" Qual o ano? ");
    fscanf(stdin, "%d", &ano);
    linha++;


    fprintf (projeto_pim, " \n  Nome do Motorista: %s  Modelo do veiculo: %s  Status do Veiculo: %s \n  Destino: %s  Data do Cadastro: %d/%s/%d \n**********************************************************************************", cadt.motoristaTransporte, cadt.caminhaoTransporte, cadt.statusTransporte, cadt.destinoTransporte, dia, mes, ano);
    fclose(projeto_pim);

    system("cls");
    printf("*********************************************************************************\n\n");
    printf("******************************* CADASTRO REALIZADO ******************************\n\n");
    return menuRetorno();
}
void perfilTransporte()
{
    printf("***********************************************************************************\n\n");
    printf("******************************** SOBRE TRANSPORTE *********************************\n\n");
    printf("***********************************************************************************\n\n");
    printf("  1- Listar Cadastros\n");
    printf("  2- Pesquisar\n");
    printf("  3- Voltar\n");
    printf("  0- Sair\n\n");
    printf("  Digite a opcao desejada: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1:
            system("cls");
            listarTransporte();
            break;
        case 2:
            system("cls");
            pesquisaTransporte();
            break;
        case 3:
            system("cls");
            telaTransporte();
            break;
        case 0:
            exit(EXIT_SUCCESS);

    }
}
void listarTransporte()
{
     projeto_pim = fopen ("DadosTransporte.txt", "r");

    CADTRANSPORTE cadt;
    int i;

    if(projeto_pim == NULL){
           printf("O arquivo está com problemas, favor verificar !\n");
        }
        else{
             fflush(stdin);
                printf("*************************************************************************************\n\n");
                printf("******************************* CADASTROS LOCALIZADOS *******************************\n\n");
                printf("*************************************************************************************\n\n");
             while(fgets(cadt.motoristaTransporte, 100, projeto_pim) != NULL){
                    printf("\n%s\n", cadt.motoristaTransporte);
        }
    }
    fclose(projeto_pim);
    getch();
    system("cls");
    return menuRetorno();
}
void pesquisaTransporte()
{
    FILE *projeto_pim;
    projeto_pim = fopen ("DadosTransporte.txt", "rb");

    CADTRANSPORTE cadt;
    int i;
    char motoristaPesquisa[100];

                printf("*************************************************************************************\n\n");
                printf("*********************** 1 PARA PESQUISAR OU 2 PARA VOLTAR ***************************\n\n");
                printf("*************************************************************************************\n\n");
                printf("Digite a opcao: ");
    scanf("%d", &numero);
    system("cls");

    switch(numero){
        case 1:
            printf("Qual o nome do motorista? ");
            scanf("%s", motoristaPesquisa);

            for(i=0;i<100;i++){
                if(cadt.motoristaTransporte == motoristaPesquisa)
                    fflush(stdin);
                    while(fgets(&cadt.motoristaTransporte[i], 100, projeto_pim)){
                        fprintf(stdout, "\n%s\n", &cadt.motoristaTransporte[i]);
                }

            //fprintf(stdout, "\nNome do motorista: %s \n", &cadt.motoristaTransporte[i]);
            //fprintf(stdout,"\nModelo do caminhao: %s \n", &cadt.caminhaoTransporte[i]);
            //fprintf(stdout, "\nStatus (S - Sim || N - Nao): %s \n\n", &cadt.statusTransporte[i]);
            }

        case 2:
            menuRetorno();
    }

    fclose(projeto_pim);
    menuRetorno();
}



