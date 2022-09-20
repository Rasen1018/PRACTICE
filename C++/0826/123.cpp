#include <stdio.h>
#include <stdlib.h>

struct NODE {
    struct NODE* next;
    int data;
};


struct NODE* append(struct NODE* parent, int data) // 기준 노드 뒤에 노드를 추가하는 함수
{
    struct NODE* node = (struct NODE*)malloc(sizeof(struct NODE));
    node->next = NULL; // 초기화
    node->data = data;

    if (parent != NULL)
        parent->next = node;

    return node;
}

int main()
{
    //struct NODE* prev = (struct NODE*)malloc(sizeof(struct NODE));
    struct NODE* prev = new struct NODE;

    struct NODE* head = append(NULL, 1);
    struct NODE* node1 = append(head, 2);
    struct NODE* node3 = append(node1, 4);
    struct NODE* node2 = append(node3, 3);
    prev->next = node1->next;
    prev->data = node2->data;
    node1->next = prev;


    //for (int i = 0; i < 30; i++)
    //{
    //   node = append(node, i);
    //}

    for (struct NODE* node = head; node != NULL; node = node->next)
        printf("%d\n", node->data);
}