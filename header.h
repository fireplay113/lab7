#ifndef header_h
#define header_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
void randomize(int** array, int rows, int cols);
void output(int** array, int rows, int cols);
void transposing(int** array, int rows, int cols);
void multiplication(int** array, int rows, int cols, int cols2);
void clean(int** array, int rows);
void createLine(char** string, int lenght);
void outLine(char* string);
void copyString(char* string, char** copiedString, int start, int lenCopy);
int repetitive(int* array, int cols);
int zeroLine(int* array, int cols);
void randomizeZero(int** array, int rows, int cols);
#endif
