#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 10



typedef struct est_data{
int dia;
int mes;
int ano;
}; Data;

typedef struct est_paciente{
char nome[100];
int cpf;
int idade;
}; Paciente;


int pesquisa(int v[],int tam,int x)
{
    int i,ind_x=-1;

    for(i=0;i<tam;i++)
    {
        if(x==v[i])
        {
            ind_x = i;
            return ind_x;
        }
    }
    return ind_x;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color F4");

    Data d1;
    Paciente p1;

int vet[5] = {1,2,3,4,5};
int menu=0,codigoMedico=0;
int i;
float preco=0.0;
char confirmaConsulta,tipo_medico[3][20],nomeresp[50];


    printf("\nSistema de Consultas\n");
    printf("\t\t\tSEJA BEM-VINDO(A) AO HOSPITAL MUNICIPAL\n\n");

    do{
       printf("Olá! Bem-Vindo(a) ao nosso sistema de consultas!\n Digite: 0 - para deixar o programa\n1 - caso queira marcar uma consulta\n2 - caso já tenha uma consulta marcada \n");
            scanf("%d",&menu);
            system("cls");
    switch(menu)
    {
        case 1:fflush(stdin);
    printf("Informe seu nome: ");
    gets(nome);
    fflush(stdin);

    printf("\n\nInforme seu CPF: ");
    scanf("%d",&cpf);

    printf("\n\nInforme sua idade: ");
    scanf("%d",&idade);

    if (idade<18)
    {
        fflush(stdin);
        printf("Informe o nome do seu reponsável: ");
        gets(nomeresp);
        fflush(stdin);
    }

    printf("Procura um profissional de qual área para realizar a consulta?\nTemos a disposição: pediatra,cardiologista e dentista\n");
    scanf("%s",&tipo_medico[i]);

    if(strcmp(tipo_medico[i], "pediatra")==0||(strcmp(tipo_medico[i], "Pediatra")==0)||(strcmp(tipo_medico[i], "PEDIATRA")==0)){
                printf("Médicos a disposição na área da pediatria: \n");
                printf("Dr. Marcelo|R$50|29 anos|digite 1\n");
                printf("Dra. Regina|R$63|55 anos|digite 2\n");
                printf("Digite o numero do profissional que deseja\n");
                scanf("%d",&codigoMedico);
        switch(codigoMedico){
            case 1: preco = preco + 50.0;
               printf("O preço da consulta ficara em R$ %.2f, deseja continuar?\n s-sim n-nao\n\n",preco);
               scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s')
            {
               printf("Obrigado pela preferência e tenha um bom dia!");
               system("cls");
            }else{printf("Consulta cancelada!\n");
            }break;

            case 2: preco = preco + 63.0;
               printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n\n",preco);
               scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s')
                {
                    printf("Obrigado pela preferência e tenha um bom dia!");
                    system("cls");
                }else{printf("Consulta cancelada!\n");
            }break;

            default: break;
    }

    if(strcmp ( tipo_medico[i], "cardiologista")==0 || strcmp(tipo_medico[i], "Cardiologista")==0 || strcmp(tipo_medico[i], "CARDIOLOGISTA")==0){
             printf("Médicos a disposição na área da cardiologia:\n");
                printf("Dr. Bernardo| R$97| 69 anos| digite 1\n");
                printf("Dra. Valéria| R$84| 61 anos| digite 2\n");
                printf("Digite o número do profissional que deseja\n");
                scanf("%d",&codigoMedico);

            switch(codigoMedico){
            case 1: preco = preco + 97.0;
            printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n\n",preco);
            scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s'){
               printf("Obrigado pela preferencia e tenha um bom dia!");
               system("cls");
               }else{printf("Consulta cancelada!\n");
            }break;
            case 2: preco = preco + 84.0;
            printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,você será encaminhado ao dia seguinte,o dia da consulta\n",preco);
            scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s'){
               printf("Obrigado pela preferência e tenha um bom dia!");
               system("cls");
               }else{
                    printf("Consulta cancelada!\n");
            }
        break;
        default: break;

        switch(menu){
    case 1:
            else{printf("Consulta cancelada!\n");
            }
               else{printf("Consulta cancelada!\n");
            }
        break;
    default: break;
            }
            }


               }
        break;

            }}if(strcmp(tipo_medico[i], "dentista")==0||(strcmp(tipo_medico[i], "Dentista||(strcmp(tipo_medico[i]", "DENTISTA")==0)){
                printf("Médicos a disposição na area da odontologia: \n");
                printf("Dr. Yoda|R$46|41 anos|digite 1\n");
                printf("Dra. Lucimara|R$39|33 anos|digite 2\n");
                printf("Digite o número do profissional que deseja\n");
                scanf("%d",&codigoMedico);
                 switch(codigoMedico){
    case 1: preco = preco + 46.0;
            printf("O preço da consulta ficara em R$ %.2f, deseja continuar?\n s-sim n-nao\n\n",preco);
            scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s'){
               printf("Obrigado pela preferência e tenha um bom dia!");
               system("cls");
               }else{printf("Consulta cancelada!\n");
            }
        break;

    case 2: preco = preco + 39.0;
            printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n\n",preco);
            scanf("%s",&confirmaConsulta);
            if(confirmaConsulta=='s'){
               printf("Obrigado pela preferência e tenha um bom dia!");
               system("cls");
               }else{printf("Consulta cancelada!\n");
            }
        break;
    default: break;
            }}
    case 2:printf("Até mais!\n");
           system("pause");
        break;}
        system("cls");
        }


    }while(menu!=0);


    printf("Pesquisa:%d\n",pesquisa(v,5,2));

        printf("\n\nMédicos disponíveis na área de pediatria:");


    printf("\n\nDigite a data da consulta com dois algarismos em cada área\n");

    printf("\nDia:");
    scanf("%d",&dia);
    printf("\nMês:");
    scanf("%d",&mes);
    printf("\nAno:");
    scanf("%d",&ano);


    return 0;
}





