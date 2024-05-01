#include <gtest/gtest.h>

#include "include/ios/udp_unicast.h"

TEST(udp_unicast_create_invalid_throw_exception, BasicAssertions)
{
    ASSERT_EQ(udp_unicast("", 0), 1);
}