//#include<stdlib.h>
//#include<stdio.h>
//
//void push(int *stack, int *ptop);
//void pop(int *stack, int *ptop);
//void printStack(int *stack, int *ptop);
//
//int main() {
//	int top = 0;
//	int size;
//	printf("stack ũ�� �Է� : "); scanf_s("%d", &size);
//	// ���� �迭 ���� �Ҵ�
//	int *stack = (int*)malloc(sizeof(int)*size);
//	// push �Լ� ȣ���ϸ鼭 ���� ������
//	// stack ������ ��, top�� �ּ� ��
//	push(stack, &top);
//	push(stack, &top);
//	push(stack, &top);
//	push(stack, &top);
//	pop(stack, &top);
//	printStack(stack, &top);
//
//	free(stack);
//}
//
//void push(int *stack, int *ptop) {
//	//���� stack�� ���� á����, ������ �� ������ �����Ƿ� �Լ� ����.
//	if (sizeof(stack) == *ptop) {
//		return;
//	}
//	//������ �� ������ ������ ������ ������ ���� ������ �Է�
//	else {
//		int i = 0;
//		printf("������ �Է� : "); scanf_s("%d", &i);
//		stack[*ptop] = i;
//		(*ptop)++;
//	}
//}
//
//void pop(int *stack, int *ptop) {
//	//���� stack�� ��������� �Լ� ����.
//	if (*ptop == 0) {
//		return;
//	}
//	//�����Ͱ� ������ ���� ���� �ִ� �����͸� ��� �� ����
//	else {
//		printf("������ : %d\n", stack[0]);
//		for (int i = 1; i < *ptop; i++) {
//			stack[i - 1] = stack[i];
//		}
//		(*ptop)--;
//	}
//}
//
//void printStack(int *stack, int *ptop) {
//	for (int i = 0; i < *ptop; i++) {
//		printf("%d�� ������ : %d\n", i + 1, stack[i]);
//	}
//	return;
//}
