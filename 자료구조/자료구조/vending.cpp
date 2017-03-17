//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//
//int main() {
//	int money;
//	int select;
//	int cola = 1000;
//	int coffee = 300;
//
//	printf("콜라(1000) 커피(300)\n");
//	printf("Money 투입 : \n"); scanf_s("%d", &money);
//
//	while(1){
//		printf("제품을 골라주세요\n");
//		printf("1. 콜라(1000) 2. 커피(300) : "); scanf_s("%d", &select);
//
//		if (select == 1) {
//			printf("콜라를 선택 했습니다\n");
//			if (money >= 1000) {
//				printf("콜라가 나옵니다\n");
//				money -= 1000;
//			}
//			else {
//				printf("잔액이 부족합니다\n");
//			}
//			printf("잔액은 %d\n", money);
//		}
//		else if (select == 2) {
//			printf("커피를 선택 했습니다\n");
//			if (money >= 300) {
//				printf("커피가 나옵니다\n");
//				money -= 300;
//			}
//			else {
//				printf("잔액이 부족합니다\n");
//			}
//			printf("잔액은 %d\n", money);
//		}
//		else {
//			printf("1, 2번 밖에 없는거 안보이냐!!!\n");
//			printf("잔액은 %d\n", money);
//		}
//		
//		if (money >= 300) {
//			printf("계속 하시겠습니까?(1. yes)\n"); scanf_s("%d", &select);
//			if (select != 1) {
//				printf("안녕히 가세요\n");
//				printf("거스름 돈 : %d\\\n", money);
//				break;
//			}
//			system("pause");
//		}
//		else {
//			printf("안녕히 가세요\n");
//			printf("거스름 돈 : %d\\\n", money);
//			break;
//		}
//	}
//}