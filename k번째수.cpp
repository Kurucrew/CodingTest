//k번째 수
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> cut;

    for (int i = 0; i < commands.size(); i++)
    {
        for (int j = (commands[i][0])-1; j < commands[i][1]; j++)
        {
            cut.push_back(array[j]);
        }
        sort(cut.begin(), cut.end());
        answer.push_back(cut[(commands[i][2]-1)]);
        cut.clear();
    }
    return answer;
}
