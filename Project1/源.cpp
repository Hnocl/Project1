#include <iostream>
using namespace std;


struct Node
{
	int value;
	Node* next;
};

Node* inverse(Node* head) {
	if (head->next == nullptr) {
		return head;
	}
	Node* temp = inverse(head->next);
	temp->next = head;
	head->next = nullptr;
}

int main() {

	Node* head, *middle, *tail;
	head->value = 1;
	middle->value = 2;
	tail->value = 3;
	head->next = middle;
	middle->next = tail;

	cout << head << middle << tail;
	
	Node* newHead = inverse(head);
	cout << newHead << newHead->next << newHead->next->next;
}
