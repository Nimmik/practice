//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//
//int main() {
//	int* numOfStudent = (int*)malloc(sizeof(int));
//	double *sum = (double*)malloc(sizeof(double));
//	*sum = 0;
//	printf("�л� �� �Է� : ");
//	scanf_s("%d", numOfStudent);
//
//	int * ptr = (int*)malloc(sizeof(int) * (*numOfStudent));
//	for (int i = 0; i < *numOfStudent; i++) {
//		printf("%d�� �л��� ���� ���� �Է� : ", i + 1);
//		scanf_s("%d", &ptr[i]);
//	}
//
//	for (int i = 0; i < *numOfStudent; i++) {
//		printf("%d�� �л��� ���� ���� : %d\n", i+1, ptr[i]);
//		(*sum) += (double)ptr[i];
//	}
//	printf("�л����� ��� ���� ���� : %.1f\n", (*sum)/(*numOfStudent));
//
//	free(numOfStudent);
//	free(sum);
//	free(ptr);
//}