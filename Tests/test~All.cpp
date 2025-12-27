#include <Prettiest/Prettiest.h>
 
#define TEST "test~All"

int main() {

	log( "Running test '" TEST "'..." );

	log( "This is a normal log message." );
	warn( "This is a warning message." );
	error( "This is an error message." );

	log( "Completed test '" TEST "'." );

}