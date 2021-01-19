#ifndef RATIONAL_HPP
#define RATIONAL_HPP

/**
 Simple class to represent a rational number.
*/
class Rational{
public:

  /**
     Construct a rational number.

     The default value is 0.
  */
  Rational(int n = 0, int d = 1);

  /**
     Return value as a double.
  */
  double toDouble() const;

  /**
     Return the numerator.
  */
  int numerator() const;

  /**
     Return the denominator.
  */
  int denominator() const;

private:

  int num = 0;
  int den = 1;
};

/** Multiply two rational numbers a*b. */
Rational mult(const Rational & a, const Rational & b);

/** Divide two rational numbers a/b. */
Rational div(const Rational & a, const Rational & b);

#endif
