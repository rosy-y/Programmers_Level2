#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int count = 0, index = 1;
    
    while (index <= n) {
        int sum = 0;
        for (int i=index; i<=n; i++) {
            sum += i;
            if (sum == n) count++;
            else if (sum > n) break;  // 효율성 테스트 추가
        }
        index++;
    }
    
    return count;
}
