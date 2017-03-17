//#include<stdio.h>;
////버블정렬
//int main(){
//	int data[5] = { 45,27,10,35,22 };
//	int cnt, i, temp, n = 5, num;
//	for (cnt = 0; cnt < n - 1; cnt++) {
//		num = 0;
//		for (i = 1; i < n - cnt; i++) {
//			if (data[i - 1]>data[i]) {
//				temp = data[i - 1];
//				data[i - 1] = data[i];
//				data[i] = temp;
//				num++;
//			}
//		}
//		if (num == 0)
//			break;
//	}
//	printf("\n\n after bubble sort \n");
//	for (cnt = 0; cnt < n; cnt++)
//		printf("%5d\n", data[cnt]);
//}