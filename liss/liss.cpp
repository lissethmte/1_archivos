// liss.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#define MAXSIZE 128



int main()
{
	std::cout << "Leyendo archivo" << std::endl;
	std::ifstream file;
	file.open("datos.txt", std::ifstream:: in);

	if (file.is_open())
	{
		std::cout << "archivo abierto\n";
		char buffer[MAXSIZE];
		while (file.eof())
		{
			file.getline(buffer, MAXSIZE);
			std::cout << buffer << std::endl;

		}


	}

	else
	{
		std::cout << "no se encuentra el archivo\n";
	}


		



 
}


