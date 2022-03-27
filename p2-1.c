#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int); //sum이라는 함수 선언
float input[MAX_SIZE], answer;
int i;
int main(void)
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i; 
//반복문을 이용해서 input 값에 해당 인덱스값을 넣는다. 
printf("[----- [박성준] [2021040026] -----]\n");
printf("address of input = %p\n", input);//input값의 주소값을 출력
answer = sum(input, MAX_SIZE);//input배열과 100을 파라미터로 하는 sum값을 answer에 대입
printf("The sum is: %f\n", answer);//answer값 출력 
}
float sum(float list[], int n)
{
printf("value of list = %p\n", list);//가져온 list의 첫주소를 출력
printf("address of list = %p\n\n", &list);//list의 주소출력
int i;
float tempsum = 0;//tempsum 0값으로
for(i = 0; i < n; i++)
tempsum += list[i];//리스트 값을 반복문을 통해 계속해서 더해간다. 
return tempsum;//tempsum 값을 리턴한다. 
}
//1-99까지 더한 값이 tempsum이 된다.
