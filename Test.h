#ifndef TEST_H_
#define TEST_H_

#include "stdafx.h"
#include <iostream>
#include <algorithm>

template<typename T>

class vector
{
public:

	static	const int SPARE_CAPACITY=16;
	int theSize;
	explicit vector(int initSize=0):theSize(initSize),theCapacity(theSize+SPARE_CAPACITY)
	{
		 object=new T[SPARE_CAPACITY];
		
	}
	vector(const vector& rhs ):theSize(rhs.theSize),theCapacity(rhs.theCapacity),object(NULL)
	{		
		object=new T[rhs.theCapacity];
		//memcpy(object,rhs.object,theCapacity*sizeof(T));
		for(int i=0;i<theCapacity;i++)
			object[i]=rhs.object[i];

	}
	vector(const vector* rhs):theSize(rhs->theSize),theCapacity(rhs->theCapacity),object(NULL)
	{
		object=new T[rhs->theCapacity];
		for(int i=0;i<theCapacity;i++)
			object[i]=rhs->object[i];
	}

	~vector()
	{
		deletep[] object;
	}
	vector& operator=(const vector& rhs)
	{
		if(this==&rhs)
			return *this;
		delete[] object;
		object=new	T[rhs.theCapacity];
		for (int i=0;i++;i<rhs.theCapacity)
		{
			object[i]=rhs.object[i];

		}
		theCapacity=rhs.theCapacity;
		theSize=rhs.theSize;
		return *this;

	}
	void resize(int newsize)
	{
		if(newsize<theCapacity)
			return ;
		T* newObject=new T[theCapacity*2];
		for(int i=0;i<theCapacity;i++)
			newObject[i]=object[i];
		delete []object;
		object =newObject;
		theCapacity*=2;
	}
	T& operator[](int index)
	{
		return object[index];
	}
	bool empty()const
	{
		return theSize==0;
	}
	void push_back_define(const T& x)
	{
		if (theSize==theCapacity)
		{
			resize(theCapacity);
		}
		object[theSize++]=x;
	}
	void pop_back_define()
	{
		--theSize;
	}
	const T& back() const
	{
		return object[--theSize];

	}
	typedef	T * iterator_define;

	typedef	const T * const_iterator_define;

	iterator_define begin()
	{
		return &object[0];
	}
	iterator_define end()
	{
		return &object[theSize];
	}


protected:
private:
	int theSize;
	int theCapacity;
	T* object;


};


		 
#endif