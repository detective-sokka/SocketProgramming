#include <string>

namespace posix
{
class udp_unicast
{
    public:
        udp_unicast(std::string udp_ip, unsigned short udp_port);
        std::string get_udp_ip();
        unsigned short get_udp_port();
        
    private:
        std::string m_udp_ip;
        unsigned short m_udp_port;
};
}