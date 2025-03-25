#include "main.h"
#include <stdio.h>

int main(void)
{
    int custom, standard;

 /** cas de base */
    printf("\n=== Cas de base ===\n");
    _printf("Char: %c\n", 'A');
    _printf("String: %s\n", "Hello");
    _printf("Integer: %d\n", 42);

/**Cas avancés */
    printf("\n=== Cas avancés ===\n");
    _printf("Mixed: %c, %s, %d\n", 'B', "Test", 123);

/**Cas limites */
    printf("\n=== Cas limites ===\n");
    _printf("Null string: %s\n", NULL);
    _printf("Negative int: %d\n", -42);

/**Comparaison avec printf natif */
    printf("\n=== Comparaison avec printf ===\n");
    custom = _printf("Custom: %d\n", 42);
    standard = printf("Standard: %d\n", 42);

    if (custom == standard)
        printf("Résultat identique.\n");
    else
        printf("Différence détectée.\n");

    return (0);
}
