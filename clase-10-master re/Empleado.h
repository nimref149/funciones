#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1


typedef struct{
 int contadorEmpleados;
 int idSector;
 char descripcion[50];
}eAuxiliar;

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int idSector;

    char descripcion[20];
     float valor;

}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    int idSector;
    float sueldoBruto;
    float sueldoNeto;
    int estado;

} eEmpleado;

void mostrarEmpleado(eEmpleado, eSector[], int);

void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int,eSector[]);
int contarCarlos(eEmpleado[],int);

void mostrarEmpleadosPorSector(eSector[],int,eEmpleado[],int);
void mostrarSectorConMasEmpleados(eSector[],int,eEmpleado[],int);




