#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};//구조체 선언 student1

typedef struct {
char lastName;
int studentId;
char grade;
} student2;//구조체 선언 student2

int main() {
printf("[----- [박성준] [2021040026] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//student1의 구조체 가져오고, 각각 대입
printf("st1.lastName = %c\n", st1.lastName);//st1.lastName = A
printf("st1.studentId = %d\n", st1.studentId);//st1.studentId = 100
printf("st1.grade = %c\n", st1.grade);//st1.grade = A
student2 st2 = {'B', 200, 'B'};//student2의 구조체 가져오고, 각각 대입
printf("\nst2.lastName = %c\n", st2.lastName);//st2.lastName = B
printf("st2.studentId = %d\n", st2.studentId);//st2.studentId = 200
printf("st2.grade = %c\n", st2.grade);//st2.grade = B
}
