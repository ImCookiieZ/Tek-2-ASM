/*
** EPITECH PROJECT, 2021
** B-ASM-400-BER-4-1-asmminilibc-karl-erik.stoerzel
** File description:
** blender.c
*/
#include "tests.h"

int main(int ac, char **av)
{
    int passed = 0;
    int failed = 0;
    int (*tests[24])() = {&test1, &test2, &test3, &test4, &test5, &test6,
                          &test7, &test8, &test9, &test10, &test11,
                          &test12, &test13, &test14, &test15, &test16,
                          &test17, &test18, &test19, &test20, &test21,
                          &test22, &test23, &test24};
    for (int i = 0; i < 24; i++)
    {
        if ((tests[i])() != 0)
        {
            printf("\t%i: FAILED\n", i);
            failed++;
        }
        else
        {
            printf("\t%i: SUCCESS\n", i);
            passed++;
        }
    }
    printf("\n\npassed %i from 24 tests\n", passed);
    printf("failed %i from 24 tests\n", failed);
}