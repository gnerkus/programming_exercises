#include "space_age.h"

space_age::space_age::space_age(double seconds) {
  this->secondsCount = seconds;
}

/*
const is needed because of this error on Exercism;

error: passing 'const space_age::space_age' as 'this' argument discards
qualifiers [-fpermissive]

This is because the tests define the class instance as const:

const space_age::space_age age(1000000)
*/
double space_age::space_age::seconds() const { return this->secondsCount; }

double space_age::space_age::on_earth() const {
  return this->secondsCount / EARTH_SECONDS;
}

double space_age::space_age::on_mercury() const {
  return this->secondsCount / MECURY_SECONDS;
}

double space_age::space_age::on_venus() const {
  return this->secondsCount / VENUS_SECONDS;
}

double space_age::space_age::on_mars() const {
  return this->secondsCount / MARS_SECONDS;
}

double space_age::space_age::on_jupiter() const {
  return this->secondsCount / JUPITER_SECONDS;
}

double space_age::space_age::on_saturn() const {
  return this->secondsCount / SATURN_SECONDS;
}

double space_age::space_age::on_uranus() const {
  return this->secondsCount / URANUS_SECONDS;
}

double space_age::space_age::on_neptune() const {
  return this->secondsCount / NEPTUNE_SECONDS;
}