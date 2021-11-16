#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    int v[100001] = {0, 1};
    
    for (int i=2; i<=n; i++) {
        v[i] = (v[i-1] + v[i-2]);
        v[i] = v[i] % 1234567;
    }
    
    return v[n];
}
