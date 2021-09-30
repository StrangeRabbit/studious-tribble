#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;


int main(int argc, char **argv){
	if(argc != 3){
		return 0;
	}
	int N = atoi(argv[1]);
	int Exp = atoi(argv[2]);
	
	boost::multiprecision::uint512_t result = 1;
	for(unsigned int i = 0; i < Exp; i++){
		result *= N;
	}
	cout << result << endl;
	return 0;
}
