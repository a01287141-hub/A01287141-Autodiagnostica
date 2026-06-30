#include "Complejo.hpp"

Complejo::Complejo():real{0}, imaginario{0}{
}

Complejo::Complejo(double r, double i):real{r}, imaginario{i}{
}

double Complejo::getReal() const{
  return real;
}

void Complejo::setReal(double r){
  real = r;
}

double Complejo::getImaginario(){
  return imaginario;
}

void Complejo::setImaginario(double i){
  imaginario = i;
}

void Complejo::agregar(Complejo& C){
  real += C.getReal();
  imaginario += C.getImaginario();
}

Complejo Complejo::conjugado(){
  return Complejo(real, -imaginario);
}

Complejo Complejo::suma(Complejo& C){
  return Complejo(real+C.getReal(), imaginario+C.getImaginario());
}

Complejo Complejo::multiplicacion(Complejo& C){
  return Complejo(real*C.getReal()-imaginario*C.getImaginario(),real*imaginario+C.getReal()*C.getImaginario());
}

Complejo Complejo::multiEscalar(double esc){
  return Complejo(real*esc, imaginario*esc);
}

void Complejo::imprime(){
  cout<<real;
if (imaginario >= 0)
  cout<<" + "<<imaginario<<"i";
else
  cout<<" - "<<imaginario<<"i";
}

  
