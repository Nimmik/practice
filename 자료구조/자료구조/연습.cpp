//#include<stdlib.h>
//#include<stdio.h>
//
//typedef struct node {
//	int data;
//	node* link;
//}Node;
//
//int menu();
//void line();
//int input();
//void push(Node**,int*);
//void pop(Node**, int*);
//void popAll(Node**, int*);
//void printData(Node**);
//
//int main() {
//	Node* head = NULL;
//	int count=0;
//
//	while (1) {
//		int select = menu();
//		if (select == 1)
//			push(&head,&count);
//		else if (select == 2)
//			printData(&head);
//		else if (select == 3)
//			pop(&head,&count);
//		else if (select == 4)
//			popAll(&head,&count);
//		else {
//			popAll(&head,&count);
//			break;
//		}
//
//		system("pause");
//		system("cls");
//	}
//}
//
//void push(Node** head, int* count) {
//	int num = -1;
//	if(*count == 0){
//		printf("리스트가 비어있으므로 첫칸에 데이터를 넣습니다.\n");
//		*head = (Node*)malloc(sizeof(Node));
//		(*head)->data = input();
//		(*head)->link = NULL;
//		(*count)++;
//		return;
//	}
//	else {
//		while (num < 0 || num > *count) {
//			printData(head);
//			printf("\n현제 %d개의 데이터가 있습니다\n",*count);
//			printf("데이터 넣을 위치 입력 (0부터 시작): ");
//			scanf_s("%d", &num);
//		}
//	}
//	Node* tmp = NULL;
//	Node* next = *head;
//	if (num == 0) {
//		tmp = *head;
//		*head = (Node*)malloc(sizeof(Node));
//		(*head)->link = tmp;
//		(*head)->data = input();
//	}
//	else{
//		for (int i = 0; i < num; i++) {
//			tmp = next;
//			if(next != NULL){
//				next = next->link;
//			}
//		}
//		tmp->link = (Node*)malloc(sizeof(Node));
//		tmp->link->data = input();
//		tmp->link->link = next;
//	}
//	(*count)++;
//	return;
//}
//
//void pop(Node** Front, int* count) {
//	if (*Front == NULL) {
//		printf("큐가 비어있습니다.\n");
//		return;
//	}
//	int num;
//
//	Node* tmp = *Front;
//	Node* next = (*Front)->link->link;
//
//	printData(Front);
//	printf("\n삭제할 데이터 번호 입력 (1번 부터 시작): ");
//	scanf_s("%d", &num);
//	if (num == 1) {
//		printf("데이터 : %d\n", (*Front)->data);
//		*Front = (*Front)->link;
//		free(tmp);
//	}
//	else {
//		for (int i = 2; i < num; i++) {
//			tmp = tmp->link;
//			next = next->link;
//		}
//		printf("데이터 : %d\n", tmp->link->data);
//		free(tmp->link);
//		tmp->link = next;
//	}
//	(*count)--;
//}
//
//void popAll(Node** Front, int* count) {
//	while (*Front != NULL) {
//		printf("데이터 : %d\n", (*Front)->data);
//		Node* tmp = *Front;
//		*Front = (*Front)->link;
//		free(tmp);
//	}
//	*count = 0;
//	printf("큐가 비어있습니다.\n");
//	return;
//}
//
//void printData(Node** Front) {
//	if (*Front == NULL) {
//		printf("데이터 출력 완료.\n");
//		return;
//	}
//	Node* tmp = *Front;
//	printf("[ ");
//	while (tmp != NULL) {
//		printf("%d ", tmp->data);
//		tmp = tmp->link;
//	}
//	printf("]\n");
//
//	/*Node* tmp = *Front;
//	printf("데이터 : %d\n", tmp->data);
//	tmp = tmp->link;
//	printData(&tmp);*/
//}
//
//
//int input() {
//	int data;
//	printf("데이터 입력 : ");
//	scanf_s("%d", &data);
//	return data;
//}
//
//int menu() {
//	int select;
//	printf("1.데이터 입력\n2.데이터 출력\n3.데이터 삭제\n4.데이터 전부 삭제\n5.종료");
//	line();
//	printf("선택: "); scanf_s("%d", &select);
//	return select;
//}
//
//void line() {
//	printf("\n-----------------------------\n");
//}