#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(nullptr);//자동 flush 제거 -> 속도 상승 
	
	int N;
	cin >> N;
	
	while (N--) {
        string s;
        cin >> s;

        if (s.size() >= 6 && s.size() <= 9) cout << "yes\n";
        else cout << "no\n";
    }
	
	return 0;
	
}
