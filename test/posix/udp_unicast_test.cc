#include <gtest/gtest.h>
#include <iostream>
#include <stdexcept>

#include "include/posix/udp_unicast.h"

TEST(udp_unicast_create_invalid_throw_exception, BasicAssertions)
{
    EXPECT_THROW(posix::udp_unicast("", 0), std::runtime_error);

    std::cout << "test executed";
}