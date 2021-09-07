/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** rindex.c
*/

#include "../tests.h"

int test7()
{
    int ret = 0;
    printf("rindex test");
    char *str = strdup("testlol huhu asdf");
    char *real = rindex(str, ' ');
    char *my = myrindex(str, ' ');

    if (my != real)
        ret = 84;
    free(str);
    return ret;
}


int test8()
{
    int ret = 0;
    printf("rindex test empty string");
    char *str = strdup("");
    char *real = rindex(str, ' ');
    char *my = myrindex(str, ' ');

    if (real != my)
        ret = 84;
    free(str);
    return ret;
}