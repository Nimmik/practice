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
//	printf("�ݶ�(1000) Ŀ��(300)\n");
//	printf("Money ���� : \n"); scanf_s("%d", &money);
//
//	while(1){
//		printf("��ǰ�� ����ּ���\n");
//		printf("1. �ݶ�(1000) 2. Ŀ��(300) : "); scanf_s("%d", &select);
//
//		if (select == 1) {
//			printf("�ݶ� ���� �߽��ϴ�\n");
//			if (money >= 1000) {
//				printf("�ݶ� ���ɴϴ�\n");
//				money -= 1000;
//			}
//			else {
//				printf("�ܾ��� �����մϴ�\n");
//			}
//			printf("�ܾ��� %d\n", money);
//		}
//		else if (select == 2) {
//			printf("Ŀ�Ǹ� ���� �߽��ϴ�\n");
//			if (money >= 300) {
//				printf("Ŀ�ǰ� ���ɴϴ�\n");
//				money -= 300;
//			}
//			else {
//				printf("�ܾ��� �����մϴ�\n");
//			}
//			printf("�ܾ��� %d\n", money);
//		}
//		else {
//			printf("1, 2�� �ۿ� ���°� �Ⱥ��̳�!!!\n");
//			printf("�ܾ��� %d\n", money);
//		}
//		
//		if (money >= 300) {
//			printf("��� �Ͻðڽ��ϱ�?(1. yes)\n"); scanf_s("%d", &select);
//			if (select != 1) {
//				printf("�ȳ��� ������\n");
//				printf("�Ž��� �� : %d\\\n", money);
//				break;
//			}
//			system("pause");
//		}
//		else {
//			printf("�ȳ��� ������\n");
//			printf("�Ž��� �� : %d\\\n", money);
//			break;
//		}
//	}
//}