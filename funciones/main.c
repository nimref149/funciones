#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include "input.h"
#define TE 1000
#define TS 3
int main()
{

    int respuesta;
    Employee empleados[TE];
    respuesta=initEmployees(empleados,TE);
    int opcion;
    int flag;
    if(respuesta!=-1)
    {

        do
        {
            printf("============ABM==========\n");
            printf("1.Altas\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\n");
            while((getIntValid(&opcion,"Ingrese una opcion: ","Error, ingreso una opcion invalida\n",1,5))==-1);
            flag=autoId(empleados,TE);
            if(flag==1)
            {
                flag=0;
            }
            switch(opcion)
            {
            case 1:
                respuesta=cargarEmpleado(empleados,TE);
                switch(respuesta)
                {
                case 0:
                    printf("Usuario cargado con exito!!\n");
                    break;
                case -1:
                    printf("No se ha podido cargar el usuario\n");
                    break;
                case 1:
                    printf("No hay mas lugar!\n");
                    break;
                }
                break;
            case 2:
                if(flag==0)
                {
                    printf("Primero debe cargar usuarios!!\n");
                }
                else
                {
                    respuesta=modificarEmpleado(empleados,TE);
                    switch(respuesta)
                    {
                    case 0:
                        printf("Empleado modificado\n");
                        break;
                    case -1:
                        printf("Dato no encontrado\n");
                        break;
                    }

                }
                break;

            case 3:
                if(flag==0)
                {
                    printf("Primero debe cargar usuarios!!\n");
                }
                else
                {
                    respuesta=eliminarEmpleadoPorId(empleados,TE);
                    switch(respuesta)
                    {
                    case 1:
                        printf("Accion cancelada por el usuario\n");
                        break;
                    case 0:
                        printf("Empleado eliminado\n");
                        break;
                    case -1:
                        printf("Id no encontrado\n");
                        break;
                    }
                }
                break;
            case 4:
                if(flag==0)
                {
                    printf("Primero debe cargar usuarios!!\n");
                }
                else
                {

                    printf("Informar:\n");
                    printf("1-Listado empleado ordenados alfabeticamente por apellido y sector de manera ascendente\n");
                    printf("2-Total promedio de los salarios y empleados que superan el promedio\n");
                    while((getIntValid(&opcion,"Ingrese una opcion: ","Error, ingreso una opcion invalida\n",1,2))==-1);
                    if(opcion==1)
                    {
                        menuListarOrdenar(empleados,TE);
                    }
                    else
                    {
                        respuesta=cuantosSuperanPromedio(empleados,TE);
                        if(respuesta==-1)
                        {
                            printf("Ha habido un error\n");
                        }

                    }
                }
                break;
            case 5:
                printf("Saliendo del programa\n");
                break;

            }
            system("pause");
            system("cls");
        }
        while(opcion!=5);
    }
    return 0;
}

/*

#include <stdlib.h>
#include "funciones.h"

#define TA 50
#define TAM 1000


int main()
{
    int opcion;

    ePeliculas peliculas[TAM];
    eFechas fechas[TAM];
    eGeneros generos[5] = {{1,"Accion"},{2,"Comedia"},{3,"Drama"},{4,"Romance"},{5,"Terror"}};
    eActores actores[TA]={{1,"Scarlett Johansson","Argentina"},{2,"Robert Downey Jr","EEUU"},{3,"Mark Ruffalo","Canada"},{4,"Chris Evans","EEUU"},{5,"Chris Hemsworth","Argentina"},{6,"Samuel Jackson","EEUU"},{7,"Gwyneth Paltrow","Canada"},{8,"Paul Rudd","Argentina"},{9,"Bradley Cooper","EEUU"},{10,"Josh Brolin","Canada"}};

    inicializarPeliculasyActores(peliculas,TAM,actores,TA);

    hardcodearDatos(peliculas,20,fechas,actores,10);

    do
    {
        opcion=pedirInt("1.Alta\n2.Modificar\n3.Bajar\n4.Listar peliculas\n5.Lista actores\n6.Salir\nElija una opcion: ");

        switch(opcion)
        {
        case 1:
            agregarPelicula(peliculas,TAM,generos,5,actores,TA,fechas);
            break;
        case 2:
            modificarPelicula(peliculas,TAM,actores,TA,fechas,generos,TAM);
            break;
        case 3:
            bajarPelicula(peliculas,TAM,actores,TA,fechas,generos,TAM);
            break;
        case 4:
            mostrarListaPeliculasPorAnio(peliculas,TAM,generos,TAM,actores,TA,fechas);
            break;
        case 5:
            mostrarListaActores(actores,TA);
            break;

        }
        system("pause");
        system("cls");

    }
    while(opcion!=6);
    return 0;
}


*/

























































































