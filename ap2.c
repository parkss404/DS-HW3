#include <stdio.h>
#include <stdlib.h>
int main()
{
int list[5];//크기 5짜리의 배열을 만든다.
int *plist[5];//주소값을 저장하는 배열을 만든다.
list[0] = 10;//list[0] 값은 10
list[1] = 11;//list[1] 값은 11
plist[0] = (int*)malloc(sizeof(int));//plist[0]에 malloc이용해 할당해준다.
printf("[----- [박성준] [2021040026] -----]\n");
printf("list[0] \t= %d\n", list[0]);//list[0] 값
printf("address of list \t= %p\n", list);//list주소값 = list[0]주소값
printf("address of list[0] \t= %p\n", &list[0]);//list[0]주소값
printf("address of list + 0 \t= %p\n", list+0);//=list[0]주소값
printf("address of list + 1 \t= %p\n", list+1);//=list[1]주소값
printf("address of list + 2 \t= %p\n", list+2);//=list[2]주소값
printf("address of list + 3 \t= %p\n", list+3);//=list[3]주소값
printf("address of list + 4 \t= %p\n", list+4);//=list[4]주소값
printf("address of list[4] \t= %p\n", &list[4]);//list[4]주소값
free(plist[0]);//메모리 해제
}
