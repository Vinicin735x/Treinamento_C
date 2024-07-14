int main()
{
    int numero_secreto = 5;
    int guess;
    int tentativas = 0;
    int limite_tentativas = 3;
    int palpites = 0;

    while(guess != numero_secreto && palpites == 0){
        if(tentativas < limite_tentativas){
            printf("Digite um número: ");
            scanf("%d", &guess);
            tentativas++;
        } else {
            palpites = 1;
        }
    }
    if(palpites == 1){
        printf("Acabaram os palpites");
    } else {
        printf("Você acertou!");
    }
    return 0;
    }