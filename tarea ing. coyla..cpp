//ejecicio 1:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int a,b,s,r,m;
 cout<<"ingrese su primer numero:"<<endl;
 cin>>a;
 cout<<"ingrese su segundo numero: "<<endl;
 cin>>b;
 s=a+b;
 r=a-b;
 m=a*b;
 cout<<"la suma es: "<<s<<endl;
 cout<<"la resta es: "<<r<<endl;
 cout<<"la multiplicacion es: "<<m<<endl;
 
 return 0;
}

//ejercicio 2:
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float h,g=9.8,t;
    cout<<"ingrese el tiempo: "<<endl; //la altura es igual a 1/2*g*t*t
    cin>>t;
    h=g*t*t/2;
    cout<<"la altura es: "<<endl<<h;
    

    return 0;
}

//ejercicio 3:
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    float r=2,h,pi=3.1416,v;
    cout<<"ingrese la altura: "<<endl; //el volumen es igual a pi*r^2*h
    cin>>h;
    v=pi*r*r*h;
    cout<<"el volumen es: "<<fixed<<setprecision(1)<<endl<<v;
    

    return 0;
}

//ejercicio 4:
#include <iostream>
using namespace std;
int main ()
{
    int ventas,comision,sueldobruto,descuento,sueldoneto;
    
    float sueldobasico=300;
    float porcentajecomision=0.09;
    float porcentajedescuento=0.11;
    
    cout<<"ingrese el monto vendido:"<<endl;
    cin>>ventas;
    
    comision=ventas*porcentajecomision;
    sueldobruto=sueldobasico+comision;
    descuento=sueldobruto*porcentajedescuento;
    sueldoneto=sueldobruto-descuento;

    cout <<"Comision:" <<comision<<endl;
    cout <<"Sueldo bruto:" <<sueldobruto<<endl;
    cout <<"Descuento:" <<descuento<<endl;
    cout <<"Sueldo neto:" <<sueldoneto<<endl;
    
    return 0;
}

//ejercicio 5:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        float x1,x2,y1,y2;
        cout<<"ingrese su primer componente x1 del plano cartesiano: "<<endl;
        cin>>x1;
        cout<<"ingrese su primer componente y1 del plano cartesiano: "<<endl;
        cin>>y1;
        cout<<"ingrese su segundo componente x2 del plano cartesiano: "<<endl;
        cin>>x2;
        cout<<"ingrese su segundo componente y2 del plano cartesiano: "<<endl;
        cin>>y2;
        cout<<"La distancia entre dos puntos es:"<< endl;
        cout<< sqrt(((x2-x1)* (x2-x1))+((y2-y1)* (y2-y1)));
    return 0;
}

//ejercicio 6:

#include <iostream>
using namespace std;
int main() {
    int cantidad;
    cin >> cantidad;
    int s100, s50, b10, m5, m2, m1;
    s100 = cantidad / 100;
    cantidad=cantidad % 100;
    s50 = cantidad / 50;
    cantidad =cantidad % 50;
    b10 = cantidad / 10;
    cantidad = cantidad % 10;
    m5 = cantidad / 5;
    cantidad =cantidad % 5;
    m2 = cantidad / 2;
    cantidad =cantidad % 2;
    m1 = cantidad;
    cout << "CANTIDAD DE BILLETES DE $100: " << s100 << endl;
    cout << "CANTIDAD DE BILLETES DE $50: " << s50 << endl;
    cout << "CANTIDAD DE BILLETES DE $10: " << b10 << endl;
    cout << "CANTIDAD DE MONEDAS DE $5: " << m5 << endl;
    cout << "CANTIDAD DE MONEDAS DE $2: " << m2 << endl;
    cout << "CANTIDAD DE MONEDAS DE $1: " << m1 << endl;

    return 0;
}

//ejericicio 7:
#include <iostream>
using namespace std;
int main (){
    int abcd,x,y,z;
    cin>>abcd;
    x=(abcd/1000)%10;
    y=(abcd%10);
    z=x*10+y;
    cout<<"EL NUMERO FORAMADO ES: "<<z<<endl;

return 0;
}
//ejercicio 8:
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, centena, decena, unidad, inversa;

    cout << "Ingresa un numero de tres cifras: ";
    cin >> n;

    centena = n / 100;
    decena = (n / 10) % 10;
    unidad = n % 10;

    inversa = (unidad * 100) + (decena * 10) + centena;

    cout << "El inverso del numero es: " << inversa << endl;

    return 0;
}

//ejercicio 9:
#include <iostream>
using namespace std;

int main() {
    double galones, litros, total;
    double precioLitro = 3.86;

    cout << "Ingresa la cantidad de galones vendidos: ";
    cin >> galones;

    litros = galones * 3.785;
    total = litros * precioLitro;

    cout << "Litros vendidos: " << litros << endl;
    cout << "Total a pagar: S/ " << total << endl;

    return 0;
}

//ejercicio 10:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float m,i,t,p,c;
  cout<<"ingrese su capital: "<<endl;
  cin>>c;
  cout<<"ingrese su tasa de interes: "<<endl;
  cin>>t;
  cout<<"ingrese el N° de periodos: "<<endl;
  cin>>p;
  m=c*pow((1+t/100),p);
  i=m-c;
  cout<<"el monto generado es: "<<endl;
  cout<<m<<endl;
  cout<<"el interes generado es: "<<endl;
  cout<<i;
  

    return 0;
}