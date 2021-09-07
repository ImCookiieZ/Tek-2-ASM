cmake_minimum_required(VERSION 3.16)
project(B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel C)

set(CMAKE_C_STANDARD 99)

add_executable(B_ASM_400_BER_4_1_asmminilibc_karl_erik_stoerzel blender.c main.c
        test/memcpy.c tests.h test/memmove.c test/memset.c test/rindex.c test/strcasecmp.c test/strchr.c test/strcmp.c test/strpbrk.c test/strstr.c test/strcspn.c src/change_case.c)