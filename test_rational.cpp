#include "catch.hpp"

#include "rational.hpp"

TEST_CASE("Test default constructor", "[Rational]") {

  Rational x;

  REQUIRE(x.numerator() == 0);
  REQUIRE(x.denominator() != 0);
  REQUIRE(x.toDouble() == 0.0);
}

TEST_CASE("Test custom constructor", "[Rational]") {

  Rational x(1,4);
    
  REQUIRE(x.numerator() == 1);
  REQUIRE(x.denominator() == 4);
  REQUIRE(x.toDouble() == 0.25);
}

TEST_CASE("Test multiply", "[Rational]") {

  Rational x(1,4);
  Rational y(1,2);
  
  Rational xy = mult(x,y);

  REQUIRE(xy.numerator() == 1);
  REQUIRE(xy.denominator() == 8);
  REQUIRE(xy.toDouble() == 0.125);
}

TEST_CASE("Test divide", "[Rational]") {

  Rational x(2,3);
  Rational y(3,1);
  
  Rational z = div(x,y);

  REQUIRE(z.numerator() == 2);
  REQUIRE(z.denominator() == 9);
  REQUIRE(z.toDouble() == Approx(0.222).epsilon(0.01));
}
