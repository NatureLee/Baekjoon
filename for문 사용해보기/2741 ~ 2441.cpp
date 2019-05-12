
//2741. 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
	int n, i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%d\n", i);
	}

	return 0;
}


//2438. 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <iostream>
using namespace std;

int main() {

	int n, i, j;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}


//2439.첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//     하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

#include <iostream>
using namespace std;

int main()
{
	int n, i, j, k;

	cin >> n;

	for (i = 0; i<n; i++)
	{
		for (j = n - 1; j>i; j--)
		{
			cout << " ";
		}
		for (k = 0; k<i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}


//2440. 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

#include <iostream>
using namespace std;

int main()
{
	int n, i, j;

	cin >> n;

	for (i = 0; i<n; i++)
	{
		for (j = n; j>i; j--)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}


//2441. 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
//      하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

#include <iostream>
using namespace std;

int main()
{
	int n, i, j, k;

	cin >> n;

	for (i = 0; i<n; i++)
	{
		for (k = 0; k<i; k++)
		{
			cout << " ";
		}
		for (j = n; j>i; j--)
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}