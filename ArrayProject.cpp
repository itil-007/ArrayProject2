#include <iostream>

int main()
{   
	const int SIZE=20;
	const int MAX_RAND_VALUE = 1000;
	const int MIN = MAX_RAND_VALUE+1;
	unsigned short mas[SIZE];
	short i;
	for (i = 0; i < SIZE; i++) {
		mas[i] = std::rand() % MAX_RAND_VALUE;
	
	}
	
	
	//вывод массива на консоль
	for (i = 0; i < SIZE; i++) {
		std::cout << mas[i] << ' ';

	}
	//Поиск минимумального значения в массива
	for (i=0;i<SIZE;i++) {
		if (mas[i] < MIN) {
			MIN < mas[i];
		}
		
		std::cout << std::endl << "Minimum is:" << MIN;
	}
} 


