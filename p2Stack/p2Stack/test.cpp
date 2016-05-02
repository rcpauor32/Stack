#include "p2stack.h"
#include <stdio.h>

int main() {
	Stack<int> stack;

	stack.Push_Back(5);
	stack.Push_Front(3);
	stack.Push_Back(10);

	stack.Pop();

	printf("%d --> %s", stack.peek(), (stack.peek() == 5) ? "Success!" : "Failure D:");

	stack.Pop();

	printf("\n%d --> %s", stack.peek(), (stack.peek() == 3) ? "Success!" : "Failure D:");

	// Ex. 1 String Backwards ---

	printf("\n\nEx. 1 String Backwards\n\n  ");

	Stack<char> word;

	char input[30];
	int word_size = 0;

	fgets(input, 30, stdin);

	while (input[word_size] != '\0')
		word_size++;

	for (int i = 0; i < word_size; i++) {
		word.Push_Back(input[i]);
	}

	for (int i = 0; i < word_size; i++) {
		printf("%c", word.peek());
		word.Pop();
	}

	// Ex. 2 Words Backwards ---

	printf("\n\nEx. 2 Words Backwards\n\n  ");

	Stack<char> str;
	
	char arr[] = "hello world";
	int it = 0;
	int strword_size;

	strword_size = 0;
	while (arr[it] != ' ' && arr[it] != '\0') {
		str.Push_Back(arr[it]);
		strword_size++;
		it++;
	}

	while (strword_size > 0) {
		printf("%c", str.peek());
		str.Pop();
		strword_size--;
	}

	it++;
	printf(" ");
	strword_size = 0;
	while (arr[it] != ' '  && arr[it] != '\0') {
		str.Push_Back(arr[it]);
		strword_size++;
		it++;
	}

	while (strword_size > 0) {
		printf("%c", str.peek());
		str.Pop();
		strword_size--;
	}

	getchar();
	return 0;
}