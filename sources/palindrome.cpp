#include "palindrome.hpp"

#include <iostream>

auto palindrome(std::wstring const & string, std::locale const & locale) -> bool
{
    if( string.empty() ) {
        return true;
    }

    std::wstring::size_type i = 0, j =  string.size() - 1;
    while( i < j ) {
        if( !std::isalnum( string[ i ], locale ) ) {
            ++i;
            continue;
        }
        else if( !std::isalnum( string[ j ], locale ) ) {
            --j;
            continue;
        }
        else if( tolower( string[ i ], locale ) != tolower( string[ j ], locale ) ) {
            return false;
        }
        
        ++i;
        --j;
    }
    
    return true;
}
