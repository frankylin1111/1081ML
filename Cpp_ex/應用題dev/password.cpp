#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
	int password,correct=123456,a=3;
	do {
		cin >> password;
		if (password == correct) {
			cout << "µn¤J¦¨¥\ ";
			     break;
		     } else {
			     cout << "¿ù»~±K½X" << endl;
		     }
		     } while(password != correct && --a >0);
			     return 0;
		     }
