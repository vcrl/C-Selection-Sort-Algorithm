#include <stdio.h>

void sort(int list[]);
const int lenlist = 5;

int main(int argc, char* argv[])
{
    int list[] = {3, 1, 2, 5, 4};
    sort(list);
    for (int i = 0; i < lenlist; i++)
    {
        printf("%i ", list[i]);
    }
    return 0;
}

void sort(int list[])
{   
    // 3 1 2
    // i
    //   j     i+1
    // if j < i 
    // smaller = j;
    // if smaller != i
    // 1 3 2
    // 

    for (int i = 0; i < lenlist - 1; i++)
    {
        int smaller = i;
        for (int j = i + 1; j < lenlist; j++)
        {
            if (list[j] < list[smaller])
            {
                smaller = j;
            }
        }
        printf("Smaller: %i\n", smaller);
        if (smaller != i)
        {
            int swap = list[i];
            list[i] = list[smaller];
            list[smaller] = swap;
        }
    }
}