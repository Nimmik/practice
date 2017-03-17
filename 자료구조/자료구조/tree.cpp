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
		printf("이미 트리가 생성 되었습니다.");
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
	printf("데이터 : %d\n", dptr->data);
}

int input() {
	int data;
	printf("데이터 입력 : ");
	scanf_s("%d", &data);
	return data;
}

int menu() {
	int select;
	printf("1.데이터 입력\n2.데이터 삽입\n3.데이터 삭제\n4.데이터 출력\n5.전체 삭제\n6.종료");
	line();
	printf("선택: "); scanf_s("%d", &select);
	return select;
}

void line() {
	printf("\n-----------------------------\n");
}