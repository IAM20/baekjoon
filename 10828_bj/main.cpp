#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N;
string input;

typedef struct node {
	int data;
	struct node * next;
} Node;

typedef struct stack {
	unsigned int size;
	struct node * head;
} Stack;

Stack * createStack() {
	Stack * tmp = new Stack;
	tmp->head = NULL;
	tmp->size = 0;

	return tmp;
}

void push(Stack * stack, int data) {
	if(stack == NULL) {
		cout << "Null ptr exception" << endl;
	}
	Node * tmp = new Node;
	tmp->data = data;
	tmp->next = stack->head;
	stack->head = tmp;
	stack->size++;
}

int pop(Stack * stack) {
	if(stack == NULL || stack->size == 0) {
		return -1;
	}
	int data = stack->head->data;
	Node * tmp = stack->head;
	stack->head = stack->head->next;
	stack->size--;
	delete tmp;

	return data;
}

int top(Stack * stack) {
	if(stack->size == 0)
		return -1;
	return stack->head->data;
}

unsigned int size(Stack * stack) {
	return stack->size;
}

int empty(Stack * stack) {
	return (stack->size) ? 0 : 1;
}


int main() {
	cin >> N;
	int digit;
	Stack stack;
	stack.size = 0;
	stack.head = NULL;

	for(int i = 0; i < N; i++) {
		cin >> input;
		if(input.compare("push") == 0) {
			cin >> digit;
			push(&stack, digit);
		} else if(input.compare("top") == 0) {
			cout << top(&stack) << endl;
		} else if(input.compare("size") == 0) {
			cout << size(&stack) << endl;
		} else if(input.compare("empty") == 0) {
			cout << empty(&stack) << endl;
		} else if(input.compare("pop") == 0) {
			cout << pop(&stack) << endl;
		}
	}


	return 0;
}