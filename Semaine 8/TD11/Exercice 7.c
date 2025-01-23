int isPuissance(int a, int b)
{
    if (a == 1)
        return 1;
    else if (a == 0)
        return 0;
    else if (a % b == 0)
        return isPuissance(a/b, b);
    else
        return 0;
}

int main()
{
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%i", &a);
    printf("Enter a power: ");
    scanf("%i", &b);
    
    if (isPuissance(a, b))
        printf("%i is a power of %i.\n", a, b);
    else
        printf("%i is not a power of %i.\n", a, b);
    return 0;
}