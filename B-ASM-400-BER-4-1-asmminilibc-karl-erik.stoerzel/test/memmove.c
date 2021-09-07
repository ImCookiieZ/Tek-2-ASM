/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** memmove.c
*/

#include "../tests.h"

int test3()
{
    int ret = 0;
    printf("simple memmove 3");
    char *start = strdup("ich bin ein test \162 lol\n");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemmove(my, start, 3);
    memmove(real, start, 3);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(start);
    free(my);
    free(real);
    return ret;
}

int test4()
{
    int ret = 0;
    printf("simple memmove 0");
    char *start = strdup("ich bin ein test \162 lol\n");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemmove(my, start, 0);
    memmove(real, start, 0);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(start);
    free(my);
    free(real);
    return ret;
}