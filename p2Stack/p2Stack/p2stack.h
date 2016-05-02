#ifndef  __STACK_H__
#define	 __STACK_H__

#include "dynarray.h"

template<class T>

class Stack {
private:
	DynArray<T> buffer;

public:
	Stack() {}
	Stack(const Stack& stack) : buffer(stack.buffer) {}

	virtual ~Stack(){}

public:
	// Size ---
	int size() {
		return buffer.n_size();
	}
	// Pop ---
	void Pop() {
		buffer.pop(buffer[buffer.n_size() - 1]);
	}

	// Push_Back ---
	void Push_Back(const T data) {
		buffer.push_back(data);
	}

	// Push_Front ---
	void Push_Front(const T data) {
		buffer.push_front(data);
	}

	// Peek ---
	const T& peek() const {
		return buffer[buffer.n_size() - 1];
	}

};

#endif // __STACK_H__