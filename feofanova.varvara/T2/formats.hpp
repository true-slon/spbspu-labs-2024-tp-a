#ifndef FORMATS_HPP
#define FORMATS_HPP
#include <iostream>
#include <string>
#include <cstring>
#include <bitset>
#include <iostream>

namespace feofanova
{
  struct litI
  {
    double& value;
  };
  std::istream& operator>>(std::istream& in, litI&& num);

  struct binI
  {
    unsigned long long value;
  };
  std::istream& operator>>(std::istream& in, binI&& num);

  struct binO
  {
    unsigned long long& value;
  };
  std::istream& operator<<(std::istream& in, binO&& num);

  struct StringI
  {
    std::string& str;
  };
  std::istream& operator>>(std::istream& in, StringI&& num);
}

#endif
