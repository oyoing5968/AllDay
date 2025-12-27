#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);//동기화 꺼서 입출력 속도 증가
	cin.tie(nullptr);//자동 flush 제거 -> 속도 상승 
	
	int M;
	cin >> M;
	
	int n = 0;
	const int ALL = (1 << 21) - 2;

    string cmd;
    int x;
    
    
    while (M--) {
        cin >> cmd;

        if (cmd == "add") {
            cin >> x;
            n |= (1 << x);
        } else if (cmd == "remove") {
            cin >> x;
            n &= ~(1 << x);
        } else if (cmd == "check") {
            cin >> x;
            cout << ((n & (1 << x)) ? 1 : 0) << '\n';
        } else if (cmd == "toggle") {
            cin >> x;
            n ^= (1 << x);
        } else if (cmd == "all") {
            n = ALL;
        } else { 
            n = 0;
        }
    }
    return 0;
	
}
