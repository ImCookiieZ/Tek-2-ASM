/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** memcpy.c
*/

#include "../tests.h"

int test1()
{
    int ret = 0;
    printf("simple memcpy 3");
    char *start = strdup("ich bin ein test \162 lol\n");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemcpy(my, start, 3);
    memcpy(real, start, 3);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(start);
    free(my);
    free(real);
    return ret;
}


int test2()
{
    int ret = 0;
    printf("simple memcpy 0");
    char *start = strdup("ich bin ein test \162 lol\n");

    char *my = malloc(4);
    char *real = malloc(4);

    memset(my, 0, 4);
    memset(real, 0, 4);
    mymemcpy(my, start, 0);
    memcpy(real, start, 0);
    if (strcmp(my, real) != 0)
        ret = 84;
    free(start);
    free(my);
    free(real);
    return ret;}