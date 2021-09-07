/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** strchr.c
*/

#include "../tests.h"

int test11()
{
    int ret = 0;
    printf("strchr test");
    char *str = strdup("testlol huhu asdf");
    char *real = strchr(str, ' ');
    char *my = mystrchr(str, ' ');

    if (my != real)
        ret = 84;
    free(str);
    return ret;
}


int test12()
{
    int ret = 0;
    printf("rindex test empty string");
    char *str = strdup("");
    char *real = strchr(str, ' ');
    char *my = mystrchr(str, ' ');

    if (real != my)
        ret = 84;
    free(str);
    return ret;
}