#include "header.h"
int main()
{
    int rows, cols;
    char ch;
    printf("Enter number of task: ");
    while ((ch = getchar()))
    {
        printf("Enter row's quantity: ");
        scanf("%d", &rows);
        printf("Enter cols's quantity: ");
        scanf("%d", &cols);
        getchar();
        int** array = (int**)malloc(rows * sizeof(int*));
        for (int i = 0; i < rows; ++i)
            array[i] = (int*)malloc(cols * sizeof(int));
        switch (ch)
        {
            case '1': randomize(array, rows, cols);
                      output(array, rows, cols);
                      clean(array, rows);
                      printf("Enter number of task: ");
                      break;
            case '2': randomize(array, rows, cols);
                      output(array, rows, cols);
                      transposing(array, rows, cols);
                      output(array, rows, cols);
                      clean(array, rows);
                      printf("Enter number of task: ");
                      break;
            case '3': printf("Enter number of cols of seconds matrix: ");
                      int cols2;
                      scanf("%d", &cols2);
                      getchar();
                      randomize(array, rows, cols);
                      output(array, rows, cols);
                      multiplication(array, rows, cols, cols2);
                      clean(array, rows);
                      printf("Enter number of task: ");
                      break;
            case '4': printf("Enter lenght of string: ");
                      int lenght;
                      scanf("%d", &lenght);
                      printf("Enter number of starting simbol: ");
                      int start;
                      scanf("%d", &start);
                      printf("Enetr lenght of string, u want to copy: ");
                      int lenCopy;
                      scanf("%d", &lenCopy);
                      getchar();
                      char* string;
                      createLine(&string, lenght);
                      outLine(string);
                      char* copiedString;
                      copyString(string, &copiedString, start, lenCopy);
                      outLine(copiedString);
                      free(string);
                      free(copiedString);
                      printf("Enter number of task: ");
                      break;
            case '5': randomize(array, rows, cols);
                      output(array, rows, cols);
                      int ans = repetitive(*array, cols);
                      printf("Your element is: %d ", ans);
                      getchar();
                      printf("Enter number of task: ");
            case '6': randomizeZero(array, rows, cols);
                      output(array, rows, cols);
                      int zero = zeroLine(*array, cols);
                      int len = zero % 1000;
                      int startel = zero / 1000;
                      printf("The beginning of sequence is: %d and had %d elements", startel, len);
                      getchar();
                      printf("Enter number of task: ");
            default:  while ((ch = getchar()) != '\n')
                          continue;
                      free(array);
                      printf("Enter correct number of task: ");
                      break;
        }
    }
}
