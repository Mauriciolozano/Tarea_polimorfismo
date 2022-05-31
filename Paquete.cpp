#include "Paquete.h"

// definicion de funciones 

Paquete::Paquete (string nomR, string dirR, string cdR, string estR, int cpR, string nomD,
    string dirD, string cdD, string estD, int cpD, double cos, double l, double a, double p, double pe, double cpk) : 
    Envios (nomR, dirR, cdR, estR, cpR, nomD, dirD, cdD, estD, cpD, cos)
{
  largo = l;
  ancho = a;
  profundidad = p;
  costoporkilo = cpk;
  peso = pe;
}

void Paquete::setLargo(double l)
{
  largo = l;
}

double Paquete::getLargo()
{
  return largo;
}

void Paquete::setAncho(double a)
{
  ancho=a;
}

double Paquete::getAncho()
{
  return ancho;
}

void Paquete::setProfundidad(double p)
{
  profundidad = p;
}

double Paquete::getProfundidad()
{
  return profundidad;
}

void Paquete::setPeso(double pe)
{
  if (pe >= 0)
  {
      peso = pe;
  }
  else {
      cout << "Error el peso no puede ser 0 o menor a 0";
  }
}

double Paquete::getPeso()
{
  return peso;
}

void Paquete::setCostoporkilo(double cpk)
{
    if (cpk >= 0)
    {
        costoporkilo= cpk;
    }
    else {
        cout <<"Error el costo por kilo no puede ser menor a 0";
    }
  
}

double Paquete::getCostoporkilo()
{
  return costoporkilo;
}

double Paquete::calculoCosto()
{
  double resultado;
  resultado = peso * costoporkilo + Envios::calculoCosto();
  return resultado;
}