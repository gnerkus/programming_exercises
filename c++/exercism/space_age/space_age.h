#pragma once

namespace space_age {
const double EARTH_SECONDS = 31557600;
const double MECURY_SECONDS = 0.2408467 * EARTH_SECONDS;
const double VENUS_SECONDS = 0.61519726 * EARTH_SECONDS;
const double MARS_SECONDS = 1.8808158 * EARTH_SECONDS;
const double JUPITER_SECONDS = 11.862615 * EARTH_SECONDS;
const double SATURN_SECONDS = 29.447498 * EARTH_SECONDS;
const double URANUS_SECONDS = 84.016846 * EARTH_SECONDS;
const double NEPTUNE_SECONDS = 164.79132 * EARTH_SECONDS;

class space_age {
public:
  space_age(double seconds);

  double seconds() const;
  double on_earth() const;
  double on_mercury() const;
  double on_venus() const;
  double on_mars() const;
  double on_jupiter() const;
  double on_saturn() const;
  double on_uranus() const;
  double on_neptune() const;

private:
  double secondsCount;
};
} // namespace space_age
