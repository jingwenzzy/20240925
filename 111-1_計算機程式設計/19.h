#pragma once
#include <stdio.h>

// Implement the following functions.

void add(float x, float y, float* result)
{
	*result = x + y;
}

void subtract(float x, float y, float* result)
{
	*result = x - y;
}

void multiply(float x, float y, float* result)
{
	*result = x * y;
}

void divide(float x, float y, float* result)
{
	*result = x / y;
}

void print_result(float x, float y, char op, float result)
{
	printf("%.2f%c%.2f=%.2f", x, op, y, result);
}