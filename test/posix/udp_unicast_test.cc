#include <gtest/gtest.h>
#include <iostream>
#include <stdexcept>

#include "include/posix/udp_unicast.h"

TEST(udp_unicast_create_invalid_ip_port_throws_exception, BasicAssertions)
{
    EXPECT_THROW({
        try
        {
            posix::udp_unicast("", 0);
        }
        catch(const std::runtime_error &e)
        {
            EXPECT_STREQ( "Invalid UDP IP", e.what());
            throw;
        }            
    }, std::runtime_error);

    EXPECT_THROW({
        try
        {
            posix::udp_unicast("127.0.0.1", 0);
        }
        catch(const std::runtime_error &e)
        {
            EXPECT_STREQ( "Invalid UDP Port", e.what());
            throw;
        }            
    }, std::runtime_error);

    EXPECT_THROW({
        try
        {
            posix::udp_unicast("127.abc.0.1", 1);
        }
        catch(const std::runtime_error &e)
        {
            EXPECT_STREQ( "Invalid UDP IP", e.what());
            throw;
        }            
    }, std::runtime_error);
}

TEST(udp_unicast_create_valid_ip_port_throws_nothing, BasicAssertions)
{
    EXPECT_NO_THROW(posix::udp_unicast("196.168.1.0", 22));
}