#include "ADTSortedMap.h"
#include <exception>

using namespace std;

SortedMap::SortedMap()
{
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

SortedMap::~SortedMap()
{
	delete this->head;
	delete this->tail;
}

void SortedMap::add(const int & key, const Student & value)
{
	DLLNode* find = this->search(key);
	if (find != NULL)
		throw exception("The student with ID %d is already registered in the database!");

}

void SortedMap::remove(const int & key)
{
}

DLLNode* SortedMap::search(const int & key)
{
	DLLNode* currentNode = this->head;
	bool found = false;
	while (currentNode != NULL && found == false) {
		if (currentNode->getInfo().getKey() == key)
			found = true;
		else
			currentNode = currentNode->getNext();
	}

	if (found)
		return currentNode;
	else
		return NULL;
}
