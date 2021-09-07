/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** strcasecmp.c
*/

#include "../tests.h"

int test9()
{
    int ret = 0;
    printf("strcasecmp res 0");
    char *str1 = strdup("Hallo Ich biN 3der *lost KarlS\n");
    char *str2 = strdup("hall= ICh biN 3dEr *lost kaRlS\n");

    if (strcasecmp(str1, str2) != mystrcasecmp(str1, str2))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test10()
{
    int ret = 0;
    printf("strcasecmp res not 0");
    char *str1 = strdup("Hallo Ich biN 3der *lost KarlS\n");
    char *str2 = strdup("hall= ICh biN 3dEr *ost kaRlS\n");

    if (strcasecmp(str1, str2) != mystrcasecmp(str1, str2))
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}