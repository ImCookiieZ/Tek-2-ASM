#include <fcntl.h>
#include <stdio.h>
#include "tests.h"
int main(int ac, char **av)
{
    int passed = 0;
    int tests = 0;
    int (*test[31])() = {&test1, &test2, &test3, &test4, &test5, &test6,
                         &test7, &test8, &test9, &test10, &test11, &test12,
                         &test13, &test14, &test15, &test16, &test17,
                         &test18, &test19, &test20, &test21, &test22,
                         &test23, &test24, &test25, &test26, &test27,
                         &test28, &test29, &test30, &test31};
    for (int i = 0; i < 31; i++)
    {
        if (test[i]() == 0)
        {
            passed++;
            printf("\n");
            fprintf(stderr, "test nb %i : SUCCESS\n", i);
        }
        else
            fprintf(stderr, "test nb %i : FAILED\n", i);
        tests++;
    }

    fprintf(stderr, "%i from %i successed\n", passed, tests);

    printf("\n\nshould write:\nused writet\nwrote:\n");
//    mywrite(1, "used writet uhuasdf", 11);
    printf("\n\nshould write:\nhuhu\nwrote:\n");
    //  myputstr("huhu\n");
    char *te = strdup("ich werd gross 723");
    printf("ich werd gross -> %s\n", mytoupper(te));
    printf("and lower again : %s\n", mytolower(te));
    printf("C -> %c\n", mytolowerchar('C'));
    printf("l -> %c\n", mytoupperchar('l'));
}