#define BOOST_TEST_MODULE HelloTest
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(hello_world)
{
    BOOST_CHECK_EQUAL(1 + 1, 2);
}