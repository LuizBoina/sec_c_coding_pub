#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int passMatches(char *pass, char *str_in);

int main(int argc, char** argv) {
    if(argc == 1) {
        printf("Favor informar sua senha na chamada do programa");
        exit(EXIT_FAILURE);
    }
    char *passwd = argv[1];
    char password[] = "bca";
    if(passMatches(password, passwd)) {
        printf("Senha correta, bem-vindo!");
    }
    else {
        printf("Senha incorreta, tente novamente!");
    }
    return 0;
}

int passMatches(char *pass, char *str_in) {
    if(strlen(pass) != strlen(str_in)) {
        return 0;
    }
    sleep(1);
    for(int i = 0; i < strlen(pass); i++) {
        if(pass[i] != str_in[i]) {
            return 0;
        }
        sleep(1);    
    }
    return 1;
}