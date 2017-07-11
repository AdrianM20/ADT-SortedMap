#pragma once
#include "Student.h"

class MapElem
{
private:
	int key;
	Student value;

public:
	MapElem();

	MapElem(const int& key, const Student& value);

	~MapElem();

	int getKey() const { return this->key; }
	Student getValue() const { return this->value; }
};

class DLLNode
{
private:
	DLLNode* next;
	DLLNode* prev;
	MapElem info;

public:
	DLLNode();
	~DLLNode();

	DLLNode* getNext() const { return this->next; }
	DLLNode* getPrev() const { return this->prev; }
	MapElem getInfo() const { return this->info; }

	void setNext(DLLNode* next);
	void setPrev(DLLNode* prev);
	void setInfo(const MapElem& info);
};