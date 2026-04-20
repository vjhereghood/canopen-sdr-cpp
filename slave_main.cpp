// slave_main.cpp
#include "sdr_slave.hpp"

int main() {
    SDRSlave slave;
    slave.start();
    // Other logic
    slave.stop();
    return 0;
}