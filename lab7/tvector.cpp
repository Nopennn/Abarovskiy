//TVECTOR.CPP
#include "tvector.h"
#include <iostream>
#include <cstring>

template<typename T>
TVector<T>::TVector()
{
	vals = NULL;
	len = 0;
	rLen = 0;
}

template<typename T>
TVector<T>::TVector(const TVector<T> & other)
{
	len = other.len;
	rLen = other.rLen;
	vals = (std::shared_ptr<T>*)malloc(sizeof(std::shared_ptr<T>)*len);
	memcpy((void*)vals, (void*)other.vals, sizeof(std::shared_ptr<T>)*len);
}

template<typename T>
void TVector<T>::Erase(int pos)
{
	if(len == 1)
	{
		Clear();
		return;
	}
	vals[pos] = NULL;
	memmove((void*)&(vals[pos]),(void*)&(vals[pos+1]),sizeof(std::shared_ptr<T>)*(len-pos-1));
	len--;
	if(len==rLen>>1)
		resize(len);
}

template<typename T>
void TVector<T>::InsertLast(const std::shared_ptr<T> t)
{
	if(rLen)
	{
		if(len>=rLen)
		{
			rLen<<=1;
			resize(rLen);
		}
	}
	else
	{
		rLen=1;
		resize(rLen);
	}
	vals[len] = t;
	len++;
}

template<typename T>
void TVector<T>::RemoveLast()
{
	Erase(len-1);
}

template<typename T>
const std::shared_ptr<T>& TVector<T>::Last()
{
	return vals[len-1];
}

template<typename T>
std::shared_ptr<T>& TVector<T>::operator[](const size_t idx)
{
	return vals[idx];
}

template<typename T>
bool TVector<T>::Empty()
{
	return len == 0;
}

template<typename T>
size_t TVector<T>::Length()
{
	return len;
}

template<typename T>
void TVector<T>::Clear()
{
	if(!Empty())
	{
		for(int i=0;i<len;i++)
			vals[i]=NULL;
		free(vals);
		vals = NULL;
		len = 0;
		rLen = 0;
	}
}

template<typename T>
void TVector<T>::resize(int newsize)
{
	vals = (std::shared_ptr<T>*)realloc((void*)vals, sizeof(std::shared_ptr<T>)*newsize);
}

template<typename T>
TVector<T>::~TVector()
{
	Clear();
}
