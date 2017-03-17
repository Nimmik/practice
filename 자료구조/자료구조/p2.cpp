//#include <stdio.h>
//
//void Swap(char *a, char *b);
//void Perm(char* list, int i, int n);
//
//int main() {
//	char str[] = { 'a','b','c' };
//	Perm(str, 0, 2);
//}
//
//void Swap(char *a, char *b) {
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void Perm(char *list, int i, int n) {
//	int j, temp;
//	if (i == n) {
//		for (j = 0; j <= n; j++) {
//			printf("%c", list[j]);
//		}
//		printf("\n");
//	}
//	else {
//		for (j = i; j <= n; j++) {
//			Swap(list+i, list+j);
//			Perm(list, i + 1, n);
//			Swap(list+j, list+i);
//		}
//	}
//}