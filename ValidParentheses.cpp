#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	char top;
	string a;
	int cnt = 0;
	stack <char> s;
 	cin >> a;
 	for(int i = 0; i < a.size(); i++){
   		if(a[i] == '('){
     		s.push(a[i]);
			cnt++;
  		} else { 
			if(a[i] == ')') {
				cnt--;
			}
     		if(s.empty()){
       			cout << "no" <<endl;
       			return 0;
     		} else {
      			top = s.top();
      			if(a[i] == ')' && top == '(') {
					s.pop();
				} else {
					cout<< "no" << endl;
        			return 0;
      			}
			}
		}
    }
	if(cnt == 0) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
}
