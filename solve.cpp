
#include <iostream>
using namespace std;

#pragma region Functions
int reversing(int num) {
	int renum=0, t=0;
	while (num > 0) {
		t = num % 10;
		num /= 10;
		renum *= 10;
		renum += t;
	}

	return renum;
}
void printdigits(int revrsed){
	while (revrsed > 0) {
		cout << revrsed % 10 << endl;
		revrsed /= 10;
	}
}
#pragma endregion

int main()
{
#pragma region Input
	int N; cin >> N;
#pragma endregion

#pragma region Output
	printdigits(reversing(N));
#pragma endregion

}
