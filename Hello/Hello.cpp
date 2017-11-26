#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <string>
#include <bitset>
//using namespace std;



enum Colors {
	black = 67,
	white,
	brown,
	blue
};
//const float my_PI = 3.14123;
//constexpr float TwoPi() { return 2 * my_PI;  }
typedef unsigned short SMALL_POS_INT;


void MultiplyNumbers(){

	Colors myColors[5] = { blue, white, brown, brown, blue };
	SMALL_POS_INT mySmallInt = 23;
	int myInitIntsA[3] = {};

	std::fill_n(myInitIntsA, 3, mySmallInt);
	int myInitIntsB[3] = { 0 };
	int myInitIntsC[3] = { 5 };


	myColors[1] = black;

}

void VectorMessing() {
	float twoPi = M_PI * 2;
	std::vector<int> dynArray(3);	// Dynamic array of int

	dynArray[0] = 365;
	dynArray[1] = -421;
	dynArray[2] = 789;

	std::cout << "Number of integers in the array is: " << dynArray.size() << std::endl;

	SMALL_POS_INT mySmallInt = 23;

	// Now to add some new values to the array
	dynArray.push_back(mySmallInt);
	dynArray.push_back(mySmallInt / 2);

	std::cout << "Now we have this many elements in the array: " << dynArray.size() << std::endl;
}


void StringMessing() {
	using std::cout;
	using std::cin;
	using std::getline;
	using std::string;

	char myOldCChar[] = { 'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\0' };
	std::vector<char> charVect = { 'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\0' };
	//cout << "To begin we have " << charVect;

	// 你們都認識什麽做。好不好？.
	string greetString("Hello std::string!");
	cout << greetString << std::endl;

	cout << "我朋友、您好!" << std::endl;
	cout << "Please enter a line of text: " << std::endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "Enter another string: " << std::endl;
	string secondLine;
	getline(cin, secondLine);

	cout << "Result of concatenation is: " << firstLine + secondLine << std::endl;
	cout << "Length of the concatenated string is " << firstLine.length() + secondLine.length() << std::endl;
	cout << "Using strlen we get length of: " << strlen(myOldCChar) << " for " << myOldCChar << std::endl;

	cout << "Using the sizeof operator we get: " << sizeof(myOldCChar) / sizeof(myOldCChar[0]) << std::endl;


}


void LogicMessing() {
	using namespace std;
	cout << "Enter a numberS yeas (0-255):";
	unsigned short inputNum = 0;
	cin >> inputNum;


	bitset<8> inputBits(inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	
	bitset<8> bitwiseNOT(~inputNum);
	cout << "Logical NOT~" << endl;
	cout << "~" << \
		inputBits << " = " << bitwiseNOT << \
		endl;


	cout << "Logical AND, & with 00001111" << endl;
	bitset<8> bitwiseAND = (0x0F & inputNum);	// 0x0F is hex for 0001111
	cout << "0001111 & " << inputBits << " = " << bitwiseAND << endl;


	cout << "Logical OR, | with 00001111" << endl;
	bitset<8> bitwiseOR = (0x0F | inputNum);	// 0x0F is hex for 0001111
	cout << "0001111 | " << inputBits << " = " << bitwiseOR << endl;


	cout << "Logical XOR, ^ with 00001111" << endl;
	bitset<8> bitwiseXOR = (0x0F ^ inputNum);	// 0x0F is hex for 0001111
	cout << "0001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

	int myHexVal = 0x0A;
	int myBinVal = 0b00000110;

	cout << "Hex value is: " << myHexVal << endl;	// Should be 10
	cout << "Bin value is: " << myBinVal << endl;	// Should be 6

	int half = myBinVal >> 1;
	int quart = myBinVal >> 2;
	int whatis = myBinVal >> 3;
}

int main(){
	using namespace std;
	LogicMessing();


	return 0;
}


