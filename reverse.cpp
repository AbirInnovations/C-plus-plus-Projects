
// 12345
// 54321

#include <iostream>
using namespace std;

int main ()
{
	int number, right_digit;
	cout<<"Enter your number"<<endl;
	cin>>number;//12345

while ( number != 0 ){

	right_digit = number % 10;//12345%10=5     1234%10=4     123%10=3   12%10=2      1%10=1
	cout<< right_digit;
	number = number / 10;//12345/10=1234     1234/10=123     123/10=12    12/10=1     1/10=0
}
return 0;
}
