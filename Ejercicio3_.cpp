#include "iostream"
#include "math.h"

using namespace std;

//funciones utilizadas
void matriz_2x2(int al, float x[][5]);
void notaFinal(int al, float x[][5], float nf[]);
void promedio(int al, float x[][5], float nf[]);

int main(void)
{
    int al, nt=5;
    
    //presentacion
    cout <<endl <<endl;
    cout << "\t--Sistema de notas--";
    cout <<endl <<endl;

    //se solicita la cantidad de alumnos
    cout << "Ingrse la cantidad de alumnos: ";
    cin  >> al;

    //se declaran los arreglos
    float aula[al][5];//este contiene las notas segin cada alumno
    float notaF[al];//y este contiene el promedio de las notas de los alumnos

    //Esta funcion sirve para ingresar los elemntos de el arreglo de dos dimenciones
    matriz_2x2(al, aula);

    //esta funcion sirve para rellenar el arreglo notaF con los promedios
    notaFinal(al, aula, notaF);

    //esto es para chequear si estan bien los promedios
    /*for(int i=0; i<al ;i++)
    {
        cout <<endl;
        cout << "El promedio es: " << notaF[i] <<endl;
    }*/

    return 0;
}


//esta funcion sirve para ingresar los elemtos de la funcion 
void matriz_2x2(int al, float x[][5])
{
    x[al][5];
    bool incorrecto;//variable para verificar si el numero dado esta en el rango permitido
    

    for(int i = 0;i < al;i++)//este for dura la cantidad de alumno que hay
    {
        cout << "Ingrese las notas perteneciente a el alumno #" << i+1 << ": ";
        cout <<endl;
        for(int j=0; j<5 ; j++)//este for dura la cantidad de notas que hay
        {
            do//este do solo es para chequear que la nota se encuentra entre 0 y 10
            {
                cout << "Ingrese la " << j+1 << char(167) << " nota: ";
                //aqui el usuario ingresa la nota
                //siendo i la posicion del alumno 
                //y j la posicion de la nota
                cin  >> x[i][j];
                
                //este if solo es para chequear que la nota se encuentra entre 0 y 10
                if( ( x[i][j] <0)  || ( x[i][j] >10) )
                {
                    incorrecto = 1;//si no esta en el rango incorecto se vuelve verdadero y se repite el ciclo
                    cout << "\t** Nota fuera del rango **" <<endl;
                    cout << "\t** Ingrese una nota entre 0 y 10 **" <<endl;
                }else
                {
                    incorrecto = 0;//si esta en el rango, incorecto se vuelve falso y para el ciclo
                }

            }while(incorrecto == 1);
            
        }
        cout <<endl;
    
    }
    cout <<endl <<endl;
}

//esta funcion sirve para rellenar el arreglo notaF con los promedios
void notaFinal(int al, float x[][5], float nf[])
{
    x[al][5];
    nf[al];

    //En enta fucion se calcula el promedio de las notas de cada alumno
    promedio(al, x, nf);

    for(int i=0; i<al ;i++)//este for se repite la cantidad de alumnos que alla
    {
        if(nf[i] >= 6)//si es mayor o igyal a 6 quiere decir que aprobo 
        {
            cout << "El estudiante #" << i+1 << " aprobo." <<endl;
        }else// si no es mayor o igual a 6 quiere decir que reprobo
        {
            cout << "El estudiante #" << i+1 << " reprobo." <<endl;
        }
    }
}

//En enta fucion se calcula el promedio de las notas de cada alumno
void promedio(int al, float x[][5], float nf[])
{
    for(int i=0; i<al ;i++)//este for se repite la cantidad de alumnos que haya
    {
        float suma=0;

        //en este for se suman todas las notas del alimno i
        for(int j=0; j<5 ;j++)
        {
            suma = suma + x[i][j];
        }

        //la suma de notas del alumno i se divide entre 5 haciendo que cada nota valga 20%
        //suma/5 es el promedio del alumno i
        nf[i] = suma/5; //es guardado en nf[i]
    }
}