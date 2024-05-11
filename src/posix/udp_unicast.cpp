#include "include/posix/udp_unicast.h"

#include <stdexcept>
#include <arpa/inet.h>

namespace posix
{
udp_unicast::udp_unicast(std::string udp_ip, unsigned short udp_port)
{
    (void) udp_ip;
    (void) udp_port;
    
    if (udp_ip == "")
    {
        throw std::runtime_error{"Invalid UDP IP"};
    }

    struct sockaddr_in sa;

    if (inet_pton(AF_INET, udp_ip.c_str(), &(sa.sin_addr)) != 1)
    {
        throw std::runtime_error{"Invalid UDP IP"};
    }

    if (udp_port < 1)
    {
        throw std::runtime_error{"Invalid UDP Port"};
    }
}

std::string udp_unicast::get_udp_ip()
{
    return m_udp_ip;
}

unsigned short udp_unicast::get_udp_port()
{
    return m_udp_port;
}
}