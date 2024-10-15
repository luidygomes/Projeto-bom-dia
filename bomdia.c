#include <stdio.h>
#include <string.h>

void documentacao(){
    printf("---------------------------BEM-VINDO(A)---------------------------------\n");
    printf("--help ou -h (Para mostrar a documentação do software)\n");
    printf("--version ou -v (Para mostrar versão do software)\n");
    printf("--pt ou -1 (Para dar bom dia em português)\n");
    printf("--en ou --en (Para dar bom dia em inglês)\n");
    printf("--es ou -3 (Para dar bom dia em espanhol)\n");
    printf("--fr ou -4 (Para dar bom dia em francês)\n");
    printf("--it ou -5(Para dar bom dia em italiano)\n");
    printf("--co ou -6(Para dar bom dia em coreano)\n");
    printf("--jp ou -7(Para dar bom dia em japonês)\n");
    printf("--ru ou -8(Para dar bom dia em russo)\n");
    printf("-------------------------------------------------------------------------\n");
}

void versao(){
    printf("Programa Bom Dia versão 1.0.0\n");
}

void erro_semopcao(){
    printf("---------------------------ERROR----------------------------------------\n");
    printf("Voce não informou uma opção.\n");
    documentacao();
}

void erro_opcao(){
    printf("------------------------------------ERROR-------------------------------------\n");
    printf("Voce não informou uma opção válida, mencione --help ou -h para saber mais.\n");
    printf("-------------------------------------------------------------------------------\n");
}

void erro_maisopcao(){
    printf("-------------------------------------ERROR-------------------------------------\n");
    printf("Voce informou mais de uma opção, mencione --help ou -h para saber mais.\n");
    printf("--------------------------------------------------------------------------------\n");
}

void verificar(char opcao[]){
    if(strcmp(opcao, "--pt") == 0 || strcmp(opcao, "-1") == 0) {
        printf("Bom Dia!\n");
    } else if(strcmp(opcao, "--en") == 0 || strcmp(opcao, "-2") == 0) {
        printf("Good Morning!\n");
    } else if(strcmp(opcao, "--es") == 0 || strcmp(opcao, "-3") == 0) {
        printf("Buenos Dias!\n");
    } else if(strcmp(opcao, "--fr") == 0 || strcmp(opcao, "-4") == 0) {
        printf("Bonjour!\n");
    } else if(strcmp(opcao, "--it") == 0 || strcmp(opcao, "-5") == 0) {
        printf("Buongiorno!\n");
    } else if(strcmp(opcao, "--co") == 0 || strcmp(opcao, "-6") == 0) {
        printf("좋은 아침이에요\n");
    } else if(strcmp(opcao, "--jp") == 0 || strcmp(opcao, "-7") == 0) {
        printf("おはよう\n");
    } else if(strcmp(opcao, "--ru") == 0 || strcmp(opcao, "-8") == 0) {
        printf("доброе утро\n");
    } else if (strcmp(opcao, "--help") == 0 || strcmp(opcao, "-h") == 0) {
        documentacao();
    } else if (strcmp(opcao, "--version") == 0 || strcmp(opcao, "-v") == 0) {
        versao();    
    } else 
        erro_opcao();
    
}

int main (int argc, char **argv) {

    if(argc <= 1) 
        erro_semopcao();
    

    if(argc >= 3)
        erro_maisopcao();
    

    if(argc > 1 && argc < 3)
        verificar(argv[1]);
    
}
