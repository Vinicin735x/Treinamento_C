int main()
{
    char cores [20];
    char substantivo[20];
    char celebridadeV [20];
    char celebridadeC [20];

    printf("Digite uma cor: ");
    scanf("%s", &cores);
    printf("Digite um substantivo: ");
    scanf("%s", &substantivo);
    printf("Digite uma celebridade: ");
    scanf("%s%s", &celebridadeV, celebridadeC);
    /* Foi necessário usar duas variáveis de celebridades, pois se fosse apenas uma, não iria pegar o sobrenome da pessoa*/
    printf("Rosas são %s\n", cores);
    printf("%s são azuis\n", substantivo);
    printf("Eu te amo %s%s\n", celebridadeV,celebridadeC);

    return 0;
}