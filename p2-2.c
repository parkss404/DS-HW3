#include <stdio.h>
void print1 (int *ptr, int rows);//주소와 행을 파라미터로 하는 print1 

int main()
{
int one[] = {0, 1, 2, 3, 4};//one이라는 배열 선언
printf("[----- [박성준] [2021040026] -----]\n");
printf("one = %p\n", one);//one 주소값
printf("&one = %p\n", &one);//one 주소값
printf("&one[0] = %p\n", &one[0]);//one 주소값
printf("\n");
print1(&one[0], 5);//print1 함수, one주소와 행의 개수 5개
return 0;
}
void print1 (int *ptr, int rows);
int i;
printf("Address \t Contents\n");
for (i = 0; i < rows; i++)//행의 수 만큼 반복문을 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr+i = one[i]의 주소 , one[i]의 값
printf("\n");
}
