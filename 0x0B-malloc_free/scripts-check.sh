#!/bin/bash
echo "+++++++++ Betty Linter +++++++++"
betty ./$1.c

echo "++++++++++++++ GCC +++++++++++++"

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-create_array.c 1-strdup.c 3-alloc_grid.c 4-free_grid.c "${1:0:1}"-main.c -o "${1:0:1}"-main

echo "++++++++++++ Run Code +++++++++++"
./"${1:0:1}"-main