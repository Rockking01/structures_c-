// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "List.h"
#include "ArrayList.h"
#include "StaticArrayList.h"
#include "DynamicArrayList.h"
#include <iostream>

int main()
{
    std::cout << "Hello TDA!\n"; 

	try
	{
		//ArrayList<int>* integerList = new StaticArrayList<int>(5);
		ArrayList<int>* integerList_ = new DynamicArrayList<int>(5);
		ArrayList<float>* integerList = new DynamicArrayList<float>(5);

		//Probar el adicionar
		integerList->add(new float(1.0));
		integerList->add(new float(2.0));
		integerList->add(new float(3.0));
		integerList->add(new float(4.0));
		integerList->add(new float(5.0));
		for (int i = 0; i < integerList->getCurrentAmount(); i++)
		{
			cout << (*integerList->getElement(i)) << " ";
		}
		cout << endl;

		integerList->add(new float(6.0));
		for (int i = 0; i < integerList->getCurrentAmount(); i++)
		{
			cout << (*integerList->getElement(i)) << " ";
		}
		cout << endl;


		//Probar el insertar
		/*integerList->add(new int(1));
		integerList->add(new int(2));
		integerList->add(new int(4));
		integerList->add(new int(5));		
		for (int i = 0; i < integerList->getCurrentAmount(); i++)
		{
			cout << (*integerList->getElement(i)) << " ";
		}
		cout << endl;
		
		integerList->insert(new int(3), 2);		
		for (int i = 0; i < integerList->getCurrentAmount(); i++)
		{
			cout << (*integerList->getElement(i)) << " ";
		}
		cout << endl;

		integerList->insert(new int(6), 4);
		for (int i = 0; i < integerList->getCurrentAmount(); i++)
		{
			cout << (*integerList->getElement(i)) << " ";
		}
		cout << endl;*/

		
		delete integerList;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
