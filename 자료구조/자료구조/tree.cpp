#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
	int data;
	struct tree* left;
	struct tree* right;
}Node;

#define SIZE 7
int main() {
	int nums[SIZE];
	for (int i = 0; i < SIZE; i++) {
		nums[i] = input();
	}
	
}

void initTree(Node ** dptr) {
	if (*dptr != NULL) {
		printf("�̹� Ʈ���� ���� �Ǿ����ϴ�.");
		return;
	}
	*dptr = createNode();
}

void insert(Node* dptr) {
	Node * tmp = dptr;
	if (tmp->left == NULL) {
		tmp->left = createNode();
		return;
	}
	else if (tmp->right == NULL) {
		tmp->right = createNode();
		return;
	}

}

Node * createNode() {
	Node* dptr = (Node*)malloc(sizeof(Node));
	dptr->data = input();
	dptr->left = NULL;
	dptr->right = NULL;
	return dptr;
}

void printData(Node* dptr) {
	if (dptr->left != NULL) {
		printData(dptr->left);
	}
	if (dptr->right != NULL) {
		printData(dptr->right);
	}
	printf("������ : %d\n", dptr->data);
}

int input() {
	int data;
	printf("������ �Է� : ");
	scanf_s("%d", &data);
	return data;
}

int menu() {
	int select;
	printf("1.������ �Է�\n2.������ ����\n3.������ ����\n4.������ ���\n5.��ü ����\n6.����");
	line();
	printf("����: "); scanf_s("%d", &select);
	return select;
}

void line() {
	printf("\n-----------------------------\n");
}