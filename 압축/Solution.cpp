#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> m;
    int dIdx;
    string tmp = "";
    
    for(dIdx=1; dIdx<27; dIdx++){
        tmp = 'A' + dIdx-1;
        m.emplace(tmp, dIdx);
    }
    
    for(int i=0; i<msg.size(); i++) {
        string tmp = "";
        tmp += msg[i];
        int findIdx = i, cnt = 0;
               
        while (m.find(tmp) != m.end()) {  
            cnt++;
            findIdx++;
            tmp += msg[findIdx];  // 여기서 tmp = KA
        }        
        i += cnt - 1;  // 재시작 위치 변경
        m.emplace(tmp, dIdx++);
        tmp.pop_back();  // KA는 새롭게 사전에 추가한 뒤 푸쉬백은 K를 해야함
        answer.push_back(m[tmp]);
    }
    
    return answer;
}
