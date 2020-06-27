#include "iostream"

using namespace std;

//funciones que se utilizo
void leerArre(int tm, string x[]);
void arre(int tm, string x[]);
void traductor(int tm, string arre[]);

//funcion principal
int main(void)
{
    //esta variable ser el tamaño del arreglo
    int tm = 0;

    //presentacion
    cout <<endl << endl;
    cout << "\t--Bienvenido a el traductor de espa" << char(164) << "ol a clave murcielago--";
    cout <<endl << endl;

    //cuantas palabras tiene la frace
    //es decir el tamaño del arreclo de palabras
    cout << "Ingresa la cantidad palabras de su frace: ";
    cin  >> tm;

    //declaracion del arreclo de palabras
    string palabras[tm];

    cout << "Agregue los elemntos del arreglo:" <<endl;
    
    //llenar el arreglo
    leerArre(tm, palabras);

    //traducir a MURCIELAGO
    traductor(tm, palabras);

    //la frace dada es presentada en su traducion
    cout << "La frace traducida es: ";
    for(int i = 0; i < tm ;i++)
    {
        cout << palabras[i] << " ";//se muestra la plabra en la posicion i 
    }

    return 0;
}

//esta funcion sirve para ingresar los elementos al arreglo
//en este caso serian las palabras de la frace
void leerArre(int tx, string x[])//solicita el tamaño del arreglo y el arreglo
{
    x[tx];

    //este bucle es para solicitar los elemtos de x[] y finaliza cuando i sean mayor al tamaño del arreglo
    for(int i = 0;i < tx;i++)
    {
        cout << "Ingrese la palabra que pertenecera a casilla " << i << ": ";
        cin  >> x[i];
    }
    cout <<endl <<endl;
}

//esta funcion es para traducir las palabras del arregloa a clave MURCIELAGO
void traductor(int tm, string arre[])//solicita el tamaño del arreglo y el arreglo
{
    //declaracion de variables
    int cantidad;
    string pal, letra, palabra;

    for(int i=0; i<tm; i++)//este for sera para la traducion por palabra
    {
        pal = arre[i];//se asigna la palabra en la posicion i, a la variable pal
        cantidad = pal.length();//se hace el conteo de caracteres que tiene la palabra
        
        //esta declaracion sirve para que la variable tenga nada de valor ""
        palabra = "";//cada vez que inicie el for ser ""

        for(int j =0; j<cantidad; j++)//este for funciona con la cantidad de letras que trenga la palabra que se este traduciendo
        {
            //a la variable letra se le asigna el valor de una letra de las palabra evaluada
            letra = pal.at(j);//la letra asignada es la letra de la pasicion j de la palabra 

            //este if es para saver si la letra que se ha extraido de la palabra es una de las que compone la palabra murcielago
            if((letra == "m")||(letra == "u")||(letra == "r")||(letra == "c")||(letra == "i")||(letra == "e")||(letra == "l")||(letra == "a")||(letra == "g")||(letra == "o"))
            {
                //es caso de que pertenezca pasa por este if
                //este se encarga de verificar que letra de la palabra murcielago es 
                //cuando verifica que letra es, a la variable letra le asigna el numero que coresponde en el codigo MURCIELAGO
                if(letra == "m")
                {
                    letra = "0";
                }else if(letra == "u")
                {
                    letra = "1";
                }else if(letra == "r")
                {
                    letra = "2";
                }else if(letra == "c")
                {
                    letra = "3";
                }else if(letra == "i")
                {
                    letra = "4";
                }else if(letra == "e")
                {
                    letra = "5";
                }else if(letra == "l")
                {
                    letra = "6";
                }else if(letra == "a")
                {
                    letra = "7";
                }else if(letra == "g")
                {
                    letra = "8";
                }else if(letra == "o")
                {
                    letra = "9";
                }
            }else//en caso de no ser una letra de la palabra murcielago no pasa nada
            {
                letra;
            }
            //el valor de la variable letra se le suma a la variable palabra 
            palabra = palabra + letra;    
        }
        //al finalizar este for palabra es la palabra traducia a codigo murcielago
        arre[i] = palabra;//y es asignada a la posicion de la palabra que se tradujo
    }

}