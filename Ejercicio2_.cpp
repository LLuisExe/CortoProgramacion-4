#include "iostream"
#include "math.h"

using namespace std;

//funciones que se utilizaron
void leerArre(int tx, float x[]);
float promedio(int tm, float x[]);
void alumnosT(int tm, float estatura[], float promedioE);

int main(void)
{
    int tm=25;
    float estatura[tm];//arreglo de las estaturas 
    float promedioE;//varable del promedio de alturas

    //precentacion 
    cout <<endl <<endl;
    cout << "\t--Altura de los alumnos--";
    cout <<endl <<endl;

    //esta funcion es para rellenar el arreglo
    leerArre(tm, estatura);

    //en esta variable se guardara el promedio de las alturas
    //por medio de la funcion promedio
    promedioE = promedio(tm, estatura);
    cout << "El promedio es: " << promedioE;//se presenta el valor del promedio de altura
    cout <<endl;

    alumnosT(tm, estatura, promedioE);// conteo de alunos arriba del promedio o abajo del promedio

    return 0;
}

//esta funcion sirve para ingresar los elementos al arreglo
//en este caso serian las alturas de los estudiantes
void leerArre(int tm, float x[])//solicita la cantidad de alumnos y el arreglo 
{
    x[tm];

    for(int i = 0;i < tm;i++)//este for se repite por la cantidad de alumnos que hay
    {
        int incorrecto=0;

        do//este do solo es para chequear que la altura se encuentra entre 0 y 2.75
        {
            cout << "Ingrese la estatura perteneciente a el aulno " << i+1 << ": ";
            cin  >> x[i];//se guarda las alturas en x[] en la posicion 1 del arreglo

            if( ( x[i] <0.46)  || ( x[i] >2.75) )
                {
                    incorrecto = 1;//si no esta en el rango incorecto se vuelve verdadero y se repite el ciclo
                    cout << "\t** altura fuera del rango **" <<endl;
                    cout << "\t** Ingrese una altura entre 0.46 m y 2.75 m **" <<endl;
                }else
                {
                    incorrecto = 0;//si esta en el rango, incorecto se vuelve falso y para el ciclo
                }
        }while(incorrecto == 1);
    }
    cout <<endl <<endl;
}

//esta funcion sirve para calcular el promedio de altura
float promedio(int tm, float x[])//solicita la cantidad de alumnos y el arreglo de las alturas
{
    float suma=0, promedio=0;//estas asignaciones son para que simpre que se ejecute la funcion comiencen con 0

    for(int i=0; i<tm ;i++)//este for se repite por la cantidad de alumnos que hay
    {
        suma = suma + x[i];//en suma se va guardando la suma de cada una de las estaturas
    }
    promedio = suma/tm;//la suma de las estauras se divide entre la cantidad de alumnos
    return promedio;//se retorna el valor del promedio de alturas
}

//conteo de alumnos arriba o abajo del promedio
void alumnosT(int tm, float x[], float pro)//se solicita la cantidad de alumnos, el arreglo con las alturas y el promedio de alturas
{
    int menor=0, mayor=0;//es estas variables se guarda la cantidad de alumnos mayor al promedio o menor
    float tipo;

    for(int i=0; i<tm; i++)//este for se repite por la cantidad de alumnos
    {
        tipo = x[i];//a tipo se le asigna el valor de la altura del alumno en la posicion i

        //en este if se compara si es mayor o menor que el promedio
        if(tipo >= pro)
        {
            mayor++;//si es mayor se suma 1 a mayor
        }
        else if(tipo < pro)
        {
            menor++;//si es menor se suma 1 a menor
        }
    }

    //se presenta los alumnos mayores al promedio y menores al promedio
    cout << "-- " << menor << " alumnos son de estatura menor que el promedio y " << mayor << " alumnos son  mayor estatura que el promedio.";
    cout <<endl <<endl;

}