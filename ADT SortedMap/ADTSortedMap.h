#pragma once
#include "DLL.h"

class SortedMap
{
private:
	DLLNode* head;
	DLLNode* tail;
	int size;
	int relation(int a, int b) {
		return a < b;
	}

	void insertLast();
	void insertFirst();
	void insertAtPosition();
	void deleteFirst();
	void deleteLast();
	void deleteElement();

public:
	SortedMap();
	~SortedMap();

	void add(const int& key, const Student& value);
	void remove(const int& key);
	DLLNode* search(const int& key);

	int getSize() const { return this->size; }

};