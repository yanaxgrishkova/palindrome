#include <codecvt>
#include <iostream>

#include "palindrome.hpp"

auto utf8string_towstring(std::string const & input) -> std::wstring
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    return converter.from_bytes( input.c_str() );
}

int main()
{
    for( std::string string; std::getline( std::cin, string ); ) {
        
        for( size_t i = 0; i < string.size(); ++i ) {
            std::cout << std::bitset<sizeof(char) * 8>( string[ i ] ) << std::endl;
        }
        
        if( palindrome( utf8string_towstring(string), std::locale("ru_RU.UTF-8") ) ) {
            std::cout << "1\n";
        }
        else {
            std::cout << "0\n";
        }
    }
}
