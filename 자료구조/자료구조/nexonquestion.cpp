//#include<stdlib.h>
//#include<stdio.h>
//
//int getSelfNum(int n);
//int pow(int a, int b);
//
//
//int main() {
//	int* ptr = (int*)malloc(sizeof(int) * 5001);
//	int sum = 0;
//	for (int i = 1; i < 5000; i++) {
//		ptr[i] = 0;
//	}
//	for (int i = 1; i < 5001; i++) {
//		if (getSelfNum(i) != 0 && getSelfNum(i) < 5001) {
//			ptr[getSelfNum(i)] = getSelfNum(i);
//		}
//	}
//
//	int count = 0;
//	for (int i = 1; i < 5000; i++) {
//		if (ptr[i] == 0) {
//			sum += i;
//			printf("%10d", i);
//			count++;
//			if (count % 10 == 0) {
//				printf("\n");
//			}
//		}
//	}
//	printf("\n");
//	printf("Self NumberµéÀÇ ÇÕ : %d\n", sum);
//	free(ptr);
//}
//
//int getSelfNum(int n) {
//	int dNum=0;
//	int i = 0;
//	while ((n / pow(10,i)) != 0) {
//		dNum += (n / pow(10, i)) % 10;
//		i++;
//	}
//	return dNum + n;
//}
//
//int pow(int a, int b) {
//	int result = 1;
//	for (int i = 0; i < b; i++) {
//		result *= a;
//	}
//	return result;
//}