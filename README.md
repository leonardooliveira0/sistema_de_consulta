#include <stdio.h>
#include <stdlib.h>
#define numCliente 1
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");


    int menu=0,i,codigoMedico=0;
    float preco;
    char cliente[numCliente][40],confirmaConsulta,tipo_medico[3][20],sintomas, aux1, aux2, aux3;

    for(i=0;i<numCliente;i++){

    printf("Olá! Bem-Vindo(a) ao nosso sistema de consultas!\n Digite 1 caso queira marcar uma consulta \n ou Digite 2 caso queira deixar o sistema de consultas\n");
    scanf("%d",&menu);
    system("cls");
    switch(menu){
        case 1: printf("Digite seu nome\n");
                scanf("%s",&cliente[i]);
                system("cls");
                printf("Seja bem vindo %s!\nProcura um profissional de qual área para realizar a consulta?\nTemos a disposição: pediatra,cardiologista e dentista\n",cliente[i]);
                scanf("%s",&tipo_medico[i]);
                system("cls");

                if(strcmp(tipo_medico[i], "pediatra")==0||(strcmp(tipo_medico[i], "Pediatra")==0)){
                    printf("Médicos a disposição na área da pediatria: \n");
                    printf("Dr. Mandaloriano|R$50|29 anos|digite 1\n");
                    printf("Dra. Renegade|R$63|55 anos|digite 2\n");
                    printf("Digite o numero do profissional que deseja\n");
                    scanf("%d",&codigoMedico);
                     switch(codigoMedico){
        case 1: preco = preco + 50;
                printf("O preço da consulta ficara em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,voce sera encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferencia e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                   printf("Bem vindo ao meu consultório! Sou formado na área e estou aqui para ouvir o que esta sentindo.\n Pode me explicar melhor?\n");
                      printf("\n");
                      scanf("%s",&sintomas);
                      printf("Hmm... você precisará passar por alguns exames para comprovar a existência deste problema.\n Faça um hemograma e um teste de urina no andar inferior.\n Caso se confirme algum problema te receitarei algum ansioliticos na volta. Ate mais!\n");
                }else{printf("Consulta cancelada!\n");
                }
            break;
        case 2: preco = preco + 63;
                printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,você será encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferência e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                      printf("Bem vindo ao meu consultório! Sou formado na área e estou aqui para ouvir o que esta sentindo. Pode me explicar melhor?\n");
                      printf("\n");
                      scanf("%s",&sintomas);
                      printf("Hmm... voce precisará de alguns exames para comprovar a existência deste problema. Faça um hemograma e um teste de urina no andar inferior. Caso se confirme algum problema te receitarei algum ansiolíticos na volta. Até mais!\n");

                      }
                   else{printf("Consulta cancelada!\n");
                }
            break;
        default: break;
                }
                }if(strcmp ( tipo_medico[i], "cardiologista")==0 || strcmp(tipo_medico[i], "Cardiologista")==0){
                 printf("Médicos a disposição na área da cardiologia:\n");
                    printf("Dr. Black| R$97| 69 anos| digite 1\n");
                    printf("Dra. Valente| R$84| 61 anos| digite 2\n");
                    printf("Digite o número do profissional que deseja\n");
                    scanf("%d",&codigoMedico);
                switch(codigoMedico){
                case 1: preco = preco + 97;
                printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,você será encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferencia e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                      printf("Bem vindo ao meu consultório!\n Vou lhe pedir inicialmente exames para a revisão da atual situação de seu sistema cardiológico. Ok?\n");
                      printf("\n");
                      scanf("%s",&sintomas);
                      printf("Iremos iniciar com alguns exames como eletrocardiograma,raio x de tórax,ecocardiograma... \npara em seguida te receitar alguns medicamentos e como prosseguir.\nNo seu caso provavelmente dopamina sera necessaria.Espero ter ajudado.Até breve! \n");

                   }else{printf("Consulta cancelada!\n");
                }
            break;
        case 2: preco = preco + 84;
                printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,você será encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferência e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                   printf("Bem vindo ao meu consultório! Vou lhe pedir inicialmente exames para a revisão da atual situação de seu sistema cardiológico. Ok?\n");
                      printf("\n");
                      scanf("%s",&sintomas);
                      printf("Iremos iniciar com alguns exames como eletrocardiograma,raio x de tórax,ecocardiograma... para em seguida te receitar alguns medicamentos e como prosseguir.No seu caso provavelmente dopamina será necessária.Espero ter ajudado.Até breve! \n");
                   }else{
                        printf("Consulta cancelada!\n");
                }
            break;
        default: break;
                }}if(strcmp(tipo_medico[i], "dentista")==0||(strcmp(tipo_medico[i], "Dentista")==0)){
                    printf("Médicos a disposição na area da odontologia: \n");
                    printf("Dr. Yoda|R$46|41 anos|digite 1\n");
                    printf("Dra. Lucimara|R$39|33 anos|digite 2\n");
                    printf("Digite o número do profissional que deseja\n");
                    scanf("%d",&codigoMedico);
                     switch(codigoMedico){
        case 1: preco = preco + 46;
                printf("O preço da consulta ficara em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,voce sera encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferência e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                    printf("Bem vindo ao consultório odontológico! \nPor gentileza, deite-se na cadeira de consulta para que eu possa examinar seus dentes\n");
                    system("pause");
                    system("cls");
                      printf("Hum...Vejo tártaros e um ínicio de cárie em seus molares esquerdos.\nFelizmente nada precisará ser feito ainda, mas... O senhor precisa passar a escovar os dentes 3 vezes ao dia e passar o fio dental com mais frequência! Abraços \n");
                   }else{printf("Consulta cancelada!\n");
                }
            break;
        case 2: preco = preco + 39;
                printf("O preço da consulta ficará em R$ %.2f, deseja continuar?\n s-sim n-nao\n Caso sim,voce será encaminhado ao dia seguinte,o dia da consulta\n",preco);
                scanf("%s",&confirmaConsulta);
                if(confirmaConsulta=='s'){
                   printf("Obrigado pela preferência e tenha um bom dia!");
                   system("cls");
                   printf("No dia seguinte...\n\n\n");
                   system("pause");
                    printf("Bem vindo ao consultorio odontologico! Por gentileza, deite-se na cadeira de consulta para que eu possa examinar seus dentes\n");
                    system("pause");
                    system("cls");
                      printf("Hum...Vejo tártaros e um ínicio de cárie em seus molares esquerdos.\nFelizmente nada precisará ser feito ainda, mas... O senhor precisa passar a escovar os dentes 3 vezes ao dia e passar o fio dental com mais freuquência! Abraços \n");
                   }else{printf("Consulta cancelada!\n");
                }
            break;
        default: break;
                }}
        case 2:printf("Tchau e até logo!\n");
               system("pause");
            break;}system("cls");}

    return 0;
}



 
 
  


 
 


  
 
