#pragma once
#include <stdio.h>

// Implement the following functions.
double vector1[3] = { 0 }, vector2[3] = { 0 };
void parse(char* str, float* a, float* b, float* c, float* d, float* e, float* f) {
    sscanf(str, "(%lf,%lf,%lf),(%lf,%lf,%lf)", &vector1[0], &vector1[1], &vector1[2], &vector2[0], &vector2[1], &vector2[2]);
}

void calc_print(int i, float a, float b, float c, float d, float e, float f) {
    printf("Case %d:\n", i + 1);
    printf("  Addition: (%.2f,%.2f,%.2f)\n", vector1[0] + vector2[0], vector1[1] + vector2[1], vector1[2] + vector2[2]);
    printf("  Subtraction: (%.2f,%.2f,%.2f)\n", vector1[0] - vector2[0], vector1[1] - vector2[1], vector1[2] - vector2[2]);
    printf("  Dot: %.2f\n", vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2]);
}