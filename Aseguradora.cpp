#include <iostream>
using namespace std;

int main(){
      
      float sueldo, MontoSeguro, anticipacion, RestoDelPago;
      char opcion;

  
    cout<<"Informacion de aseguadora "<<endl;
    cout<<"ingrese una opcion:  a)Seguro de vida  b)Anticipacion de la suma asegurada  c)Gastos funerarios ";
    cin>>opcion;

    switch (opcion)
    {
    case 'a':
      cout<<"Ingrese su sueldo: ";
      cin>>sueldo;

      if (sueldo>=365.00 && sueldo<=910.00)
      {
        MontoSeguro = 10,000.00;
        cout<<"Su monto de seguro es de $10,000 "<<endl;
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=910.01 && sueldo<=1255.00)
      {
        MontoSeguro = 14,000.00;
        cout<<"Su monto de seguro es de $14,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=1255.01 && sueldo<=1630.00)
      {
        MontoSeguro = 18,000.00;
        cout<<"Su monto de seguro es de $18,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=1630.00)
      {
        MontoSeguro = 22,000.00;
        cout<<"Su monto de seguro es de $22,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else{
        cout<<"Sueldo invalido, ingrese un sueldo de $365 o mas";
      }
      break;

      case 'b':

        cout<<"ingrese su sueldo: ";
        cin>>sueldo;

        if (sueldo>=365.00 && sueldo<=910.00)
      {
        MontoSeguro = 10,000.00;
        cout<<"Su monto de seguro es de $10,000 "<<endl;
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=910.01 && sueldo<=1255.00)
      {
        MontoSeguro = 14,000.00;
        cout<<"Su monto de seguro es de $14,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=1255.01 && sueldo<=1630.00)
      {
        MontoSeguro = 18,000.00;
        cout<<"Su monto de seguro es de $18,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else if (sueldo>=1630.00)
      {
        MontoSeguro = 22,000.00;
        cout<<"Su monto de seguro es de $22,000.00 ";
        cout<<"En caso de muerte por cualquier razon, se le pagara la cantidad de dinero mostrada anteriormente";
      }else{
        cout<<"Sueldo invalido, ingrese un sueldo de $365 o mas";
      }

            cout<<"El valor asegurado se le entregara dependiendo de la cantidad dinero que le corresponda. Usted recibira el %50 en un solo pago, y el otro %50 se le dara en 12 cuotas mensuales "<<endl;
            
            anticipacion=MontoSeguro/2;
            cout<<"Su anticipacion sera de: "<<anticipacion<<endl;
            RestoDelPago=anticipacion/12;
            cout<<"Quiere decir que despues de la anticipacion se le pagara una cantidad durante 12 meses, dicha cantidad sera de: "<<RestoDelPago<<endl;
      break;

      case 'c':
      break;

      default:
        break;
 }


      

      
     
      





    return 0;
}