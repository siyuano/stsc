#include <test_registrator.h>

#include <boost/test/unit_test.hpp>

using boost::unit_test_framework::test_suite;
using boost::unit_test_framework::test_case;

test_suite* init_unit_test_suite( int argc, char* argv[] )
{
	test_suite* ts1 = BOOST_TEST_SUITE( "stsc common tests" );
	boost::unit_test::unit_test_log.set_threshold_level( boost::unit_test::log_messages );

	using namespace stsc::tests_::common;

	ts1->add( BOOST_TEST_CASE( &bar_types_possible_values_tests ) );
	ts1->add( BOOST_TEST_CASE( &specialized_bar_types_tests ) );
	ts1->add( BOOST_TEST_CASE( &bar_type_constructor_tests ) );
	ts1->add( BOOST_TEST_CASE( &bar_type_ostream_operator_tests ) );

	ts1->add( BOOST_TEST_CASE( &signal_subtypes_tests ) );
	ts1->add( BOOST_TEST_CASE( &close_signal_constructor_tests ) );
	ts1->add( BOOST_TEST_CASE( &close_signal_type_tests ) );
	ts1->add( BOOST_TEST_CASE( &open_signal_constructor_tests ) );
	ts1->add( BOOST_TEST_CASE( &open_signal_type_tests ) );
	ts1->add( BOOST_TEST_CASE( &signal_ostream_operator_tests ) );

	return ts1;
}

