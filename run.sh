g++ main.cpp
sudo setcap cap_net_admin=eip a.out
./a.out &
pid=$!
sudo ip addr add 192.168.0.1/24 dev tun0
sudo ip link set up dev tun0
wait $pid
