#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

//직사각형 별 그리기
void Star(int a, int b)
{
	for (int i = 0; i < b; i++)//b 숫자만큼 열 변환
	{
		for (int i = 0; i < a; i++)//a 숫자만큼 별 출력
		{
			cout << "*";
		}
		cout << endl;
	}
}

//x 만큼 간격이 있는 n 개의 숫자
vector<long long> solution0(int x, int n) 
{
	vector<long long> answer;

	for (int i = 0; i < n; i++)
	{
		answer.push_back(x * (i + 1));
	}
	return answer;
}

//행렬의 덧셈
vector<vector<int>> solution1(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
	vector<vector<int>> answer;
	vector<int> ret;
	for (int i = 0; i < arr1.size(); i++)
	{
		for (int j = 0; j < arr1[i].size(); j++)
		{
			ret.push_back(arr1[i][j] + arr2[i][j]);//행렬의 덧셈 값을 벡터에 추가
		}
		answer.push_back(ret);//결과값에 추가
		ret.clear();//다음 계산을 위해 벡터를 비움
	}
	return answer;
}

//핸드폰 번호 가리기
string solution2(string phone_number) 
{
	string answer;
	for (int i = 0; i < phone_number.length(); i++)
	{
		if (i < phone_number.length() - 4)//번호의 뒷자리 4개 이전까지 * 표시
		{
			answer += "*";
		}
		else
		answer += phone_number[i];//이후 번호 표시
	}
	return answer;
}

//하샤드 수
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
	} while (val!=0);//각 자릿수의 값을 sum 에 더함

	if (x % sum == 0)//x 가 sum 으로 나누어 떨어지면 참
	{
		answer = true;
	}
	else
	{
		answer = false;
	}
	return answer;
}

//평균 구하기
double solution4(vector<int> arr) 
{
	double answer = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i];//arr 사이즈만큼 결과에 더함
	}
	answer = answer / arr.size();// 결과를 평 arr 사이즈만큼 나눔
	return answer;
}

//콜라스 추측
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

//최대공약수와 최소공배수
int Recursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return Recursive(b, a % b);//재귀함수를 통한 최대공약수
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
	ret2 = n * m / ret1;//최대공약수를 이용한 최소공배수
	answer.push_back(ret1);
	answer.push_back(ret2);
	return answer;
}

//짝수와 홀수
string solution7(int num) 
{
	return num % 2 == 0 ? "Even" : "Odd";
}

//제일 작은 수 제거하기
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

//정수 제곱근 판별
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

//정수 내림차순으로 배치하기
long long solution10(long long n) 
{
	long long answer = 0;
	string str;

	str = to_string(n);
	sort(str.begin(),str.end(),greater<>());
	answer = stoll(str);
	return answer;
}

//자연수 뒤집어 배열로 만들기
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

//자릿수 더하기
int solution12(int n)
{
	int answer = 0;
	while (n != 0)
	{
		answer += n % 10;
		n /= 10;
	}
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello Cpp" << endl;

	return answer;
}

//이상한 문자 만들기
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

//약수의 합
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

//시저 암호
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

//문자열을 정수로 바꾸기
int solution16(string s) 
{
	int answer = 0;
	answer = atoi(s.c_str());
	return answer;
}

//수박수박수
string solution17(int n) 
{
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			answer += "수";
		}
		else
		{
			answer += "박";
		}
	}
	return answer;
}

//소수 찾기
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

//서울에서 김서방 찾기
string solution19(vector<string> seoul) 
{
	string answer = "";
	int count = 0;
	for (auto item : seoul)
	{
		if (item == "Kim")
		{
			answer = "김서방은 ";
			answer += to_string(count);
			answer += "에 있다";
			break;
		}
		count++;
	}
	
	return answer;
}

//문자열 다루기 기본
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

//문자열 내림차순으로 배치하기
string solution21(string s) 
{
	string answer = "";
	sort(s.begin(), s.end(), greater<>());
	answer = s;
	return answer;
}

//문자열 내 p 와 y 의 개수
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
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello C pp" << endl;

	return pnum == ynum ? true : false;
}

//문자열 내 마음대로 정렬하기
int N;
bool MySort(string a, string b)
{
	if (a[N] == b[N])// N 번째 글자가 같을경우
	{
		return a < b;//기본 정렬
	}
	else
	{
		return a[N] < b[N];//N 번째 기준 정렬
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
