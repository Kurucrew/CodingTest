#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());//결과의 크기 설정
    stack<int> st;//시간의 스택
    for (int i = 0; i < prices.size(); i++)
    {
        while (!st.empty()&&prices[st.top()]>prices[i])//0초가 아니고 스택 마지막 가격이 현재 시간의 가격보다 크면 반복 
        {
            answer[st.top()] = i - st.top();//현재 시간에서 마지막 시간을 뺀 유지시간을 결과에 입력
            st.pop();
        }
        st.push(i);//시간의 경과를 스택에 삽입
    }

    while (!st.empty())
    {
        answer[st.top()] = prices.size() - 1 - st.top();// 배열크기-1 = 최종 시간 // 최종시간-스택의 시간 = 경과시간 해당 값을 결과에 입력
        st.pop();
    }
    return answer;
}
