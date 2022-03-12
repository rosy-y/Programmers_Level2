#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;  // 재풀이

int numIdx(const string& str){
    for (int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='9')
            return i;
    }
}

char alpha(char c) {
    if ('a'<=c && c<='z') c -= 32;
        return c;
}

string getHead(string str){
    string tmp = str.substr(0, numIdx(str));
    transform(tmp.begin(), tmp.end(), tmp.begin(), alpha);
    return tmp;
}

int getNum(string str) {
    return stoi(str.substr(numIdx(str)));
}

bool cmpNum(string a, string b) {
    return getNum(a) < getNum(b);
}
bool cmpHead(string a, string b) {
    return getHead(a) < getHead(b);
}

vector<string> solution(vector<string> files) {    
    stable_sort(files.begin(), files.end(), cmpNum);
    stable_sort(files.begin(), files.end(), cmpHead);
    return files;
}
