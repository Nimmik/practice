//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//#include <windows.h>
//
//void result(int win, int draw, int lose) {
//	printf("***** 최종 결과 *****\n");
//	printf("%5d승 %-2d무 %-2d패\n", win, draw, lose);
//	printf("--------------------\n");
//	return;
//}
//
//void computerChoice(int ran) {
//	if (ran == 3) {
//		printf("컴퓨터는 보를 냈습니다\n");
//	}
//	else if (ran == 2) {
//		printf("컴퓨터는 바위를 냈습니다\n");
//	}
//	else {
//		printf("컴퓨터는 가위를 냈습니다\n");
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
//	printf("가위, 바위, 보 게임입니다..\n");
//	printf("주의 : 1~3키 이외의 값이 입력되면 '패'처리 됩니다..\n");
//	printf("올바르게 입력하세요!!^^\n\n");
//	printf("시작 = Enter키를 누르세요~^^\n\n");
//	printf("=============================\n\n");
//
//	system("pause");
//	system("cls");
//
//	while (win != 4 || lose != 4) {
//		random = rand() % 3 + 1;
//		select = 0;
//		while (select > 3 || select < 1) {
//			printf("가위:1  바위:2  보:3    ::");
//			scanf_s("%d", &select);
//			if (select > 3 || select < 1) {
//				printf("기권으로 간주되서 패처리 합니다\n");
//				lose++;
//				if (lose == 4) {
//					result(win, draw, lose);
//					return;
//				}
//			}
//		}
//		if (select > random || (select == 1 && random == 3)) {
//			computerChoice(random);
//			printf("결과는 당신의 승리\n");
//			win++;
//		}
//		else if (select == random) {
//			computerChoice(random);
//			printf("결과는 무승부 입니다\n");
//			draw++;
//		}
//		else {
//			computerChoice(random);
//			printf("결과는 당신의 패배\n");
//			lose++;
//		}
//		printf("-------------------------\n");
//		printf("현재 : %2d승 %2d무 %2d패\n", win, draw, lose);
//		printf("-------------------------\n");
//		for (int i = 3; i > 0; i--) {
//			printf("== %d초 ==\n", i);
//			Sleep(1000);
//		}
//		system("cls");
//	}
//	result(win, draw, lose);
//	return;
//}