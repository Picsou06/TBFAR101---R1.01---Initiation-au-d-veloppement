int nbChiffres(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + nbChiffres(n / 10);
}