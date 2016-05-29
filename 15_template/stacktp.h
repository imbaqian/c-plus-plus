//stacktp.h -- a stack template
#ifndef STACKTP_H_
#define STACKTP_H_

template <class Type>
class Stack{
private:
	enum {MAX = 10};
	Type items[MAX];
	int top;
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type &item);
	bool pop(Type &item);
};

template <class Type>
Stack<Type>::Stack(){
	top = 0;	
}

template <class Type>
bool Stack<Type>::isempty(){
	return 0 == top;
}

template <class Type>
bool Stack<Type>::isfull(){
	return MAX == top;
}

template <class Type>
bool Stack<Type>::push(const Type &item){
	if(top < MAX){
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template <class Type>
bool Stack<Type>::pop(Type &item){
	if(0 == top)
		return false;
	else{
		item = items[--top];
		return true;
	}
}
#endif
