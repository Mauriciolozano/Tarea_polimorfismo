//Pablo Erhard Hernandez A01721124
//Mauricio Lozano A00833216
#pragma once
#include <iostream>
using namespace std;

class Envios
{
    public:
    Envios(string nomR, string dirR, string cdR, string estR, int cpR, string nomD,
    string dirD, string cdD, string estD, int cpD, double cos);


    void setNombre_remitente(string nomR);
    string getNombre_remitente();

    void setNombre_destinatario(string nomD);
    string getNombre_destinatario();

    void setDireccion_remitente (string dirR);
    string getDireccion_remitente ();

    void setDireccion_destinatario (string dirD);
    string getDireccion_destinatario ();

    void setCiudad_remitente(string cdR);
    string getCiudad_remitente();

    void setCiudad_destinatario(string cdD);
    string getCiudad_destinatario();

    void setEstado_remitente(string estR);
    string getEstado_remitente();

    void setEstado_destinatario(string estD);
    string getEstado_destinatario();

    void setCodigoPostal_remitente(int cpR);
    int getCodigoPostal_remitente();

    void setCodigoPostal_destinatario(int cpD);
    int getCodigoPostal_destinatario();

    void setCalculoCosto(double cos);
    double getCalculoCosto();
   virtual double calculoCosto();

    protected:

    string nombre_remitente, direccion_remitente, ciudad_remitente, estado_remitente;
    string nombre_destinatario, direccion_destinatario, ciudad_destinatario, estado_destinatario;
    int CodigoPostal_remitente, CodigoPostal_destinatario;
    double costo;
};

Envios::Envios(string nomR, string dirR, string cdR, string estR, int cpR, string nomD,
string dirD, string cdD, string estD, int cpD, double cos)
{
    nombre_remitente = nomR;
    direccion_remitente = dirR;
    ciudad_remitente = cdR;
    estado_remitente = estR;
    CodigoPostal_remitente = cpR;

    nombre_destinatario = nomD;
    direccion_destinatario = dirD;
    ciudad_destinatario = cdD;
    estado_destinatario = estD;
    CodigoPostal_destinatario = cpD;
    costo = cos;
}

// funciones para remitente

void Envios::setNombre_remitente(string nomR)
{
    nombre_remitente=nomR;
}
string Envios::getNombre_remitente()
{
    return nombre_remitente;
}

void Envios::setDireccion_remitente(string dirR)
{
    direccion_remitente=dirR;
}
string Envios::getDireccion_remitente()
{
    return direccion_remitente;
}

void Envios::setCiudad_remitente(string cdR)
{
    ciudad_remitente=cdR;
}

string Envios::getCiudad_remitente()
{
    return ciudad_remitente;
}

void Envios::setEstado_remitente( string estR)
{
    estado_remitente=estR;
}
string Envios::getEstado_remitente()
{
    return estado_remitente;
}

void Envios::setCodigoPostal_remitente(int cpR)
{
    CodigoPostal_remitente=cpR;
}

int Envios::getCodigoPostal_remitente()
{
    return CodigoPostal_remitente;
}

//funciones de destinatario

void Envios::setNombre_destinatario(string nomD)
{
    nombre_destinatario=nomD;
}
string Envios::getNombre_destinatario()
{
    return nombre_destinatario;
}

void Envios::setDireccion_destinatario(string dirD)
{
    direccion_destinatario=dirD;
}
string Envios::getDireccion_destinatario()
{
    return direccion_destinatario;
}

void Envios::setCiudad_destinatario(string cdD)
{
    ciudad_destinatario=cdD;
}

string Envios::getCiudad_destinatario()
{
    return ciudad_destinatario;
}

void Envios::setEstado_destinatario(string estD)
{
    estado_destinatario=estD;
}
string Envios::getEstado_destinatario()
{
    return estado_destinatario;
}

void Envios::setCodigoPostal_destinatario(int cpD)
{
    CodigoPostal_destinatario=cpD;
}

int Envios::getCodigoPostal_destinatario()
{
    return CodigoPostal_destinatario;
}

//funcion calculo costo

void Envios::setCalculoCosto(double cos)
{
    if (costo>0){
        costo = cos;
    }
    else {
        cout << "Error el costo debe ser mayor a 0";
    }
}
double Envios::getCalculoCosto()
{
    return costo;
}

double Envios::calculoCosto()
{
    double resultado;
    resultado = getCalculoCosto();
    return resultado;
}
