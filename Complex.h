#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <string>
#include <iostream>

class Complex {
 public:
  Complex();
  Complex(float real, float im);
  Complex(const Complex &other);

  float real() const;
  float imaginary() const;
  float module() const;
  float argument() const;

  Complex add(const Complex other) const;
  Complex substract(const Complex other) const;
  Complex conjugate() const;

  void stringify() const;

 protected:
  float real_;
  float im_;
  float mod_;
  float arg_;

  void compute_polar();
};

#endif  // COMPLEX_H_
