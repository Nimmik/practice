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
//	printf("stack 크기 입력 : "); scanf_s("%d", &size);
//	// 스택 배열 동적 할당
//	int *stack = (int*)malloc(sizeof(int)*size);
//	// push 함수 호출하면서 인자 값을로
//	// stack 데이터 값, top의 주소 값
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
//	//만약 stack이 가득 찼으면, 데이터 들어갈 공간이 없으므로 함수 종료.
//	if (sizeof(stack) == *ptop) {
//		return;
//	}
//	//데이터 들어갈 공간이 있으면 베열의 순서에 따라서 데이터 입력
//	else {
//		int i = 0;
//		printf("데이터 입력 : "); scanf_s("%d", &i);
//		stack[*ptop] = i;
//		(*ptop)++;
//	}
//}
//
//void pop(int *stack, int *ptop) {
//	//만약 stack이 비어있으면 함수 종료.
//	if (*ptop == 0) {
//		return;
//	}
//	//데이터가 있으면 가장 위에 있는 데이터를 출력 후 제거
//	else {
//		printf("데이터 : %d\n", stack[0]);
//		for (int i = 1; i < *ptop; i++) {
//			stack[i - 1] = stack[i];
//		}
//		(*ptop)--;
//	}
//}
//
//void printStack(int *stack, int *ptop) {
//	for (int i = 0; i < *ptop; i++) {
//		printf("%d번 데이터 : %d\n", i + 1, stack[i]);
//	}
//	return;
//}
