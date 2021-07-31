#include <stdio.h>

int main()
    {
        char valor_inicial[] = "Matheuz";
        char buffer[7] ;
        scanf("%s", &buffer);
        printf("       TRANSBORDOU: %s\n", valor_inicial);
        printf("BUFFER(7bytes): %s\n", buffer);

        return 0;
    }