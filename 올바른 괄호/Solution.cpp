#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    int flag = 0;  // check
    
    for(int i=0; i<s.size(); i++) {
        if (s[i] == '(') flag++;
        else flag--;
        
        if (flag < 0) answer = false;
    }
    
    if(flag != 0) answer = false;
    return answer;
}
