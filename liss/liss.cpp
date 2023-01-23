
// Manejo de archivos liss

#include <iostream>
#include <fstream>
#define MAXSIZE 128


void ejemploApuntadores()
{
	std::cout << "ejemplo de apuntadores\n";
	int valor = 66;
	int* ref2 = &valor;
	*ref2 = 128;
	printf("valor= %i Mem:%#010x \n", *ref2, ref2);
	std::cout << "valor = " << valor << std::endl;
}



void promedio(float * valor_acum)
{
	*valor_acum += *valor_acum;
}



void acumular (float& a, float b)
{
    a += b;
}
 




int main(int argc, char ** argv)
{   
	float valor = 0;
	int num_valores = 0;
	 
	std::cout << "Leyendo archivo" << std::endl;

	std::ifstream file;
	file.open("datos.txt", std::ifstream:: in);

	if (file.is_open())
	{
		std::cout << "archivo abierto\n";
		char buffer[MAXSIZE];
		while (!file.eof())
		{
			file.getline(buffer, MAXSIZE);
		    acumular(valor, atof (buffer));
			
			std::cout << "Valor acumulado: " << valor << std::endl;
			num_valores++;


		}
		 valor /= num_valores;

		 std::ofstream file_o("datos.txt", std::ofstream::app);
		 file_o << " \npromedio " << valor << std::endl;


	}
	else
	{
		std::cout << "no se encuentra el archivo\n";
	}

	

	/* if (argc <= 1) return 0;
	{

		float suma = 0;
		std::cout << "argc: " << argc << std::endl;
		for (int i = 1; i < argc; i++)
		{
			std::cout << argv[i] << std::endl;
			acumular(suma, atoi(argv[i]));
		}

		float promedio = suma / (argc - 1);
		std::cout << "Promedio  " << promedio << std::endl;
		return 0;

	}
	*/
	
	
	



		



 
}


