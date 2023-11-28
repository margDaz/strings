#include <cmath> //for sqrt and acos
#include <string>

#include "Complex.h"

using std::to_string;

Complex::Complex() {
  real_ = 0.;
  im_ = 0.;
  compute_polar();
}

Complex::Complex(float real, float im) {
  real_ = real;
  im_ = im;
  compute_polar();
}

Complex::Complex(const Complex &other) = default;

float Complex::real() const {
  return real_;
}

float Complex::imaginary() const {
  return im_;
}

float Complex::module() const {
  return mod_;
}

float Complex::argument() const {
  return arg_;
}

Complex Complex::add(const Complex other) const {
  return Complex(real_ + other.real_, im_ + other.im_);
}

Complex Complex::substract(const Complex other) const {
  return Complex(real_ - other.real_, im_ - other.im_);
}

Complex Complex::conjugate() const {
  return Complex(real_, -im_);
}

void Complex::stringify() const{
  std::cout << "(" << real_ << ", " << im_ << ")";
}

void Complex::compute_polar() {
  // Compute module
  mod_ = sqrt(real_*real_ + im_* im_);

  // Compute argument
  if (real_ == 0. && im_ == 0.) {
    arg_ = 0.;
  } else {
    arg_ = (im_ < 0) ? -acos(real_ / mod_)
                     : acos(real_ / mod_);
  }
}
