#include <iostream>
#include <string>

using namespace std;

class Node {
public:

	string data;
	Node* PrevLink;
	Node* NextLink;
};

class DLL {
public:
	Node* Head;
	Node* Tail;

	DLL() {
		Head = NULL;
		Tail = NULL;
	}

	void appendNode(string data) {
		Node* newNode = new Node();
		newNode->data = data;
		newNode->PrevLink = NULL;
		newNode->NextLink = NULL;

		if (Head != NULL) {
			Tail->NextLink = newNode;
			newNode->PrevLink = Tail;
			Tail = newNode;
		}
		else
			Head = Tail = newNode;
	}

	void deleteNode(string data) {
		Node* pNode = Head;
		if (pNode == NULL)
			return;
		else {
			Node* prevNode;
			Node* nextNode;

			do {
				if (data.compare(pNode->data) == 0)
					break;
				pNode = pNode->NextLink;
			} while (pNode != NULL);

			prevNode = pNode->PrevLink;
			nextNode = pNode->NextLink;

			if (prevNode == NULL)
				Head = nextNode;
			else
				prevNode->NextLink = nextNode;

			if (nextNode == NULL)
				Tail = prevNode;
			else
				nextNode->PrevLink = prevNode;

			delete pNode;
		}
	}

	void printNode() {
		Node* pNode = Head;
		if (pNode == NULL) {
			cout << "노드가 비어있습니다" << endl;
			return;
		}
		if (pNode->NextLink == NULL)
			cout << pNode->data << "->" << "NULL" << endl;
		else {
			while (pNode != NULL) {
				cout << pNode->data << endl;
				pNode = pNode->NextLink;
			}
			cout << "NULL" << endl;
		}
	}



		











};

int main() {
	DLL list;
	list.appendNode("1");
	list.appendNode("2");
	list.appendNode("3");
	list.appendNode("4");
	list.appendNode("5");

	list.printNode();

	return 0;
}
