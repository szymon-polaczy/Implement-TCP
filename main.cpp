#include <iostream>
#include <bitset>
#include "tun_tap/tun_tap.hpp"

using namespace std;

//TODO: Implement this to such a level where we can connect with somethin real on the internet
//TODO: Read RFC 793
//TODO: Read RFC 1180 - A TCP/IP Tutorial
//TODO: Read RFC 7414 - Lists all functionalities that are needed to implement
//TODO: Read RFC 2398 - Some testing tools for TCP Implementers
//TODO: Read RFC 2525 - Known TCP Implementation Problems

int main() {
	tun_tap::iface* test_interface = new tun_tap::iface("tun0", tun_tap::mode::TUN);
	//int buf[2] = {0, 1504};
	char buf[1504];
	while (true) {
	cout << test_interface->read(&buf, 64) << endl;
	/*for(int i = 0; i < 1504; i++) {
		std::bitset<8> x(buf[i]);
		cout << x << endl;
	}*/
	/*unsigned short p = (buf[0] << 8) | buf[1];
	unsigned short p2 = (buf[2] << 8) | buf[3];
	cout << p << endl;
	cout << p2 << endl;*/
	}
	return 0;
}
