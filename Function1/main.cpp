#include<iostream>



bool even(int num)
{
	if (num % 2 == 0) return true;
	return false;
}

void print_arr(int arr[], const int length)
{
	for (int i = 0; i < length; i++) std::cout << arr[i] << "\t";
}

void arr_x5(int arr[])
{
	arr[1] *= 5;

}

void positiv_indexes(int arr[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > 0) std::cout <<"index-"<< i << " = " << arr[i] << '\t';
	}
}

long long fuk(int n)

{
	long long z = 1;
	for (int i = 2; i <= n; i++)
		z *= i;
	return z;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	/*
	std::cout << "Enter the number ->";
	std::cin >> n;

	if (even(n)) std::cout << "The number is even.";
	else std::cout << "The number is odd.";
	
	std::cout << "\n\n";
	const int size = 5;
	int arr[size]{ 10,7,20,8,11 };

	std::cout << "Massive:\n";
	print_arr(arr,size);
	std::cout << '\n';
	
	n = 10;
	std::cout << "n= " << n << '\n';
	n = mult_X5(n);
	std::cout << "n= " << n << '\n';

	int my_arr[3]{ 10,20,30 };

	print_arr(my_arr, 3);
	arr_x5(my_arr);
	print_arr(my_arr, 3);

	// Task 1.

	const int size = 5;

	int arr[size]{ 3,4,-1,7,5 };

	print_arr(arr, size);
	std::cout << "\n";
	std::cout << "The positive indexes is - ";
	positiv_indexes(arr, size);
	std::cout << "\n\n";
	*/

	// Task 2.

	std::cout << "Enter the number ->";
	std::cin >> n;
	std::cout << fuk(n);


	return 0;
}



