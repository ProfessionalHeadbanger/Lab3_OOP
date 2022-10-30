#include "Calculator.h"
#include <Windows.h>
#include <limits>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "�����������  V\"�������� ����� �� �����\"" << std::endl;
	std::cout << "��� ��������� �������� � ���� \"����� ����� ���������\" \"������ ��������\" \"������ ����� ���������\"" << std::endl;
	std::cout << "����� � ������ ����� ��������� ������������ ����������� �������, ������� ��������: +, -, *, / " << std::endl << std::endl;

	bool flag = true;
	while (flag)
	{
		std::string input;
		std::cout << "������� ���������: " << std::endl;
		getline(std::cin >> std::ws, input);
		Calculator calc(input);
		std::cout << " = " << calc << std::endl;
		char choice;
		bool label = true;
		while (label)
		{
			std::cout << "������� ������ ������ ��� �����? 1 - ������, 2 - ����� ";
			std::cin >> choice;
			switch (choice)
			{
			default:
				std::cout << "�������� ����!" << std::endl;
				label = true;
				break;
			case '1':
				flag = true;
				label = false;
				break;
			case '2':
				flag = false;
				label = false;
				break;
			}
		}
	}
}