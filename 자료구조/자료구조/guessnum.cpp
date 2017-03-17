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
//			printf("%d번의 기회가 있습니다.\n", i-1);
//			while (0 > guess || guess > 100) {
//				printf("1~100사이의 숫자 입력 : ");
//				scanf_s("%d", &guess);
//			}
//		}
//		else {
//			printf("더이상 기회가 없습니다\n");
//			printf("다음 번에는 더 잘 해보세요\n");
//			break;
//		}
//		
//		printf("당신의 입력 값 : %d\n", guess);
//		printf("=====================================\n");
//		if (guess > random) {
//			printf("%d번 : 맞춰야 하는 수는 더 낮습니다.\n", count);
//		}
//		else if (guess < random) {
//			printf("%d번 : 맞춰야 하는 수는 더 높습니다.\n", count);
//		}
//		else {
//			printf("%d번 만에 맞췄습니다!! ^^\n", count);
//			printf("=================================\n");
//			break;
//		}
//
//		count++;
//		system("pause");
//		system("cls");
//	}
//}