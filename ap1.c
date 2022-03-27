#include <stdio.h>
#include <stdlib.h>
int main()
{
int list[5]; //크기 5짜리의 배열을 만든다.
int *plist[5] = {NULL,};//주소값을 저장하는 배열을 만든다.
plist[0] = (int *)malloc(sizeof(int));//malloc을 사용하여서 int만큼의 주소를 할당해준다.
list[0] = 1;//list[0]의 값을 1로
list[1] = 100;//list[1]의 값을 100으로
*plist[0] = 200;//plist[0]의 내용 값을 200으로
printf("[----- [박성준] [2021040026] -----]\n");
printf("value of list[0] = %d\n", list[0]); //list[0]의 값을 1
printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소 
printf("value of list = %p\n", list);//= list의 주소 
printf("address of list (&list) = %p\n", &list);//list의 주소 
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); //list[1]의 값 100
printf("address of list[1] = %p\n", &list[1]);//list[1]의 주소 
printf("value of *(list+1) = %d\n", *(list + 1));//list[1]의 값 
printf("address of list+1 = %p\n", list+1);//list[1]의 주소
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]의 값 200
printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소
printf("&plist = %p\n", &plist);//plist의 주소 = plist[0]의 주소
printf("plist = %p\n", plist);//plist값 = plist의 주소 = plist[0]의 주소
printf("plist[0] = %p\n", plist[0]);//plist[0]의 값 (스택)
printf("plist[1] = %p\n", plist[1]);//plist[1]의 값 (스택)
printf("plist[2] = %p\n", plist[2]);//plist[2]의 값 (스택)
printf("plist[3] = %p\n", plist[3]);//plist[3]의 값 (스택)
printf("plist[4] = %p\n", plist[4]);//plist[4]의 값 (스택)
free(plist[0]);//메모리 해제
}
