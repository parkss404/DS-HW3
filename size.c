#include<stdio.h>
#include<stdlib.h>
int main()
{
int **x;
printf("[----- [박성준] [2021040026] -----]\n");
printf("sizeof(x) = %lu\n", sizeof(x));//x의 주소의 주소값의 크기 (int주소형)출력
printf("sizeof(*x) = %lu\n", sizeof(*x));//x의 주소값의 크기 (int주소형)출력
printf("sizeof(**x) = %lu\n", sizeof(**x));//x값의 크기 (int값)출력 
}
