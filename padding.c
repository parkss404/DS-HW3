#include <stdio.h>
struct student {
char lastName[13]; // 13 bytes 
int studentId; //4 bytes 
short grade; // 2 bytes 
};//구조체 선언 

int main()
{
struct student pst;//student구조체 가져오기 
printf("[----- [박성준] [2021040026] -----]\n");
printf("size of student = %ld\n", sizeof(struct student));//student구조체의 크기 = padding에 의해서 int의 배수인 24byte
printf("size of int = %ld\n", sizeof(int));//int 크기 = 4byte
printf("size of short = %ld\n", sizeof(short));//short 크기 = 2byte
return 0;
}
