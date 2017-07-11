#include "DLL.h"

MapElem::MapElem()
{
}

MapElem::MapElem(const int & key, const Student & value)
{
	this->key = key;
	this->value = value;
}

MapElem::~MapElem()
{
}

DLLNode::DLLNode()
{
	this->next = NULL;
	this->prev = NULL;
}

DLLNode::~DLLNode()
{
	delete this->next;
	delete this->prev;
}

void DLLNode::setNext(DLLNode * next)
{
	this->next = next;
}

void DLLNode::setPrev(DLLNode * prev)
{
	this->prev = prev;
}

void DLLNode::setInfo(const MapElem & info)
{
	this->info = info;
}
