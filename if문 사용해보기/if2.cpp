
//10871. 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int N, X;
	//int num[100] = { 0, };
	scanf("%d", &N);
	scanf("%d", &X);

	int *num = new int[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < N; j++)
	{
		if (num[j] < X)
		{
			printf("%d ", num[j]);
		}
	}

	printf("\n");

	delete num;
}

//다른 답
#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n, x, a;
	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a < x)
		{
			cout << a << " ";
		}
	}
	cout << endl;
}


//1546.

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int N, max = 0;
	float sum = 0, avg = 0;

	scanf("%d", &N);

	int *score = new int[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}

	//최대값 구하기
	//정렬에서 위치 옮기는것 제외(위치 변경은 부하가 큼)
	for (int i = 0; i < N; i++)
	{
		if (score[i] > score[max])
		{
			max = i;
		}
	}

	for (int i = 0; i < N; i++)
	{
		sum += (float)score[i] / score[max] * 100;
	}

	avg = (float)(sum / N);

	//소수점 두번째 자리까지만!
	printf("%.2f\n", avg);

	delete[] score;
}

//다른 답

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int N, max = 0;
	float sum = 0, avg = 0;

	scanf("%d", &N);

	int *score = new int[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}

	//최대값 구하기
	//정렬에서 위치 옮기는것 제외(위치 변경은 부하가 큼)
	for (int i = 0; i < N; i++)
	{
		if (score[i] > score[max])
		{
			max = i;
		}
	}

	for (int i = 0; i < N; i++)
	{
		// 형변환 문제
		//모든 숫자? 들을 다 float으로 바꿔주거나 계산하면서 전체를 float형으로 바꿔야함
		//이때 (float)(-식-) 이렇게 쓰면 식 계산이 다 된후에 형변환 되니까 노소용
		sum += (float)score[i] / score[max] * 100;
	}

	avg = sum / N;

	//소수점 두번째 자리까지만!
	printf("%.2f\n", avg);

	delete[] score;
}