﻿#include <iostream>
#include <string>
#include <vector>

int task1()
{
	std::cout << "Task 1." << std::endl;

	std::cout << "Enter size:";
	int size;
	std::cin >> size;

	std::cout << "Enter the sorted array: " << std::endl;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "Enter target value: ";
	int t;
	std::cin >> t;

	int i = 0;
	for (; i < size; i++)
	{
		if (arr[i] >= t)
		{
			return i;
		}
	}
	return i;

}

std::string task2()
{
	std::cout << "Task 2." << std::endl;
	
	int n;
	std::cout << "Enter the value: ";
	std::cin >> n;
	
	if (n < 1)
	{
		return " ";
	}

	std::string result = "1";

	for (int i = 1; i < n; i++) 
	{
		int count = 1;
		std::string temp = "";
		
		for (int j = 0; j < result.size() - 1; j++) 
		{
			if (result[j] == result[j + 1])
			{
				count++;
			}
			else 
			{
				temp = temp + char(count + '0') + result[j];
				count = 1;
			}
		}
		result = temp + char(count + '0') + result[result.size() - 1];
	}
	return result;
}

int task3()
{
	std::cout << "Task 3." << std::endl;
	
	std::string s;
	std::cout << "Enter the roman number: ";
	std::cin >> s;

	int N = s.length();

	int nums[128];
	nums['I'] = 1;
	nums['V'] = 5;
	nums['X'] = 10;
	nums['L'] = 50;
	nums['C'] = 100;
	nums['D'] = 500;
	nums['M'] = 1000;
	
	int result = 0;
	
	for (int i = 0; i < N; ++i)
	{
		if (i + 1 < N && nums[s[i + 1]] > nums[s[i]])
		{
			result -= nums[s[i]];
		}
		else
		{
			result += nums[s[i]];
		}
	}
	return result;
}

std::string task4()
{
	std::cout << "Task 4." << std::endl;
	
	int numb;
	std::cout << "Enter the value: ";
	std::cin >> numb;
	
	std::vector<int> d{ 1 };
	if (numb == 0)
		return "1";
	for (int i = 0; i < numb; i++)
	{
		d.push_back((long)d[i] * (long)(numb - i) / (i + 1));
	}
	std::string temp;
	
	for (int i = 0; i < d.size(); i++)
	{
		temp.push_back(d[i] + 48);
	}
	return temp;
}

int main()
{

	std::cout << task1() << std::endl;

	std::cout << task2() << std::endl;

	std::cout << task3() << std::endl;

	std::cout << task4() << std::endl;
}