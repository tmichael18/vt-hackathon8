#include "rational.hpp"

Rational::Rational(int n, int d) : num(n), den(d){};

double Rational::toDouble() const{
  return static_cast<double>(num) / static_cast<double>(den);
}

int Rational::numerator() const { return num; }

int Rational::denominator() const { return den; }

Rational mult(const Rational &a, const Rational &b) {

  return Rational(a.numerator() * b.numerator(),
                  a.denominator() * b.denominator());
}

Rational div(const Rational &a, const Rational &b) {

  return Rational(a.numerator() * b.numerator(),
		  a.denominator() * b.denominator());
}
