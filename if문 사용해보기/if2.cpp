
//10871. ���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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

//�ٸ� ��
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

	//�ִ밪 ���ϱ�
	//���Ŀ��� ��ġ �ű�°� ����(��ġ ������ ���ϰ� ŭ)
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

	//�Ҽ��� �ι�° �ڸ�������!
	printf("%.2f\n", avg);

	delete[] score;
}

//�ٸ� ��

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

	//�ִ밪 ���ϱ�
	//���Ŀ��� ��ġ �ű�°� ����(��ġ ������ ���ϰ� ŭ)
	for (int i = 0; i < N; i++)
	{
		if (score[i] > score[max])
		{
			max = i;
		}
	}

	for (int i = 0; i < N; i++)
	{
		// ����ȯ ����
		//��� ����? ���� �� float���� �ٲ��ְų� ����ϸ鼭 ��ü�� float������ �ٲ����
		//�̶� (float)(-��-) �̷��� ���� �� ����� �� ���Ŀ� ����ȯ �Ǵϱ� ��ҿ�
		sum += (float)score[i] / score[max] * 100;
	}

	avg = sum / N;

	//�Ҽ��� �ι�° �ڸ�������!
	printf("%.2f\n", avg);

	delete[] score;
}