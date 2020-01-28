## Contact us: ##
mattie.r@husky.neu.edu; 
wang.ang@husky.neu.edu

## README ##

The class Queue was created to represent a traditional FIFO queue. 

The Queue has 3 fields: head_, which is a pointer to the first Object in a list of Objects; curr_size_, which is an integer
telling how many objects are in the queue; and max_, which stores the maximum capacity that the queue can hold before 
reallocating space.

Because FIFO queues can only have elements pushed onto the end of the list and popped from the beginning,
these methods are the only way to add and remove elements. They will push and pop elements at the right indices. 

Other methods for queues include: Clear, which removes everything from the queue; isEmpty, which returns whether
or not the queue contains no elements; Equals, which returns true if the element you compare it to is equal to this 
Queue; Size, which returns the number of elements in the queue; and Hash which returns a hash value of the queue.

Currently all of these methods are un-implemented.
