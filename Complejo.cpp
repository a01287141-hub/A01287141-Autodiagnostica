#include "Complejo.hpp"

Complejo::Complejo():real{0}, imaginario{0}{
}

Complejo::Complejo(double r, double i):real{r}, imaginario{i}{
}

double Complejo::getReal() const{
  return r;
}

void Complejo::setReal(double r){
  real = r;
}

double Complejo::getImaginario(){
  return i;
}

void Complejo::setImaginario(double i){
  imaginario = i;
}

