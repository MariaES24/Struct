#include <stdlib.h> // Essa biblioteca é para alocar os dados na memória
#include <stdio.h>  // Essa biblioteca é para entrada e saída de dados
#include <locale.h> // Essa biblioteca é para caracteres especiais - PARA WINDOWS
#include <string.h> // Essa biblioteca é para mexer com texto

struct registro {
    char nome[100];
    char endereco[100];
    int nota;
    int faltas;
};

int main(void) {
    setlocale(LC_ALL, ""); // Configura para usar idioma padrão no sistema - PARA WINDOWS

    struct registro reg;

    strcpy(reg.nome, "Maria Eduarda Soares");
    strcpy(reg.endereco, "Rua dos Ipês, 261");

    reg.nota = 5;
    reg.faltas = 0;

    printf("Nome: %s\n", reg.nome);
    printf("Endereço: %s\n", reg.endereco);
    printf("Nota: %d\n", reg.nota);
    printf("Faltas: %d\n", reg.faltas);

    int i = 0;
    bool continua = true;

    do {
        printf("%d\n", i++);

        if (i == 10) {
            continua = false;
        }

    } while (continua);

    system("pause"); // Parar o programa no Windows - não deixa a tela fechar

    return 0;
}
