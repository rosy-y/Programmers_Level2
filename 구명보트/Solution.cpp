#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int cnt = 0, i = 0;
    
    while (people.size() > i) {
        int last = people.back();        
        if (people[i]+last <= limit) {  // 둘이 탈 때
            cnt++;
            i++;
        }
        else cnt++;  // 혼자 타야 할 때
        people.pop_back();
    }
    
    return cnt;
}
