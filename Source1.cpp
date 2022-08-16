#include <iostream>
using namespace std;

int main()
{
    //Создание константы на размер элементов
    int const size_mas = 4;
    //Пример массива
    int mas_1[size_mas]{ 1, 2, 3, 4 };
    int mas_copy[size_mas];
    int help;
    //Копирование массива в другой.
    for (int index = 0; index < size_mas; index++)
    {
        help = mas_1[index];
        mas_copy[index] = help;
    }
    //Вывод полученного массива
    for (int index = 0; index < size_mas; index++)
    {
        cout << mas_copy[index] << " ";
    }
}
