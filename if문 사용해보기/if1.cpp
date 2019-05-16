
//9498. 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int score;

	scanf("%d", &score);

	if (score >= 90 && score <= 100)
		printf("A\n");

	else if (score >= 80 && score <= 89)
		printf("B\n");

	else if (score >= 70 && score <= 79)
		printf("C\n");

	else if (score >= 60 && score <= 69)
		printf("D\n");

	else
		printf("F\n");
}


//10817. 세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int num[3] = { 0, }, i, temp, min;;

	//for문 사용해서 입력받기
	for (int k = 0; k < 3; k++)
	{
		scanf("%d", &num[k]);
	}
	//하나씩 비교하고
	for (i = 0; i < 2; i++)
	{
		min = i;

		for (int j = i + 1; j < 3; j++)
		{
			// 작으면 min에 j넣고
			if (num[j] < num[min])
			{
				min = j;
			}
		}

		//가장 작은 숫자와 제일 앞에 잇던 숫자 바꿈
		temp = num[i];
		num[i] = num[min];
		num[min] = temp;

	}

	printf("%d\n", num[1]);
}