/*
 -------------------------------------------------------------------------------
 Pair.cpp
 Pair Project
 
 Initially created by Rowland O'Flaherty on 8/13/10.
 -------------------------------------------------------------------------------
 */

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Friends
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Friend Overloaded Operators
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Lifecycle
//------------------------------------------------------------------------------

// Constructors
template <typename T1, typename T2>
Pair<T1, T2>::
Pair()
:
first(T1()),
second(T2())
{
	
}

template <typename T1, typename T2>
Pair<T1, T2>::
Pair(T1 firstInput, T2 secondInput)
:
first(T1()),
second(T2())
{
	first = firstInput;
	second = secondInput;
}

// Destructor
template <typename T1, typename T2>
Pair<T1, T2>::
~Pair()
{
	
}

// Copy constructor
template <typename T1, typename T2>
Pair<T1, T2>::
Pair(const Pair<T1, T2>& srcObj)
{
	copyHelper(srcObj);
}

// Assignment operator
template <typename T1, typename T2>
const Pair<T1, T2>& Pair<T1, T2>::
operator=(const Pair<T1, T2>& rhsObj)
{
	// Self-assignment check
	if (this == &rhsObj)
	{
		return (*this);
	}
	
	// Copy new memory
	copyHelper(rhsObj);
	
	return (*this);
}

// Copy helper function
template <typename T1, typename T2>
void Pair<T1, T2>::
copyHelper(const Pair<T1, T2>& srcObj)
{
	first = srcObj.first;
	second = srcObj.second;
}

//------------------------------------------------------------------------------
// Overloaded Operators
//------------------------------------------------------------------------------
template <typename T1, typename T2>
bool Pair<T1, T2>::
operator==(const Pair<T1, T2>& rhsObj)
{
	return first == rhsObj.first && second == rhsObj.second;
}

template <typename T1, typename T2>
bool Pair<T1, T2>::
operator>(const Pair<T1, T2>& rhsObj)
{
	bool val = false;
	if(first != rhsObj.first)
	{
		val = (first > rhsObj.first);
	}
	else
	{
		val = (second > rhsObj.second);
	}
	
	return val;
}

template <typename T1, typename T2>
bool Pair<T1, T2>::
operator<(const Pair<T1, T2>& rhsObj)
{
	bool val = false;
	if(first != rhsObj.first)
	{
		val = first < rhsObj.first;
	}
	else
	{
		val = second < rhsObj.second;
	}
	
	return val;
}

//------------------------------------------------------------------------------
// Public Member Functions
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Protected Member Functions
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Private Member Functions
//------------------------------------------------------------------------------

