/*
 -------------------------------------------------------------------------------
 Pair.h
 Pair Project
 
 This template class adds pair functionality to Arduino code.
 
 Initially created by Rowland O'Flaherty on 8/13/10.
 -------------------------------------------------------------------------------
 */

#ifndef _Pair_h_
#define _Pair_h_

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------


template <typename T1, typename T2>
class Pair
{
	//--------------------------------------------------------------------------
	// Friends
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Friend Overloaded Operators
	//--------------------------------------------------------------------------
	
	
public:
	//--------------------------------------------------------------------------
	// Constants, Enums, and Types
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Lifecycle
	//--------------------------------------------------------------------------
	
	// Constructors
	Pair();
	Pair(T1 first, T2 second);
	
	// Destructor
	~Pair();
	
	// Copy constructor
	Pair(const Pair<T1, T2>& srcObj);
	
	// Assignment operator
	const Pair<T1, T2>& operator=(const Pair<T1, T2>& rhsObj);
	
	
	//--------------------------------------------------------------------------
	// Overloaded Operators
	//--------------------------------------------------------------------------
	bool operator==(const Pair<T1, T2>& rhsObj);
	bool operator>(const Pair<T1, T2>& rhsObj);
	bool operator<(const Pair<T1, T2>& rhsObj);
	
	//--------------------------------------------------------------------------
	// Public Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Public Member Variables
	//--------------------------------------------------------------------------
	T1 first;
	T2 second;
	
	
protected:
	//--------------------------------------------------------------------------
	// Protected Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Protected Member Variables
	//--------------------------------------------------------------------------
	
	
	
private:
	//--------------------------------------------------------------------------
	// Lifecycle
	//--------------------------------------------------------------------------
	void copyHelper(const Pair<T1, T2>& srcObj);
	
	//--------------------------------------------------------------------------
	// Private Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Private Member Variables
	//--------------------------------------------------------------------------
		
	
};

#include "Pair.cpp"

#endif