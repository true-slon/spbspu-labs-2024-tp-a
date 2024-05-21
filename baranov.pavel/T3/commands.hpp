#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <vector>
#include <functional>
#include "polygon.hpp"

namespace baranov
{
  void area(std::vector< Polygon > &, std::istream &, std::ostream &);

  class AreaCounter
  {
    public:
      explicit AreaCounter(const Point &);
      double operator()(double currArea, const Point & b, const Point & c);
    private:
      Point a_;
  };
  double getArea(const Polygon & polygon);
}

#endif

