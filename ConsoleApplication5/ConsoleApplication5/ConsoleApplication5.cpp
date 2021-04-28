#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{

    std::cout << "Input size of matrix: ";
    int N; std::cin >> N;
    int** MAS = new int* [N];
    for (int i = 0; i < N; i++)
        MAS[i] = new int[N];

    int sum = 0; // ��� ����� �������� �����.
    srand(time(NULL));
    std::cout << "Start matrix:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            MAS[i][j] = rand() % 20 - 20; // ��������� ������� ���������� �������,
            std::cout << std::setw(3) << MAS[i][j]; // ������� �� �����,
            if (i == j) sum += MAS[i][j]; // � ������� �����.
        }
        std::cout << std::endl;
    }

    std::cout << "Summa: " << sum << std::endl;
    for (int i = 0; i < N; i++)
        delete[]MAS[i];
    delete[]MAS;
    return 0;
}