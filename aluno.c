#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *aluno;

    int id_aluno, matricula;
    char nome_aluno[50], turma[50];

    printf("Digite o id do aluno: ");
    scanf("%d", &id_aluno);

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome_aluno);

    printf("Digite a turma do aluno: ");
    scanf("%s", &turma);

    aluno = fopen("C:/Users/alves/Documents/alunos.txt", "a");

    if (aluno == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
  
    fprintf(aluno, "%d %s %d %s\n", id_aluno, nome_aluno, matricula, turma);

    fclose(aluno);

    printf("Dados salvos com sucesso!\n");

    return 0;
}
