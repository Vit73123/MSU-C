#include <stdio.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");

    printf("Привет, Мир!\n");
    return 0;
}
