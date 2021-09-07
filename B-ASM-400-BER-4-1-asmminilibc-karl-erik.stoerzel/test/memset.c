/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** memset.c
*/

#include "../tests.h"

int test5()
{
    int ret = 0;
    printf("simple memset 3");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemset(my, ' ', 3);
    memset(real, ' ', 3);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(my);
    free(real);
    return ret;
}

int test6()
{
    int ret = 0;
    printf("memset too big  ");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemset(my, ' ', 5);
    memset(real, ' ', 5);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(my);
    free(real);
    return ret;
}