//#include<stdio.h>
//#include<string.h>
//#include <stdlib.h>
//#include <time.h>
//
//typedef struct student {
//public:
//	int s_num = 0;
//	char name[30];
//	int kor, eng, math, total;
//
//	void setStudent(int s_num,int kor, int eng, int math) {
//		this->s_num = s_num + 1;
//		this->kor = kor;
//		this->eng = eng;
//		this->math = math;
//		this->total = kor + eng + math;
//	}
//
//	void setName(char * name) {
//		strcpy_s(this->name, name);
//	}
//}Student;
//char *highestScore(Student * s) {
//	int max = 0;
//	int index = 0;
//	for (int i = 0; i < 5; i++) {
//		if (max < s[i].total) {
//			max = s[i].total;
//			index = i;
//		}
//	}
//	return s[index].name;
//}
//
//int main() {
//	Student students[5];
//	srand(time(NULL));
//	for (int i = 0; i < 5; i++) {
//		students[i].setStudent(i,rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1);
//	}
//	students[0].setName("Charlie");
//	students[1].setName("Jason");
//	students[2].setName("Michael");
//	students[3].setName("Nadav");
//	students[4].setName("Alex");
//
//	printf("번호   이름     국어  영어  수학  총점\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%-5d %-10s %-5d %-5d %-5d %-5d\n",students[i].s_num, students[i].name, students[i].kor, students[i].eng, students[i].math, students[i].total);
//	}
//
//	printf("%s가 최고로 높은 점수를 받았습니다\n", highestScore(students));
//}