#include <iostream>
using namespace std;

struct NODE {
	NODE* next;
	int data;
};

NODE* push(NODE* parent, int data)
{
	struct NODE* node = (NODE*)malloc(sizeof(NODE));
	node->next = NULL;
	node->data = data;

	if (parent != NULL)
		parent->next = node;

	return node;
}

void save(NODE* parent)
{
	struct NODE* curr = parent->next;
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}


int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	NODE* node = push(head, 10);
	NODE* node2 = push(node, 20);

	for (int i = 3; i < 300; i++) {
		node = push(node2, i * 10);
		if(299==i)
			node->next = NULL;
	}
	
	save(head);

	free(node2);
	free(node);
	free(head);
}

#include <stdio.h>
#include <stdlib.h>

struct NODE {
	NODE* next;
	int data;
};

NODE* push(NODE* parent, int data)
{
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->next = NULL;
	node->data = data;

	if (parent != NULL)
		parent->next = node;

	return node;
}

#include <stdio.h>
#include <stdlib.h>

struct NODE {
	NODE* next;
	int data;
};

NODE* push(NODE* parent, int data)
{
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->next = NULL;
	node->data = data;

	if (parent != NULL)
		parent->next = node;

	return node;
}