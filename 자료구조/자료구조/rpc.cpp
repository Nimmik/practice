//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//#include <windows.h>
//
//void result(int win, int draw, int lose) {
//	printf("***** ���� ��� *****\n");
//	printf("%5d�� %-2d�� %-2d��\n", win, draw, lose);
//	printf("--------------------\n");
//	return;
//}
//
//void computerChoice(int ran) {
//	if (ran == 3) {
//		printf("��ǻ�ʹ� ���� �½��ϴ�\n");
//	}
//	else if (ran == 2) {
//		printf("��ǻ�ʹ� ������ �½��ϴ�\n");
//	}
//	else {
//		printf("��ǻ�ʹ� ������ �½��ϴ�\n");
//	}
//	return;
//}
//
//void main() {
//	int win = 0;
//	int draw = 0;
//	int lose = 0;
//	int random;
//	int select;
//
//	srand(time(NULL));
//	printf("=============================\n\n");
//	printf("����, ����, �� �����Դϴ�..\n");
//	printf("���� : 1~3Ű �̿��� ���� �ԷµǸ� '��'ó�� �˴ϴ�..\n");
//	printf("�ùٸ��� �Է��ϼ���!!^^\n\n");
//	printf("���� = EnterŰ�� ��������~^^\n\n");
//	printf("=============================\n\n");
//
//	system("pause");
//	system("cls");
//
//	while (win != 4 || lose != 4) {
//		random = rand() % 3 + 1;
//		select = 0;
//		while (select > 3 || select < 1) {
//			printf("����:1  ����:2  ��:3    ::");
//			scanf_s("%d", &select);
//			if (select > 3 || select < 1) {
//				printf("������� ���ֵǼ� ��ó�� �մϴ�\n");
//				lose++;
//				if (lose == 4) {
//					result(win, draw, lose);
//					return;
//				}
//			}
//		}
//		if (select > random || (select == 1 && random == 3)) {
//			computerChoice(random);
//			printf("����� ����� �¸�\n");
//			win++;
//		}
//		else if (select == random) {
//			computerChoice(random);
//			printf("����� ���º� �Դϴ�\n");
//			draw++;
//		}
//		else {
//			computerChoice(random);
//			printf("����� ����� �й�\n");
//			lose++;
//		}
//		printf("-------------------------\n");
//		printf("���� : %2d�� %2d�� %2d��\n", win, draw, lose);
//		printf("-------------------------\n");
//		for (int i = 3; i > 0; i--) {
//			printf("== %d�� ==\n", i);
//			Sleep(1000);
//		}
//		system("cls");
//	}
//	result(win, draw, lose);
//	return;
//}