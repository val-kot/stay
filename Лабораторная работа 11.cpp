#include <iostream>

static const size_t ROWS = 4;
static const size_t COLS = 5;

static const int matrix[ROWS][COLS] = {
{ 1, 3, 5, 0, 1 },
{ 9, 0, 1, 2, 3 },
{ 5, 2, 6, 2, 6 },
{ 9, 4, 1, 0, 3 }
};

int main()
{
    setlocale(LC_ALL,"Russian");
    int i, j, last;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (matrix[i][j] == 0)
            {
                last = i + 1;
            }
        }
    }
    std::cout << "Последняя строка с нулевым элементом: " << last << '\n';

    return 0;
}
