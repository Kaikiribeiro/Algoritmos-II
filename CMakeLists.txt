cmake_minimum_required(VERSION 4.1)
project(algoritmos2 C)

set(CMAKE_C_STANDARD 99)

add_executable(algoritmos2 main.c
        beecrowd/ex1555.c
        beecrowd/ex1010.c
        beecrowd/ex1006.c
        atividadeMoodle/unidadetres/ex01.c
        atividadeMoodle/unidadetres/ex02.c
        atividadeMoodle/unidadetres/ex03.c
        atividadeMoodle/unidadetres/ex04.c
        atividadeMoodle/unidadetres/ex05.c
        atividadeMoodle/unidadetres/ex06.c
        atividadeMoodle/unidadetres/ex07.c
        atividadeMoodle/unidadetres/ex08.c
        atividadeMoodle/unidadetres/ex10.c
        atividadeMoodle/unidadetres/ex09.c)
add_executable(teste beecrowd/fatorial.c)
