#include <iostream>
#include <vector>
using namespace std;

#define CAP 65

typedef struct node{
	char data;
	struct node * left;
	struct node * right;
} node;

void printInorder(node * tree) {
	if(tree == nullptr) {
		return;
	}

	printInorder(tree->left);
	cout << tree->data;
	printInorder(tree->right);
}

void printPreorder(node * tree) {
	if(tree == nullptr) {
		return;
	}

	cout << tree->data;
	printPreorder(tree->left);
	printPreorder(tree->right);
}

void printPostorder(node * tree) {
	if(tree == nullptr) {
		return;
	}
	printPostorder(tree->left);
	printPostorder(tree->right);
	cout << tree->data;
}

node arr[27];

int main() {
	int N;
	cin >> N;

	char first, second, third;

	for(int i = 0; i < N; i++) {
		cin >> first >> second >> third;
		arr[first - CAP].data = first;
		if(second != '.') {
			arr[first - CAP].left = &arr[second - CAP];
		} else arr[first - CAP].left = nullptr;
		if(third != '.') {
			arr[first - CAP].right = &arr[third - CAP];
		} else arr[first - CAP].right = nullptr;
	}

	printPreorder(&arr[0]);
	cout << endl;
	printInorder(&arr[0]);
	cout << endl;
	printPostorder(&arr[0]);
	cout << endl;

	return 0;
}