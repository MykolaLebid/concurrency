#include <iostream>
#include <thread>
#include <chrono>
int main(){
	int a{10};
	int & rx{a};
	std::cout << "a=" << a << "rx=" << rx << std::endl;
	rx = 9;

	std::cout << "a=" << a  << "rx=" << rx << std::endl;
        const int & rx_2{a} ;

	std::cout << "a=" << a  << "rx_2=" << rx_2 << std::endl;
        a=8;
	std::cout << "a=" << a  << "rx_2=" << rx_2 << std::endl;

	std::cout << "number of possible threads " << std::thread::hardware_concurrency() << std::endl;
	return 0;
};
