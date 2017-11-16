/*

#include <iostream>
#include <string>

using namespace std;

class Node {
public:

	string data;
	Node* link;
};

class SSL {
public:
	Node* Head;
	SSL() {
		Head = NULL;
	}

	void appendNode(string data) {
		Node* newNode = new Node();
		newNode->data = data;
		newNode->link = NULL;

		Node* tempPoint = Head;
		if (tempPoint != NULL) {
			while (tempPoint->link != NULL)
				tempPoint = tempPoint->link;

			tempPoint->link = newNode;
		}
		Head = newNode;
	}

	void deleteNode(string data) {
		Node* tempPoint = Head;
		Node* prevNode;
		while(tempPoint != NULL)
			if (data.compare(tempPoint->data) == 0)
			{
				if (tempPoint == Head)
					Head = tempPoint->link;
				else
					prevNode->link = tempPoint->link;
				delete tempPoint;
			}
		prevNode = tempPoint;
		tempPoint = tempPoint->link;
	}

	void printNode() {
		Node* tempPoint = Head;
		if (tempPoint == NULL)
			cout << "노드가 비어있다" << endl;
		return;
		if (tempPoint->link == NULL)
			cout << tempPoint->data << "->" << endl;
		else
			while (tempPoint != NULL) {
				cout << tempPoint->data << "->";
				tempPoint = tempPoint->link;
			}
		cout << "NULL" << endl;
	}
};

int main() {
	SSL List;
	List.appendNode("1");
	List.appendNode("2");
	List.appendNode("3");
	List.appendNode("4");
	List.appendNode("5");
	List.appendNode("6");

	List.printNode();

	return 0;
}

*/