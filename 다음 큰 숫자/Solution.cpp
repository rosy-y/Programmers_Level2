#include <string>
#include <vector>
#include <bitset>
using namespace std;

int solution(int n) {
    int bitcnt = bitset<20>(n).count();

    int tmp = n + 1;
    while (bitset<20>(tmp).count() != bitcnt) tmp++;
    return tmp;
}
