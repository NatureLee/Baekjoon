
//9498. ���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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


//10817. �� ���� A, B, C�� �־�����. �̶�, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int num[3] = { 0, }, i, temp, min;;

	//for�� ����ؼ� �Է¹ޱ�
	for (int k = 0; k < 3; k++)
	{
		scanf("%d", &num[k]);
	}
	//�ϳ��� ���ϰ�
	for (i = 0; i < 2; i++)
	{
		min = i;

		for (int j = i + 1; j < 3; j++)
		{
			// ������ min�� j�ְ�
			if (num[j] < num[min])
			{
				min = j;
			}
		}

		//���� ���� ���ڿ� ���� �տ� �մ� ���� �ٲ�
		temp = num[i];
		num[i] = num[min];
		num[min] = temp;

	}

	printf("%d\n", num[1]);
}