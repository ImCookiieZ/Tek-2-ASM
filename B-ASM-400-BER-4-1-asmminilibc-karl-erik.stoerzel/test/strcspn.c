/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** strcspn.c
*/

#include "../tests.h"

int test19()
{
    int ret = 0;
    printf("strcspn found");
    char *str1 = strdup("ich bin ein \12 te \12\34\72 hulo\n");
    char *str2 = strdup("\12 ihcbnet");

    size_t real = strcspn(str1, str2);
    size_t my = mystrcspn(str1, str2);

    if (real != my)
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test20()
{
    int ret = 0;
    printf("strcspn found");
    char *str1 = strdup("ich bin ein \12 te \12\34\72 hulo\n");
    char *str2 = strdup("\12 ihcbnet");

    size_t real = strcspn(str1, str2);
    size_t my = mystrcspn(str1, str2);

    if (real != my)
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test21()
{
    int ret = 0;
    printf("strlen found");
    char *str1 = strdup("ich bin ein \12 te \12\34\72 hulo\n");

    size_t real = strlen(str1);
    size_t my = mystrlen(str1);

    if (real != my)
        ret = 84;
    free(str1);
    return ret;
}

int test22()
{
    int ret = 0;
    printf("strlen empty");
    char *str1 = strdup("");

    size_t real = strlen(str1);
    size_t my = mystrlen(str1);

    if (real != my)
        ret = 84;
    free(str1);
    return ret;
}