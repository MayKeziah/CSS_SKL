Keziah May
Fall 2019
CSS_SKL 342 A
Lab 2

Dynamic memory allocation

	When you use the "new" keyword in C++, you are dynamically allocating memory. This means that the memory allocated is stored on the heap. 

	When you are done with a variable which has been initialized using the new keyword, you must use the delete keyword to return that memory to the heap. If you do not use the delete operator, that piece of memory will be leaked, or unusable, for the duration of the process. 

	It is best practice to also assign these variables to nullPtr. We do this because even after the variable has been 'deleted', it can still be accessed unless we wipe the information stored there. Assigning it to nullPtr ensures that the memory previously stored will be both returned to the heap for reuse and will not have unique information that could be accessed at a later time. 
