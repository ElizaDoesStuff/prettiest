cmake_minimum_required( VERSION 3.30 )
project( prettiest.tests )

list(
	APPEND
	PRETTIEST_TESTS
	All
)

list( LENGTH PRETTIEST_TESTS PRETTIEST_TEST_COUNT )
if ( ${PRETTIEST_TEST_COUNT} GREATER 0 )

	foreach( TEST ${PRETTIEST_TESTS} )
		add_executable( ${TEST}.test test~${TEST}.cpp )
		target_link_libraries( ${TEST}.test prettiest )
	endforeach()

endif()
