#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	string data;
	Node* nextLink;
	Node* prevLink;
};

class CLS {
public:
	Node* Head;

	CLS() {
		Head = NULL;
	}

	void appendNode(string data) {
		Node* newNode = new Node();
		newNode->data = data;
		newNode->prevLink = NULL;
		newNode->nextLink = NULL;

		if (Head != NULL) {
			Node* Tail = Head->prevLink;

			Tail->nextLink->prevLink = newNode;
			Tail->nextLink = newNode;
			newNode->nextLink = Head;
			newNode->prevLink = Tail;
		}
		else {
			Head = newNode;
			Head->prevLink = Head;
			Head->nextLink = Head;
		}
	}


};