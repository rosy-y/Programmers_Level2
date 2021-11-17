#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";    
    string tmp = "";
    vector<int> v;
    
    for (int i=0; i<s.length(); i++) {
        tmp += s[i];  
        if (s[i] == ' ') {
            v.push_back(stoi(tmp));
            tmp.clear();
        }        
    }    
    v.push_back(stoi(tmp));  // 마지막 문자
    
    sort(v.begin(), v.end());
    answer = to_string(min_element(v)) + " " + to_string(v.back());
    return answer;
}
