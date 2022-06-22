#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>

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

//�� ���� ������ ��
long long solution24(int a, int b) 
{
	long long answer = 0;
	long long min = 0;
	long long max = 0;
	if (a == b)return a;//a �� b �� ������ Ȯ��
	else if (a > b) 
	{
		max = a; min = b;
	}
	else {
		max = b; min = a;
	}
	for (long long i = min; i <= max; i++)
	{
		answer += i;
	}
	
	return answer;
}

//������ �������� ���� �迭
vector<int> solution25(vector<int> arr, int divisor) 
{
	vector<int> answer;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0)
		{
			answer.push_back(arr[i]);
		}
	}
	if (answer.empty())
	{
		answer.push_back(-1);
	}
	return answer;
}

//���� ���ڴ� �Ⱦ�
vector<int> solution26(vector<int> arr)
{
	vector<int> answer;
	answer.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] != arr[i - 1])
		{
			answer.push_back(arr[i]);
		}
	}
	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	cout << "Hello Cpp" << endl;

	return answer;
}

//��Ʈ����
int solution27(string dartResult) 
{
	int answer = 0;
	int num = 0;
	int score = 0;
	int temp = 0;
	vector<int> vec;
	for (int i = 0; i < dartResult.size(); i++)
	{
		if (dartResult[i] >= '0' && dartResult[i] <= '9')
		{
			if (dartResult[i + 1] == '0')
			{
				score = 10;
				i++;
			}
			else {
				score = atoi(&dartResult[i]);
			}
		}
		else {
			switch (dartResult[i])
			{
			case 'S':
				vec.push_back(score);
				break;
			case 'D':
				vec.push_back(pow(score, 2.0f));
				break;
			case 'T':
				vec.push_back(pow(score, 3.0f));
				break;
			case '*':
				temp = vec.back();
				vec.pop_back();
				vec.back() = vec.back() * 2;
				vec.push_back((temp * 2));
				break;
			case '#':
				vec.back() = vec.back() * (-1);
				break;
			}
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		answer += vec[i];
	}
	return answer;
}

//��� ���� ��������
string solution28(string s) 
{
	int l;
	string answer = "";
	if (s.length() % 2 == 0)
	{
		l = s.length() / 2;
		answer = { s[l - 1], s[l] };
	}
	else
	{
		l = s.length() / 2;
		answer = s[l];
	}
	return answer;
}

//�������
vector<string> solution29(int n, vector<int> arr1, vector<int> arr2) 
{
	vector<string> answer;
	string bnum;
	string ret;
	long b;
	for (int i = 0; i < n; i++)
	{
		b = stol(bitset<32>(arr1[i] | arr2[i]).to_string());
		bnum = to_string(b);
		if (bnum.length() < n);
		{
			for (int i = bnum.size(); i < n; i++)
			ret += ' ';
		}
		for (int i = 0; i < bnum.length(); i++)
		{
			bnum[i] == '1' ? ret += '#' : ret += ' ';
		}
		answer.push_back(ret);
		ret.clear();
	}

	return answer;
}

//������ �ݾ� ����ϱ�
long long solution30(int price, int money, int count)
{
	long answer = 0;
	long sum = 0;
	for (int i = 1; i <= count; i++)
	{
		sum += price * i;
	}
	answer = money - sum;
	return answer <= 0 ? answer * (-1) : answer = 0;
}

//�������� 1�� �Ǵ� ��
int solution31(int n) 
{
	int answer = 0;
	int count = 1;
	vector<int> ret = {};
	while (ret.empty())
	{
		if (n % count == 1)
		{
			ret.push_back(count);
		}
		count++;
	}
	return ret.back();
}

//�ּ����簢��
int solution32(vector<vector<int>> sizes)
{
	int answer = 0;
	int x = 0;
	int y = 0;
	for (int i = 0; i < sizes.size(); i++)
	{
		sort(sizes[i].begin(), sizes[i].end());
		x < sizes[i][0] ? x = sizes[i][0] : x;
		y < sizes[i][1] ? y = sizes[i][1] : y;
	}
	return x * y;
}

//2016��
string solution33(int a, int b) 
{
	string answer = "";
	vector<string> Dname{ "SUN","MON","TUE","WED","THU","FRI","SAT"};
	int day = 0;
	for (int i = 1; i < a; i++)
	{
		switch (i)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			day += 31;
			break;
		case 2:
			day += 29;
			break;
		case 4:case 6:case 9:case 11:
			day += 30;
			break;
		}
	}
	day += (b - 1);
	day = (5 + day) % 7;
	return Dname[day];
}

//�� �� �̾Ƽ� ���ϱ�
vector<int> solution34(vector<int> numbers)
{
	vector<int> answer;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			answer.push_back(numbers[i] + numbers[j]);
		}
	}
	sort(answer.begin(), answer.end());
	answer.erase(unique(answer.begin(), answer.end()), answer.end());
	return answer;
}

//����
int solution35(vector<int> d, int budget) 
{
	int answer = 0;
	int sum = 0;
	int count = 0;
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++)
	{
		sum += d[i];
		if (sum <= budget)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return count;
}

//3���� ������
int solution36(int n)
{
	int answer = 0;
	string str;
	while (n!=0)
	{
		str += to_string(n % 3);
		n /= 3;
	}
	int len = str.length()-1;
	for (auto i : str)
	{
		answer += atoi(&i) * pow(3.0f, len);
		len--;
	}
	return answer;
}

//����� ������ ����
int solution37(int left, int right)
{
	int answer = 0;
	int count = 0;
	for (int i = left; i <= right; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		count % 2 == 0 ? answer += i : answer -= i;
		count = 0;
	}
	return answer;
}

//������
bool compare(vector<float>& a, vector<float>& b)
{
	if (a[0] == b[0])return a < b;
	else return a > b;
}
vector<int> solution38(int N, vector<int> stages) 
{
	vector<int> answer;
	vector<vector<float>> vec;
	int chell;
	int f = 0;
	float fail = 0.0f;
	for (int i = 1; i <= N; i++)
	{
		chell = stages.size();
		int len = chell;
		for (int j = 0; j < len; j++)
		{
			if (stages[j] <= i)
			{
				stages.erase(stages.begin() + j);
				f++;
				len--;
				j--;
			}
		}
		if (chell == 0)fail = 0;
		else fail = (float)f / chell;
		f = 0;
		vec.push_back({ fail,(float)i });
	}
	sort(vec.begin(), vec.end(),compare);
	for (auto i : vec)
	{
		answer.push_back(i[1]);
	}
	return answer;
}

//���ϸ�
int solution39(vector<int> nums)
{
	int answer = 0;
	int choose = 0;
	choose = nums.size() / 2;
	sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()),nums.end());
	for (int i = 0; i < choose; i++)
	{
		if (nums[i]==nums.back())
		{
			answer++;
			break;
		}
		answer++;
	}
	return answer;
}

//ü����
int solution40(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = 0;
	int arr[35] = {0, };
	for (int i : reserve)arr[i] = 1;
	for (int i : lost)arr[i] += -1;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == -1)
		{
			if (arr[i - 1] == 1)
			{
				arr[i - 1] = arr[i] = 0;
			}
			else if (arr[i + 1] == 1)
			{
				arr[i + 1] = arr[i] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != -1)answer++;
	}
	return answer;
}

void main()
{
	solution(5, { 2,4 }, { 3 });
}
