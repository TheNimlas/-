#include <iostream>
using namespace std;

int main()
{
    //�������� ��������� �� ������ ���������
    int const size_mas = 4;
    //������ �������
    int mas_1[size_mas]{ 1, 2, 3, 4 };
    int mas_copy[size_mas];
    int help;
    //����������� ������� � ������.
    for (int index = 0; index < size_mas; index++)
    {
        help = mas_1[index];
        mas_copy[index] = help;
    }
    //����� ����������� �������
    for (int index = 0; index < size_mas; index++)
    {
        cout << mas_copy[index] << " ";
    }
}
