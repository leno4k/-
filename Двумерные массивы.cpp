#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int a[100][100], n, m; //n - кол-во строк, m - кол-во столбцов
    cout << "Введите количесво строк и столбцов для двумерного массива: ";
    cin >> n >> m;

    cout << "Заполненный массив a: " << endl;
    for (int i=0; i<n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = (rand() % 11) - 5;
            cout << "\t" << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}