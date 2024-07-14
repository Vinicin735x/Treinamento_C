int main()
{
    char nota = 'A';
    switch(nota){
    case 'A' :
        printf("Excelente!");
        break;
    case 'B' :
        printf("Muito bem!");
        break;
    case 'C' :
        printf("Essa foi por pouco!");
        break;
    case 'D' :
        printf("Você precisa estudar mais!");
        break;
    case 'E' :
        printf("Te espero ano que vem!");
        break;
    default :
        printf("Nota inválida");
    }
    return 0;
}