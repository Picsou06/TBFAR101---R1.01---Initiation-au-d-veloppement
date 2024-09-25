#include <stdio.h>
#include <assert.h>

int isPallindrome(char tab[])
{
    int i = 0;
    int j = 0;
    while (tab[j] != '\0')
    {
        j++;
    }
    j--;
    while (i < j)
    {
        if (tab[i] != tab[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char tab[100] = "kayak\0";
    printf("%d\n", isPallindrome(tab));
    assert(isPallindrome("") == 1);
    assert(isPallindrome("nez\0") == 0);
    assert(isPallindrome("12344321\0") == 1);
}