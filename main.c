#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define CantUsuarios 10
#define CantProductos 10

int main()
{
    eUsuario listadoDeUsuario[CantUsuarios];
    int opcion;
    int i;
    char seguir = 's';

    while (seguir=='s')
    {

     printf("1. alta\n2. baja\n3. modificacion\n4.mostrar\nElija una opcion: ");
     scanf("%d",&opcion);

     eUso_inicio(listadoDeUsuario,CantUsuarios);

     switch(opcion)
        {
        case 1:
        eUso_alta(listadoDeUsuario,CantUsuarios);
        break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            /*for(i=0; i<CantUsuarios;i++)///mostrar solo los que tengan informacion.
            {
                if(listadoDeUsuario[i].idUsuario!=0)
                {
                     eUSo_mostrarLista(listadoDeUsuario,CantUsuarios);
                }
            }*/
        eUSo_mostrarLista(listadoDeUsuario,CantUsuarios);
        break;

        case 5:
            seguir='n';
            break;
        default:
            printf("opcion incorrecta");
            break;
        }

    }
    /*eUso_alta(listadoDeUsuario,CantUsuarios);

    eUso_alta(listadoDeUsuario,CantUsuarios);

    eUSo_mostrarLista(listadoDeUsuario,CantUsuarios);*/
    return 0;
}
