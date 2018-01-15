#include <cassert>
#include <regex>
#include <string>

bool is_dutch_postal_code(const std::string& s) noexcept
{
  return std::regex_match(s,
    std::regex("[[:digit:]]{4}[[:space:]][[:upper:]]{2}")
  );
}

int main()
{
  assert( is_dutch_postal_code("1234 AA"));
  assert(!is_dutch_postal_code("1234AA"));
  assert(!is_dutch_postal_code("1234 aa"));
}
