//TVECTOR.H
#ifndef TVECTOR_H
#define TVECTOR_H
#define et_tvector std::shared_ptr<Figure>

#include <iostream>
#include "triangle.h"
#include <memory>

class TVector
{
	private:
		void resize(int newsize);
		et_tvector *vals;
		int len;
		int rLen;
	public:
		TVector();
		TVector(const TVector& other);
		void Erase(int pos);
		void InsertLast(const std::shared_ptr<Triangle> t);
		void RemoveLast();
		const et_tvector& Last();
		et_tvector& operator[](const size_t idx);
		bool Empty();
		size_t Length();
		friend std::ostream& operator<<(std::ostream& os, TVector& obj);
		void Clear();
		~TVector();
};

#endif
