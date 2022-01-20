//TVECTOR.H
#ifndef TVECTOR_H
#define TVECTOR_H

#include <iostream>
#include "triangle.h"
#include "rectangle.h"
#include "square.h"
#include "titerator.h"
#include <memory>

template <class T>

class TVector
{
	private:
		void resize(int newsize);
		std::shared_ptr<T> *vals;
		int len;
		int rLen;
		struct QueueItem {
    std::shared_ptr<T> data;
  };
	public:
		TVector();
		TVector(const TVector<T>& other);
		void Erase(int pos);
		void InsertLast(const std::shared_ptr<T> t);
		void RemoveLast();
		const std::shared_ptr<T>& Last();
		std::shared_ptr<T>& operator[](const size_t idx);
		bool Empty();
		size_t Length();
		template<typename Y>
  		friend std::istream &operator>>(std::istream &is, TVector<Y> &object);
		void Clear();
		~TVector();
};

#endif
