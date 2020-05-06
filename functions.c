#include "header.h"
void randomize(int** array, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            array[i][j] = ((rand() - rand()) % 10);
     srand(time(NULL));
}

void randomizeZero(int** array, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            array[i][j] = ((rand() - rand()) % 2);
     srand(time(NULL));
}

void transposing(int** array, int rows, int cols)
{
    int temp;
    printf("\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            if (i == j)
                break;
            temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
}


void output(int** array, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            printf("%5d", array[i][j]);
        printf("\n");
    }
}

void clean(int** array, int rows)
{
    for (int i = 0; i < rows; ++i)
        free(array[i]);
    free(array);
}



void multiplication(int** array, int rows, int cols, int cols2)
{
    int rows2 = cols;
    int** matrix2 = (int**)malloc(rows2 * sizeof(int*));
    for (int i = 0; i < rows2; ++i)
        matrix2[i] = (int*)malloc(cols2 * sizeof(int*));
    randomize(matrix2, rows2, cols2);
    printf("\n");
    output(matrix2, rows2, cols2);
    int** result = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i)
        result[i] = (int*)malloc(cols2 * sizeof(int*));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols; ++k)
                result[i][j] += array[i][k] * matrix2[k][j];
        }
    printf("\n");
    output(result, rows, cols2);
    clean(matrix2, rows2);
    clean(result, rows);
}

void createLine(char** string, int lenght)
{
    lenght++;
    srand(time(NULL));
    *string = (char*)malloc(lenght * sizeof(char));
    for(int i = 0; i <= lenght; ++i)
    {
        (*string)[i] = rand() % 10 + '0';
    }
    (*string)[lenght - 1] = '\0';
}


void copyString(char* string, char** copiedString, int start, int lenCopy)
{
    int count = 0;
    *copiedString = (char*)malloc((lenCopy + 1) * sizeof(char));
    for (int i = start; i < start + lenCopy && string[i] != '\0'; ++i)
    {
        (*copiedString)[count] = string[i];
        count++;
    }
    (*copiedString)[count] = '\0';
}


void outLine(char* string)
{
    for(int i = 0; string[i] != '\0'; ++i)
    {
        printf("%c ", string[i]);
    }
    printf("\n");
}

//аауйуалатлйтащл2тат   тдатт   щоат2ощтуат2тат23тащвт23втт3вт3твшт3штвш3тштцвтлтйцтвш2тйвщт2щшлутвщш2уиавг2оуиатгщо2дуатг2щуиат2вщоудиатв2щуаивт2г3щоиавт2щ3ивт2ш3щливт2щш3ивт23шщвит3щвит302шщвит103а 23швтш23звит32шзвит23швттвш3т3штв3твштвшш3твт3штвш3твтшт3швтш3твш3швтш3втш3твш3твш3швттвш3тшв штв3т3шшв3ш тш3твшт3в3швтш3в3
 int repetitive(int* array, int cols)
{
    int count = 0, number = 0, tmp;
    for(int i = 0; i < cols; i++)
    {
        tmp = 0;
        for(int j = i; j < cols; j++)
        {
            if(array[i] == array[j]) tmp++;
        }
        if(tmp > count)
        {
            count = tmp;
            number = array[i];
        }
    }
    return number;
}

int zeroLine(int* array, int cols)
{
    int ans = 0;
    int tmp, start = 0;
    for(int i = 0; i < cols; i++)
    {
        if (array[i] == 0)
        {
            tmp = 0;
            for (int j = i; j < cols && array[j] == 0; j++)
                tmp++;
            if(tmp > ans)
            {
                start = i;
                ans = tmp;
            }
        }
    }
    start = start * 1000 + ans;
    return start;
}
