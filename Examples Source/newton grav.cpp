#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

void gravForce() {
cout << "Computation of Gravitational Force between 2 objects " << endl;
cout << setw (24)<<"by"<<endl;
;   
   
     return;
     }
int main() 
{
  const double GRAVITY = 6.6742E-11;
  
  double mass1,mass2,dist,force;       

  double gForce; 
           
    gForce = (GRAVITY * (mass1 * mass2) / (dist*dist));
     
    gravForce();
             
    cout << "Enter the mass of the first object (in kg): ";
    cin >> mass1; 
    
    cout << endl << "Enter the mass of the second object (in kg): ";
    cin >> mass2 ; 
    
    cout  << endl <<"Enter the distance between the centers of the two objects(in meters):";
    cin >> dist;
         
     cout << "RESULTS:" << endl;
     
     cout << "Mass of the 1st object is: "<< setw(16) << mass1 << " kg" << endl << endl;
     
     cout << "Mass of the 2nd object is: "<<setw(16) << mass2 << " kg" << endl << endl;
     
     cout << "The Distance is: " << setw(26) << dist << " meters" << endl << endl;
     
     cout << "The Gravitational Constant is : " <<setw(9)<< GRAVITY << " Nm^2/kg^2" << endl << endl;
     
     cout << "The Gravitational Force is: " << setw(14) << gForce <<" Newtons"<< endl;


cout << endl;

system("PAUSE");

while(yn != 'y' || yn != 'Y' || yn != 'n' || yn != 'N')
        {
            cout<<"enter (Y/N): ";
            cin>>yes;
            yn = yes;
        }
    }while(yn == 'y' || yn == 'Y');
}
  
}

