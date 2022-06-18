#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

//���簢�� �� �׸���
void Star(int a, int b)
{
	for (int i = 0; i < b; i++)//b ���ڸ�ŭ �� ��ȯ
	{
		for (int i = 0; i < a; i++)//a ���ڸ�ŭ �� ���
		{
			cout << "*";
		}
		cout << endl;
	}
}

//x ��ŭ ������ �ִ� n ���� ����
vector<long long> solution0(int x, int n) 
{
	vector<long long> answer;

	for (int i = 0; i < n; i++)
	{
		answer.push_back(x * (i + 1));
	}
	return answer;
}

//����� ����
vector<vector<int>> solution1(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
	vector<vector<int>> answer;
	vector<int> ret;
	for (int i = 0; i < arr1.size(); i++)
	{
		for (int j = 0; j < arr1[i].size(); j++)
		{
			ret.push_back(arr1[i][j] + arr2[i][j]);//����� ���� ���� ���Ϳ� �߰�
		}
		answer.push_back(ret);//������� �߰�
		ret.clear();//���� ����� ���� ���͸� ���
	}
	return answer;
}

//�ڵ��� ��ȣ ������
string solution2(string phone_number) 
{
	string answer;
	for (int i = 0; i < phone_number.length(); i++)
	{
		if (i < phone_number.length() - 4)//��ȣ�� ���ڸ� 4�� �������� * ǥ��
		{
			answer += "*";
		}
		else
		answer += phone_number[i];//���� ��ȣ ǥ��
	}
	return answer;
}

//�ϻ��� ��
bool solution3(int x) 
{
	bool answer;
	int sum = 0;
	int val;
	val = x;
	do 
	{
		sum += val % 10;
		val /= 10;
	} while (val!=0);//�� �ڸ����� ���� sum �� ����

	if (x % sum == 0)//x �� sum ���� ������ �������� ��
	{
		answer = true;
	}
	else
	{
		answer = false;
	}
	return answer;
}

//��� ���ϱ�
double solution4(vector<int> arr) 
{
	double answer = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i];//arr �����ŭ ����� ����
	}
	answer = answer / arr.size();// ����� �� arr �����ŭ ����
	return answer;
}

//�ݶ� ����
int solution5(int num) 
{
	int answer = 0;
	int count = 0;
	long ret = num;
	while (ret !=1)
	{
		if (ret % 2 == 0)
		{
			ret /= 2;
		}
		else
		{
			ret = (ret * 3) + 1;
		}
		count++;
	}
	if (count >= 500)
	{
		answer = -1;
	}
	else
	{
		answer = count;
	}
	return answer;
}

//�ִ������� �ּҰ����
int Recursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return Recursive(b, a % b);//����Լ��� ���� �ִ�����
	}
}

vector<int> solution6(int n, int m) 
{
	vector<int> answer;
	int temp;
	int ret1;
	int ret2;
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	ret1 = Recursive(n, m);
	ret2 = n * m / ret1;//�ִ������� �̿��� �ּҰ����
	answer.push_back(ret1);
	answer.push_back(ret2);
	return answer;
}

//¦���� Ȧ��
string solution7(int num) 
{
	return num % 2 == 0 ? "Even" : "Odd";
}

//���� ���� �� �����ϱ�
//vector<int> solution(vector<int> arr) 
//{
//	int min = arr[0];
//	int num = 0;
//	vector<int> answer;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i];
//			num = i;
//		}
//	}
//	arr.erase(arr.begin() + num);
//	answer = arr;
//	if (answer.size() == 0)
//	{
//		answer.push_back(-1);
//	}
//	return answer;
//}
vector<int> solution8(vector<int> arr) 
{
	vector<int> answer = arr;

	answer.erase(min_element(answer.begin(), answer.end()));

	return answer.empty() ? vector<int>(1, -1) : answer;
}

//���� ������ �Ǻ�
long long solution9(long long n) 
{
	long long answer = 0;
	if (sqrt(n) - (int)sqrt(n) != 0)
	{
		answer = -1;
	}
	else
	{
		answer = (sqrt(n) + 1) * (sqrt(n) + 1);
	}
	return answer;
}

//���� ������������ ��ġ�ϱ�
long long solution10(long long n) 
{
	long long answer = 0;
	string str;

	str = to_string(n);
	sort(str.begin(),str.end(),greater<>());
	answer = stoll(str);
	return answer;
}

//�ڿ��� ������ �迭�� �����
vector<int> solution11(long long n) 
{
	vector<int> answer;
	while (n != 0) 
	{
		answer.push_back(n % 10);
		n /= 10;
	}
	return answer;
}

//�ڸ��� ���ϱ�
int solution12(int n)
{
	int answer = 0;
	while (n != 0)
	{
		answer += n % 10;
		n /= 10;
	}
	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	cout << "Hello Cpp" << endl;

	return answer;
}

//�̻��� ���� �����
string solution13(string s) 
{
	string answer = "";
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			if (count % 2 == 0)
			{
				s[i] = toupper(s[i]);
			}
			else
			{
				s[i] = tolower(s[i]);
			}
			count++;
		}
		else
		{
			count = 0;
		}
	}
	answer = s;
	return answer;
}

//����� ��
int solution14(int n) 
{
	int answer = 0;
	int num;
	num = n;
	while (n!=0)
	{
		if (num%n == 0)
		{
			answer += n;
		}
		n--;
	}
	return answer;
}

//���� ��ȣ
string solution15(string s, int n) 
{
	string answer = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			for (int j = 0; j < n; j++)
			{
				s[i]++;
				if ((s[i] > 90 && s[i] < 97) || s[i] > 122)
				{
					s[i] -= 26;
				}
			}
		}
	}
	answer = s;
	return answer;
}

//���ڿ��� ������ �ٲٱ�
int solution16(string s) 
{
	int answer = 0;
	answer = atoi(s.c_str());
	return answer;
}

//���ڼ��ڼ�
string solution17(int n) 
{
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			answer += "��";
		}
		else
		{
			answer += "��";
		}
	}
	return answer;
}

//�Ҽ� ã��
int IsPrime(int num)
{
	for (int j = 2; j * j <= num; j++)
	{
		if (num % j == 0)
		{
			return false;
		}
	}
	return true;
}
int solution18(int n) 
{
	int answer = 0;

		for (int i = 2; i <= n; i++)
		{
			if (IsPrime(i))
			{
				answer++;
			}
		}
	return answer;
}

//���￡�� �輭�� ã��
string solution19(vector<string> seoul) 
{
	string answer = "";
	int count = 0;
	for (auto item : seoul)
	{
		if (item == "Kim")
		{
			answer = "�輭���� ";
			answer += to_string(count);
			answer += "�� �ִ�";
			break;
		}
		count++;
	}
	
	return answer;
}

//���ڿ� �ٷ�� �⺻
bool solution20(string s) 
{
	bool answer = true;
	if (s.length() == 4 || s.length() == 6)
	{
		for (auto e : s)
		{
			if (e >= '0' && e <= '9')
			{
				answer = true;
			}
			else
			{
				answer = false;
				break;
			}
		}
	}
	else
	{
		answer = false;
	}
	return answer;
}

//���ڿ� ������������ ��ġ�ϱ�
string solution21(string s) 
{
	string answer = "";
	sort(s.begin(), s.end(), greater<>());
	answer = s;
	return answer;
}

//���ڿ� �� p �� y �� ����
bool solution22(string s)
{
	bool answer = true;
	int ynum = 0;
	int pnum = 0;
	for (auto e : s)
	{
		if (e == 'y' || e == 'Y') ynum++;
		if (e == 'p' || e == 'P') pnum++;
	}
	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	cout << "Hello C pp" << endl;

	return pnum == ynum ? true : false;
}

//���ڿ� �� ������� �����ϱ�
int N;
bool MySort(string a, string b)
{
	if (a[N] == b[N])// N ��° ���ڰ� �������
	{
		return a < b;//�⺻ ����
	}
	else
	{
		return a[N] < b[N];//N ��° ���� ����
	}
}
vector<string> solution23(vector<string> strings, int n) 
{
	vector<string> answer;
	N = n;
	sort(strings.begin(), strings.end(), MySort);
	return answer;
}

void main()
{
	solution({"sdasa","sdsadsaf","sdasads"},2);
}
