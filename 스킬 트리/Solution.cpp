#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> m;
    
    for (int i=0; i<skill.size(); i++) {
        m.emplace(skill[i], i+1);
    }
    
    for (auto str: skill_trees) {
        int flag = 1;
        bool judge = true;
        for (int i=0; i<str.size(); i++) {
            if (m[str[i]] > flag) {
                judge = false;
                break;
            }
            else if (m[str[i]] == flag) {
                flag++;
                continue;
            }
        }
        if (judge) answer++;
    }
    
    return answer;
}
