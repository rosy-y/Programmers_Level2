#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
string fx(int i, int n) {
    char code[]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string str = "";
    
    while (i/n != 0) {
        str = code[i%n] + str;  // 순서 주의
        i /= n;
    }
    str = code[i%n] + str;
    return str;
}

string solution(int n, int t, int m, int p) {
    // n진법, 구할 숫자 갯수 t, 총 인원 m, 튜브 순서 p
    string answer = "";
    string tmp = "";
    
    for (int i=0;; i++) {
        tmp += fx(i, n);
        if (tmp.size() > t*m) break;
    }

    for (int i=p; i<t*m+p; i+=m) {
        answer += tmp[i-1];
    }
    return answer;
}
