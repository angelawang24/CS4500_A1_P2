// lang::Cwc
#pragma once
#include "object.h"

class Queue : public Object
{
public:
	/** Default constructor ensure that everything is initialized */
	Queue() {}

	/** Destructor for queue **/
	~Queue()
	{}

	/**
	 * Pushes given object o to the end of the queue
	 * 
	 * @arg o Object to append to end of queue
	 **/
	void push(Object *o) {}

	/** Returns and removes object from the beginning of the queue if anything is in queue**/
	Object *pop() {}

	/** Returns whether the queue is empty **/
	bool is_empty() {}

	/** Removes all of elements from this queue **/
	void clear() {}

	/** Compares o with this queue for equality.
	 * 
	 * @arg object to compare with this queue
	 **/
	bool equals(Object *o) {}

	/** Return the number of elements in the queue **/
	size_t size() {}

	/** Returns the hash code value for this list **/
	size_t hash() {}
};