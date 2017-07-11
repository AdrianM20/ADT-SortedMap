// Entry point in program
// ADT SortedMap - implementation on a doubly linked list with dynamic allocation

#include <iostream>
#include <Windows.h>
#include "ADTSortedMap.h"

using namespace std;

int main()
{
	cout << "Hello, world!" << endl;

	Student s1{ "Adrian","maie2167",7 };
	Student s2{ "Cristi","ncie2158",9 };
	Student s3{ "Maria","bmie2089",9.5 };
	MapElem e1{ 2167,s1 };
	MapElem e2{ 2158,s2 };
	MapElem e3{ 2089,s3 };
	DLLNode* n1 = new DLLNode();
	DLLNode* n2 = new DLLNode();
	n1->setNext(n2);
	n1->setInfo(e1);
	n2->setPrev(n1);
	n2->setInfo(e2);
	cout << e2.getKey() << " | " << e2.getValue().getName() << endl;
	
	system("pause");
	return 0;
}