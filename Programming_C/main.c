int main()
{
    /* the meaning of [] is to store a bunch of a characters */
    /* we use %s as the same way like %d, s is for variable char*/
    char characterName[] = "Vinícius";
    int characterAge = 19;

    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 30;
    printf("but did not like being %d\n", characterAge);
    return 0;
}