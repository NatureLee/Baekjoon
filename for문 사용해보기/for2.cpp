
//1924. 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

#include<iostream>
#include <string>
using namespace std;

int main()
{
	int x, y, i, sum = 0;

	cin >> x >> y;

	string day[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	for (i = 1; i < x; i++) {

		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			sum += 31;
		}

		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			sum += 30;
		}

		else if (i == 2)
		{
			sum += 28;
		}

	}

	sum += (y - 1);

	int daycnt = sum % 7;

	cout << day[daycnt] << endl;
	return 0;
}


//8393.n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

#include<iostream>
using namespace std;

int main()
{
	int n, sum;

	cin >> n;

	sum = n*(n + 1) / 2;

	cout << sum << endl;
}

//다른 풀이

#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, i;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}


//11720.N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

#include<iostream>
using namespace std;

int main()
{
	int len, sum = 0, i, j;
	char num[100];

	scanf("%d", &len);
	scanf("%s", num);

	for (i = 0; i < len; i++)
	{
		sum += (num[i] - '0');
	}

	printf("%d", sum);
	return 0;

}
