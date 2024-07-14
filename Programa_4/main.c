int max(int num1, int num2, int num3){
    int resultado;
    if(num1 >= num2 && num1 >= num3){
        resultado = num1;
    } else if(num2 >= num1 && num2 >= num3){
        resultado = num2;
    } else {
        resultado = num3;
    }
    return resultado;
}
int main()
{
    printf("%d", max(4, 1, 70));

    return 0;
}