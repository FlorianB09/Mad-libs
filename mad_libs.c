#include <stdio.h>
#include <string.h>

int main() {

    char Nomen[50] = "";
    char Verb[50] = "";
    char Adjektiv1[50] = "";
    char Adjektiv2[50] = "";
    char Adjektiv3[50] = "";

    printf("Adjektiv 1: ");
    fgets(Adjektiv1, sizeof(Adjektiv1), stdin);
    Adjektiv1[strlen(Adjektiv1) - 1] = '\0';

    printf("Nomen: ");
    fgets(Nomen, sizeof(Nomen), stdin);
    Nomen[strlen(Nomen) - 1] = '\0';          

    printf("Adjektiv 2: ");
    fgets(Adjektiv2, sizeof(Adjektiv2), stdin);
    Adjektiv2[strlen(Adjektiv2) - 1] = '\0';

    printf("Verb: ");
    fgets(Verb, sizeof(Verb), stdin);
    Verb[strlen(Verb) - 1] = '\0';

    printf("Adjektiv 3: ");
    fgets(Adjektiv3, sizeof(Adjektiv3), stdin);
    Adjektiv3[strlen(Adjektiv3) - 1] = '\0';

    printf("\nGestern ging ich in einen %s Wald.\n", Adjektiv1);
    printf("Ich fand ein/en %s.\n", Nomen);
    printf("%s war %s und %s!\n", Nomen, Adjektiv2, Verb);
    printf("Ich war %s!\n", Adjektiv3);

    return 0;
}