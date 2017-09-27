#include <catch.hpp>

#include "palindrome.hpp"

TEST_CASE("121 -> 121", "") {
    auto is_palindrome = palindrome(L"121"); 
    REQUIRE(is_palindrome);
}

TEST_CASE("яна и аня", "") {
    auto is_palindrome = palindrome(L"яна и аня", std::locale("ru_RU.UTF-8"));
    REQUIRE(is_palindrome);
}

TEST_CASE("empty string", "") {
    auto is_palindrome = palindrome(L"");
    REQUIRE(is_palindrome);
}
