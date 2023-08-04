#include <stdio.h>

void sort(int list[]);
const int lenlist = 5;

int main(int argc, char* argv[])
{
    int list[] = {3, 1, 2, 5, 4};
    sort(list);
    return 0;
}

void sort(int list[])
{   

    for (int i = 0; i < lenlist - 1; i++)
    {
        int smallest = i;
        // Step 1. Finding the lowest value
        for (int j = i + 1; j < lenlist; j++)
        {
            if (list[j] < list[smallest]) // i + 1 to avoid checking itself
            {
                smallest = j;
            }
        }
        if (smallest != i) // don't swap itself
        {
            int temp = list[i];
            list[i] = list[smallest];
            list[smallest] = temp;
        }
    }

    for (int i = 0; i < lenlist; i++)
    {
        printf("%i", list[i]);
    }
    printf("\n");
}