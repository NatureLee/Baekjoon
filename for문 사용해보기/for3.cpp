
//11721. ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.
//       �� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include<iostream>
#include <stdio.h>
#include <cstring> 

using namespace std;

int main()
{

	int i = 0, j, n = 0;
	char word[100] = { 0, };

	scanf("%s", word);

	int size = strlen(word);

	while (i<size)
	{

		for (j = n; j < n + 10; j++)
		{
			printf("%c", word[j]);
			i++;

			if (i == size)
				break;
		}

		printf("\n");

		n += 10;
	}

}

//�ٸ� Ǯ��

#include<iostream>
#include <stdio.h>
#include <cstring> 

using namespace std;

int main()
{
	int i = 0, j, n = 0;
	char word[100] = { 0, };

	scanf("%s", word);

	int size = strlen(word);

	while (!word[i] == NULL)
	{

		for (j = n; j < n + 10; j++)
		{
			printf("%c", word[j]);

			i++;

			if (word[i] == NULL)
				break;

		}

		printf("\n");

		n += 10;
	}

}


// 15552. �� �׽�Ʈ���̽����� A+B�� �� �ٿ� �ϳ��� ������� ����Ѵ�.

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, a, b, i;

	cin >> T;

	for (i = 0; i < T; i++)
	{
		cin >> a >> b;

		cout << a + b << "\n";
	}

}