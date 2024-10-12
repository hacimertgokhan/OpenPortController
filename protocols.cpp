#include <iostream>
#include <string> // std::string
#include <vector> // std::vector
#include <sstream>  // std::istringstream

class OPCLogger {
    public:
    static void log(const std::string& str) {
        std::cout << "[OPC]:" + str << std::endl;
    }
};

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);

    while (std::getline(tokenStream,token,delimiter)) {
        tokens.push_back(token);
    }

    return tokens;

}

bool operator==(const std::string & lhs, int rhs);

int main() {
    OPCLogger::log(" Welcome to Open Port Controller v1");
    OPCLogger::log("opc -l -tcp : List all open tcp ports.");
    OPCLogger::log("opc -l -udp : List all open udp ports.");
    std::string cmd;
    std::getline(std::cin, cmd);
    std::vector<std::string> parts = split(cmd, ' ');
    std::string main_cmd = parts[0];
    std::string subarg = parts[1];
    if(main_cmd == "opc") {
        if (subarg == "-l") {
            std::cout << "-l Subargument" << std::endl;
        } else if (subarg == "-c") {
            std::cout << "-c Subargument" << std::endl;
        } else {
            OPCLogger::log(" Welcome to Open Port Controller v1");
            OPCLogger::log("opc -l -tcp : List all open tcp ports.");
            OPCLogger::log("opc -l -udp : List all open udp ports.");
        }
    } else {
        OPCLogger::log(" Welcome to Open Port Controller v1");
        OPCLogger::log("opc -l -tcp : List all open tcp ports.");
        OPCLogger::log("opc -l -udp : List all open udp ports.");
    }
    return 0;
}
