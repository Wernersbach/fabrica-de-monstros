#include <stdio.h>

int main(void) {
    int familia, tipo, cabeca, olhos, boca, cor;

    printf("=====================================\n");
    printf("        FABRICA DE MONSTROS\n");
    printf("  Retrato falado do planeta Zuron\n");
    printf("=====================================\n\n");

    /* Escolha da familia (primeira parte do nome) */
    printf("Escolha a FAMILIA do monstro:\n");
    printf("  1 - Franken\n");
    printf("  2 - Zombos\n");
    printf("  3 - Happy\n");
    printf("Opcao: ");
    scanf("%d", &familia);

    /* Escolha do tipo (segunda parte do nome) */
    printf("\nEscolha o TIPO do monstro:\n");
    printf("  1 - Wackus\n");
    printf("  2 - Vegitas\n");
    printf("  3 - Spritem\n");
    printf("Opcao: ");
    scanf("%d", &tipo);

    /* Caracteristicas da cabeca */
    printf("\nEscolha o FORMATO DA CABECA:\n");
    printf("  1 - Redonda\n");
    printf("  2 - Quadrada\n");
    printf("  3 - Triangular\n");
    printf("Opcao: ");
    scanf("%d", &cabeca);

    /* Caracteristicas dos olhos */
    printf("\nEscolha o TIPO DE OLHOS:\n");
    printf("  1 - Dois olhos grandes\n");
    printf("  2 - Um olho apenas (ciclope)\n");
    printf("  3 - Varios olhos pequenos\n");
    printf("Opcao: ");
    scanf("%d", &olhos);

    /* Caracteristicas da boca */
    printf("\nEscolha o TIPO DE BOCA:\n");
    printf("  1 - Boca costurada\n");
    printf("  2 - Sorriso gigante\n");
    printf("  3 - Dentes pontudos\n");
    printf("Opcao: ");
    scanf("%d", &boca);

    /* Cor predominante */
    printf("\nEscolha a COR PREDOMINANTE:\n");
    printf("  1 - Verde\n");
    printf("  2 - Roxo\n");
    printf("  3 - Cinza\n");
    printf("Opcao: ");
    scanf("%d", &cor);

    const char *nomeFamilia;
    const char *nomeTipo;
    const char *descCabeca;
    const char *descOlhos;
    const char *descBoca;
    const char *descCor;

    /* Familia */
    switch (familia) {
        case 1: nomeFamilia = "Franken"; break;
        case 2: nomeFamilia = "Zombos";  break;
        case 3: nomeFamilia = "Happy";   break;
        default: nomeFamilia = "Desconhecido"; break;
    }

    /* Tipo */
    switch (tipo) {
        case 1: nomeTipo = "Wackus";  break;
        case 2: nomeTipo = "Vegitas"; break;
        case 3: nomeTipo = "Spritem"; break;
        default: nomeTipo = "Indefinido"; break;
    }

    /* Cabeca */
    switch (cabeca) {
        case 1: descCabeca = "cabeca redonda";   break;
        case 2: descCabeca = "cabeca quadrada";  break;
        case 3: descCabeca = "cabeca triangular";break;
        default: descCabeca = "cabeca de formato estranho"; break;
    }

    /* Olhos */
    switch (olhos) {
        case 1: descOlhos = "dois olhos grandes";          break;
        case 2: descOlhos = "apenas um olho (ciclope)";    break;
        case 3: descOlhos = "varios olhos pequenos";       break;
        default: descOlhos = "olhos indefinidos";          break;
    }

    /* Boca */
    switch (boca) {
        case 1: descBoca = "boca costurada";        break;
        case 2: descBoca = "um sorriso gigante";    break;
        case 3: descBoca = "dentes bem pontudos";   break;
        default: descBoca = "boca estranha";        break;
    }

    /* Cor */
    switch (cor) {
        case 1: descCor = "verde"; break;
        case 2: descCor = "roxo";  break;
        case 3: descCor = "cinza"; break;
        default: descCor = "de cor indefinida"; break;
    }

    printf("\n=====================================\n");
    printf("        RETRATO DO SEU MONSTRO\n");
    printf("=====================================\n\n");

    printf("Nome do monstro: %s %s\n", nomeFamilia, nomeTipo);
    printf("Descricao:\n");
    printf("- Possui %s;\n", descCabeca);
    printf("- Tem %s;\n", descOlhos);
    printf("- Apresenta %s;\n", descBoca);
    printf("- Sua cor predominante e %s.\n", descCor);

    printf("\nSeu monstro esta criado no planeta Zuron!\n");

    return 0;
}
