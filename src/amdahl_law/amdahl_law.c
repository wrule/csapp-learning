
double amdahl_law(double a, double k) {
  return 1.0 / ((1.0 - a) + (a / k));
}

double a_amdahl_law(double a, double dst) {
  return a / ((1.0 / dst) - (1.0 - a));
}
