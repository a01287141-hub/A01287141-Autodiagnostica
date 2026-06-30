#pragma once // previene múltiples definiciones como las guardas

class Complejo
{
    public:
        Complejo();
        Complejo(double r, double i);
        //~Complejo();
        double getReal() const;
        void setReal(double r);
        double getImaginario() const;
        void setImaginario(double i);
        void agregar(Complejo& C);
        Complejo conjugado();
        Complejo suma(Complejo& C);
        Complejo multiplicacion(Complejo& C);
        Complejo multiEscalar(double);
        void imprime();    
    private:
        double real, imaginario;
};
