int main()
{
    int numero_secreto = 5;
    int guess;
    int tentativas = 0;
    int limite_tentativas = 3;
    int palpites = 0;
    int limite_palpites = 2;

    while(guess != numero_secreto && palpites == 0){
        if(tentativas < limite_tentativas){
            printf("Digite um número: ");
            scanf("%d", &guess);
            printf("Restam %d palpites\n", limite_palpites);
            tentativas++;
            limite_palpites = (limite_palpites - 1);
        } else {
            palpites = 1;
        }
    }
    if(palpites == 1){
        printf("acabaram os palpites, você errou");
    } else {
        printf("Você acertou!");
    }
    return 0;
    }
