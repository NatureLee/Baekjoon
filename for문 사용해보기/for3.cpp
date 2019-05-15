
//11721. 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.
//       한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.

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

//다른 풀이

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


// 15552. 각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.

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