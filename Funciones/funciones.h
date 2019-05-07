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

void menu();



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

void ordenarNombres(eEmpleado[], int);



int menuDeOpciones(char[]);









/** \brief saca la divicion de 2 numeros.
 *
 * \param int un numero.
 * \param int otro numero.
 * \return float retorna el resultado de la division en flotante.
 *
 */
float division(int,int);


/** \brief saca factorial de un numero.
 *
 * \param int  numero al cual se le saca el factorial.
 * \return int retorna el resultado del factorial.
 *
 */
int factorial(int);


/** \brief saca la multiplicacion de 2 numeros.
 *
 * \param int un numero.
 * \param int otro numero.
 * \return int retorna el resultado de la multiplicacion.
 *
 */
int multiplicacion(int,int);


/** \brief saca la suma de 2 numeros.
 *
 * \param int un numero.
 * \param int otro numero.
 * \return int retorna el resultado de la suma.
 *
 */
int suma(int,int);


/** \brief saca la resta de 2 numeros.
 *
 * \param int un numero.
 * \param int otro numero.
 * \return int retorna el resultado de la resta.
 *
 */
int resta(int,int);



/** \brief solicita un numero y devuelve el numero ingresado.
 *
 * \return int retorna el numero ingresado.
 *
 */
int ingresarNumero();







































