// 2022_11_13_Ciclos_Anidados_P009.cpp
// Fernando Patiño
// Contador interno hasta 10 y contador externo hasta 10
//

#include <iostream>
#include <Windows.h>

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0;  j <= 10;  j++)
		{
			std::cout << "[" << i << "]" << "[" << j << "]" << std::endl;
			Sleep(777);
		}
	}
}

