#include <string>
#include "utils/exceptions.hpp"

namespace echidna
{
namespace test
{
    std::string requireEnv( const char * variableName )
    {
        char * value = std::getenv( variableName );
        if ( value == nullptr )
        {
            throw utils::echidna_exception( std::string( "Undefined environment variable: " ) + variableName );
        }
        else
        {
            return std::string( value );
        }
    }
}
}