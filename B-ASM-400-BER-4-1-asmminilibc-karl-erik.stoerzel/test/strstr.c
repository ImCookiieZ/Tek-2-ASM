/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** strstr.c
*/

#include "../tests.h"

int test17()
{
    int ret = 0;
    printf("strstr found\t");
    char *str1 = strdup("ich bin \42 tder main \42 test \n");
    char *str2 = strdup(" \42 te");

    char *real = strstr(str2, str1);
    char *my = mystrstr(str2, str1);
    if (my != real)
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}

int test18()
{
    int ret = 0;
    printf("strstr not found\t");
    char *str1 = strdup("ich bin \42 tder main \42 test \n");
    char *str2 = strdup(" \42 ter");

    char *real = strstr(str2, str1);
    char *my = mystrstr(str2, str1);
    if (my != real)
        ret = 84;
    free(str1);
    free(str2);
    return ret;
}