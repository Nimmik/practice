//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//
//void main() {
//	srand(time(NULL));
//	int guess = -1;
//	int random = rand() % 100 + 1;
//	int count = 1;
//	for (int i = 11; i > 0; i--) {
//		guess = -1;
//		printf("-------------------------------\n");
//		if(i > 1){
//			printf("%d���� ��ȸ�� �ֽ��ϴ�.\n", i-1);
//			while (0 > guess || guess > 100) {
//				printf("1~100������ ���� �Է� : ");
//				scanf_s("%d", &guess);
//			}
//		}
//		else {
//			printf("���̻� ��ȸ�� �����ϴ�\n");
//			printf("���� ������ �� �� �غ�����\n");
//			break;
//		}
//		
//		printf("����� �Է� �� : %d\n", guess);
//		printf("=====================================\n");
//		if (guess > random) {
//			printf("%d�� : ����� �ϴ� ���� �� �����ϴ�.\n", count);
//		}
//		else if (guess < random) {
//			printf("%d�� : ����� �ϴ� ���� �� �����ϴ�.\n", count);
//		}
//		else {
//			printf("%d�� ���� ������ϴ�!! ^^\n", count);
//			printf("=================================\n");
//			break;
//		}
//
//		count++;
//		system("pause");
//		system("cls");
//	}
//}