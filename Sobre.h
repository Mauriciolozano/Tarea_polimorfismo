using namespace std;
#include <iostream>
#include"Envio.h"


class Sobre : public Envios
{
  public:
  
  Sobre(string nomR, string dirR, string cdR, string estR, int cpR, string nomD,
  string dirD, string cdD, string estD, int cpD, double cos, double cargo, double l, double a);
  
  void setCargoAdicional(double cargo);
  double getCargoAdicional();

  void setLargoS(double l);
  double getLargos();

  void setAnchos(double a);
  double getAnchos();

  double calculoCosto();
  
  private:

  double largo, ancho, cargoadicional;
  
};

Sobre::Sobre (string nomR, string dirR, string cdR, string estR, int cpR, string nomD,
    string dirD, string cdD, string estD, int cpD, double cos, double cargo, double l, double a) :
    Envios (nomR, dirR, cdR, estR, cpR, nomD, dirD, cdD, estD, cpD, cos)
    {
      cargoadicional = cargo;
      largo = l;
      ancho = a;
    }

void Sobre::setCargoAdicional(double cargo)
{
 cargoadicional = cargo; 
}

double Sobre::getCargoAdicional()
{
  return cargoadicional;
}

void Sobre::setLargoS(double l)
{
    largo = l;
}

double  Sobre::getLargos()
{
    return largo;
}

void Sobre::setAnchos(double a)
{
    ancho=a;
}

double Sobre::getAnchos()
{
    return ancho;
}

double Sobre::calculoCosto()
{
    double resultado;

    if (largo>25 && ancho>30){
        resultado = Envios::calculoCosto() + cargoadicional ;
        return resultado;
    } 
    else 
    {
        resultado = Envios::calculoCosto();
        return resultado;
    }
}
