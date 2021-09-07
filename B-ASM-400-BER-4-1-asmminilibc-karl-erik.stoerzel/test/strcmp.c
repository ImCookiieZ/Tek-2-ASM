/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** strcmp.c
*/

#include "../tests.h"

int test13()
{
    int ret = 0;
    printf("strcmp res 0");
    char *str1 = strdup("Hallo Ich biN 3der *lost KarlS\n");
    char *str2 = strdup("Hallo Ich biN 3der *lost KarlS\n");

    if (strcmp(str1, str2) != mystrcmp(str1, str2))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test14()
{
    int ret = 0;
    printf("strcmp res not 0");
    char *str1 = strdup("Hallo Ich biN 3der *lost KarlS\n");
    char *str2 = strdup("Hallo Ich biN 3der *ost KarlS\n");

    if (strcmp(str1, str2) != mystrcmp(str1, str2))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test23()
{
    int ret = 0;
    printf("strncmp res 0");
    char *str1 = strdup("Hallo Ich biN 3der lost KarlS\n");
    char *str2 = strdup("Hallo Ich biN 3der *lot KarlS\n");

    if (strncmp(str1, str2, 18) != mystrncmp(str1, str2, 18))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test24()
{
    int ret = 0;
    printf("strcmp res not 0");
    char *str1 = strdup("Hallo Ic biN 3der *lost KarlS\n");
    char *str2 = strdup("Hallo Ich biN 3der *ost KarlS\n");

    if (strncmp(str1, str2, 18) != mystrncmp(str1, str2, 18))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}