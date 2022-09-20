#include <iostream>
using namespace std;

struct NODE {
	NODE* next;
	int data;
};

// 마지막 노드의 데이터 값을 계속 바꿈
NODE* push(NODE* hash[], NODE* parent, int data)
{
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->next = NULL;
	node->data = data;

	if (parent != NULL)
		parent->next = node;

	if ((int)(data % 10) == 0)
		hash[(int)(data / 10)] = node;

	return node;
}

// 노드 뒤에 계속 데이터 입력 가능(블록쌓기)
NODE* append(NODE* hash[], NODE* head, int data)
{
	NODE* curr = head;
	while (curr->next != NULL)
		curr = curr->next;
	return push(hash, curr, data);
	
	//NODE* curr, * parent = NULL;
	//for (curr = head; curr != NULL; curr = curr->next) {
	//	if (curr->next == NULL)
	//		return push(curr, data);
	//}
	//return curr;
}

	//NODE* hash[11];
	//if (data % 10 == 0) {
	//	hash[(int)(data / 10)] = node;
	//}


NODE* find(NODE* hash[], int data)
{
	NODE* curr = NULL;
	for (curr = hash[(int)(data / 10)]; curr != NULL; curr=curr->next) {
		if (curr->data == data) {
			cout << curr;
			break;
		}
	}
	return curr;

}

void remove(NODE* head, int data)
{
	NODE* prev = NULL; NODE* curr = head;
	while (curr->next != NULL) {
		curr = curr->next;
			if (curr->data == data) {
				prev->next = curr->next;
				free(curr);
				curr = prev;
				cout << endl << data << " 삭제" << endl;
			}
		prev = curr;
	}
}

void removeall(NODE* parent)
{
	NODE* curr = parent;
	NODE* next;
	while (curr != NULL) {
		next = curr->next;
		free(curr);
		curr = next;
		cout << "삭제" << endl;
	}
}

sort(NODE* curr, int data)
{
	int tmp;
	for(int i=0;i<20;i++) {
		for (int j = 0; j < i; j++) {
			
		}
	}

}

void print(NODE* parent)
{
	struct NODE* curr = parent->next;
	while (curr != NULL) {
		printf("%2d ", curr->data);
		curr= curr->next;
	}
}





int main()
{
#if 1
	NODE* hash[20];
	NODE* head = push(hash, NULL, 0);
	NODE* node = head;
	for (int i = 1; i < 100; i++) {
		node = push(hash, node, i);
	}


	
#else	
	NODE* head = (NODE*)malloc(sizeof(NODE));
	NODE* node = push(head, 10);
	NODE* node2 = push(node, 20);
	append(node, 30);
	append(node, 40);
	append(node, 50);
	append(node, 10);
	append(node2, 30);
	append(node2, 77);
	append(node2, 30);
	append(node, 10);

#endif

	node = find(hash, 55);
	if (node != NULL)
		printf("%d\n", node->data);

	//print(head);
	remove(node, 98);
	//find(hash[80], 77);
	removeall(node);


	return 0;
}