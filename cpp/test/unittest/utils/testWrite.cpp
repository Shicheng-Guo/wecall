// All content Copyright (C) 2018 Genomics plc
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "utils/write.hpp"

BOOST_AUTO_TEST_CASE( testToStringForDoubleWithNoDecimalPart )
{
    double value = 23.0;
    BOOST_CHECK_EQUAL( "23", wecall::utils::toString( value ) );
}

BOOST_AUTO_TEST_CASE( testToStringForDoubleWithDecimalPart )
{
    double value = 23.1;
    BOOST_CHECK_EQUAL( "23.1", wecall::utils::toString( value ) );
}

BOOST_AUTO_TEST_CASE( testToStringForDoubleWithLongDecimalPart )
{
    double value = 23.1234567;
    BOOST_CHECK_EQUAL( "23.1234567", wecall::utils::toString( value ) );
}

BOOST_AUTO_TEST_CASE( testToStringForDoubleWithOnlyDecimalPart )
{
    double value = 0.0001;
    BOOST_CHECK_EQUAL( "0.0001", wecall::utils::toString( value ) );
}

BOOST_AUTO_TEST_CASE( testToStringForDoubleWithTrailingZeroes )
{
    double value = 0.01000;
    BOOST_CHECK_EQUAL( "0.01", wecall::utils::toString( value ) );
}

BOOST_AUTO_TEST_CASE( testToStringForPhred )
{
    phred_t value = 23;
    BOOST_CHECK_EQUAL( "23", wecall::utils::toString( value ) );
}
