
//2741. �ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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


//2438. ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

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


//2439.ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//     ������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

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


//2440. ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����

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


//2441. ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
//      ������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

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