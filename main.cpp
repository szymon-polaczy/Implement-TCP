#include <iostream>
#include "tun_tap/tun_tap.hpp"

int main() {
	tun_tap::iface* test_interface = new tun_tap::iface("tun0", tun_tap::mode::TUN);
	//int buf[2] = {0, 1504};
	char buf[2048];	
	std::cout << test_interface->read(&buf, 64);
	return 0;
}
