/*
Лабораторная работа «Сортировка массива»

Задание

1.      В массиве А(n) отсортировать элементы массива, стоящие на нечетных местах, в порядке возрастания.
#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел arr, a2, a3, …, an:\n";
	srand(time(0));
	int a = -100;
	int b = 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	cout << endl;
	cout << "Элементы массива, стоящие на нечетных местах, в порядке возрастания:\n";
	int tmp;
	for (int i = 0; i < n - 1; i = i + 2)
	{
		bool q = 0;
		for (int j = 0; j < n - 1 - i; j = j + 2)
		{
			if (arr[j] > arr[j + 2])
			{
				tmp = arr[j];
				arr[j] = arr[j + 2];
				arr[j + 2] = tmp;
				q = 1;
			}
		}
		if (q == 0)
			break;
	}
	for (int i = 0; i < n; i = i + 2)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
2.      Дана последовательность чисел a1, a2, a3, …, an.Вывести ее на экран в порядке убывания. (вывод производить в одну строку)
#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int a1[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		a1[i] = a + rand() % (b - a + 1);
		cout << a1[i] << '\t';
	}
	cout << endl;
	sort(a1, a1 + n, greater<int>());
	cout << "Вывод на экран в порядке убывания:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a1[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
3.      В массиве A(n) расставить все элементы, начиная с k - го, в порядке убывания.Вывести на экран новый массив.
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов массива A(n): ";
	cin >> n;
	cout << "Массив A(n):\n";
	srand(time(0));
	int a = 1;
	int b = 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	cout << endl;
	cout << "Введите номер элемента, с которого будет идти убывание:\n";
	int k;
	cin >> k;
	int tmp;
	for (int i = k - 1; i < n - 1; i++)
	{
		bool fl = 0;
		for (int j = k - 1; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				fl = 1;
			}
		}
		if (fl == 0)
			break;
	}
	cout << "Элементы массива, в порядке убывания:\n";
	for (int i = k - 1; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
4.      Дана последовательность действительных чисел a1, a2, a3, …, an.Выяснить, будет ли она возрастающей.
#include <iostream>
#include <windows.h>
#include <ctime>
//Числовая последовательность называется возрастающей, если в ней каждый следующий член больше предыдущего.
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	cout << endl;
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > arr[i - 1]) count++;
	if (count == n) cout << "Последовательность возрастающая";
	else cout << "Последовательность не возрастающая";
	cout << endl;
	return 0;
}
*/
/*
5.      Все четные элементы массива A(n) расположить в порядке убывания.
#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int a1[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		a1[i] = a + rand() % (b - a + 1);
		cout << a1[i] << '\t';
	}
	cout << endl;
	sort(a1, a1 + n, greater<int>());
	cout << "Четные элементы массива в порядке убывания:\n";
	for (int i = 0; i < n; i++)
	{
		if (a1[i] % 2 == 0)
			cout << a1[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
6.      Дана последовательность чисел, среди которых имеется нуль.Вывести на экран все числа до нуля(нуль не включать) в порядке убывания.
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	int arr2[size]{};
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			arr2[i] = arr[i];
	}
	int m = 0;
	for (int i = 0; i < n; i++)
		if (arr2[i] != 0) arr2[m++] = arr2[i];
	n = m;
	int tmp;
	for (int i = 0; i < n - 1; i++)
	{
		bool fl = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr2[j] < arr2[j + 1])
			{
				tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
				fl = 1;
			}
		}
		if (fl == 0)
			break;
	}
	cout << "\nВыводим все числа до нуля (нуль не включая) в порядке убывания: \n";
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
7.      В массиве А(n) отсортировать элементы массива, стоящие на четных местах, в порядке убывания.
#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
//В массиве А(n) отсортировать элементы массива, стоящие на четных местах, в порядке убывания.
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел arr, a2, a3, …, an:\n";
	srand(time(0));
	int a = -100;
	int b = 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	cout << endl;
	cout << "Элементы массива, стоящие на четных местах, в порядке убывания:\n";
	int tmp;
	for (int i = 1; i < n - 1; i = i + 2)
	{
		bool q = 0;
		for (int j = 1; j < n - 1 - i; j = j + 2)
		{
			if (arr[j] < arr[j + 2])
			{
				tmp = arr[j];
				arr[j] = arr[j + 2];
				arr[j + 2] = tmp;
				q = 1;
			}
		}
		if (q == 0)
			break;
	}
	for (int i = 1; i < n; i = i + 2)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
8.      Дана последовательность чисел a1, a2, a3, …, an.Вывести ее на экран в порядке возрастания. (вывод производить в одну строку)
#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int a1[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		a1[i] = a + rand() % (b - a + 1);
		cout << a1[i] << '\t';
	}
	cout << endl;
	sort(a1, a1 + n);
	cout << "Последовательность чисел a1, a2, a3,…,an, в порядке возрастания:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a1[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
9.      В массиве A(n) расставить все элементы до k - го, в порядке возрастания.Вывести на экран новый массив.
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов массива A(n): ";
	cin >> n;
	cout << "Массив A(n):\n";
	srand(time(0));
	int a = 1;
	int b = 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	cout << endl;
	cout << "Введите номер элемента, до которого будет идти возрастание:\n";
	int k;
	cin >> k;
	int tmp;
	for (int i = 0; i < k - 1; i++)
	{
		bool fl = 0;
		for (int j = 0; j < k - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				fl = 1;
			}
		}
		if (fl == 0)
			break;
	}
	cout << "Элементы до k-го(включительно), в порядке возрастания:\n";
	for (int i = 0; i < k; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
/*
10.  Дана последовательность действительных чисел a1, a2, a3, …, an.Выяснить, будет ли она убывающей.
#include <iostream>
using namespace std;
int main()
{
	int n;
	bool k = true;
	double a, b;
	cout << "n="; cin >> n;
	cout << "Enter " << n << " numbers:\n";
	cin >> a;
	for (int i = 2; i <= n; i++)
	{
		b = a;
		cin >> a;
		if (a >= b) k = false;
	}
	if (k) cout << "YES\n";
	else cout << "N0\n";
	system("pause");
	return 0;
}
*/
/*
11.  Дана последовательность чисел, среди которых имеется нуль.Вывести на экран все числа до нуля(нуль не включать) в порядке возрастания.
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int n;
	int arr[size]{};
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Последовательность чисел a1, a2, a3, …, an:\n";
	srand(time(0));
	int a = -10;
	int b = 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << arr[i] << '\t';
	}
	int arr2[size]{};
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			arr2[i] = arr[i];
	}
	int m = 0;
	for (int i = 0; i < n; i++)
		if (arr2[i] != 0) arr2[m++] = arr2[i];
	n = m;
	int tmp;
	for (int i = 0; i < n - 1; i++)
	{
		bool fl = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
				fl = 1;
			}
		}
		if (fl == 0)
			break;
	}
	cout << "\nВыводим все числа до нуля (нуль не включая) в порядке возрастания: \n";
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << '\t';
	}
	cout << endl;
	return 0;
}
*/
