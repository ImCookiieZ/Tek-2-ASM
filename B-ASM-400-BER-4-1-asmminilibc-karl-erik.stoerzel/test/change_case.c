/*
** EPITECH PROJECT, 2021
** B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel
** File description:
** change_case.c
*/

#include "../tests.h"

int test25()
{
    if (tolower('C') != mytolowerchar('C'))
        return 84;
    return 0;
}

int test26()
{
    if (tolower('c') != mytolowerchar('c'))
        return 84;
    return 0;
}

int test27()
{
    if (tolower('\n') != mytolowerchar('\n'))
        return 84;
    return 0;
}

int test28()
{
    if (toupper('C') != mytoupperchar('C'))
        return 84;
    return 0;
}

int test29()
{
    if (toupper('c') != mytoupperchar('c'))
        return 84;
    return 0;
}

int test30()
{
    if (toupper('\n') != mytoupperchar('\n'))
        return 84;
    return 0;
}

int test31()
{
    int ret = 0;
    char *test = strdup("i wiLl change6");

    if (strcmp("I WILL CHANGE6", mytoupper(test)) != 0)
        ret = 84;
    free(test);
    return ret;
}

int test32()
{
    int ret = 0;
    char *test = strdup("I WilL CHANGE6");

    if (strcmp("i will change6", mytolower(test) != 0))
        ret = 84;
    free(test);
    return ret;
}