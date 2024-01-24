//this program contains formulae for solving geometric problems
//This program was developed by Solomon Yaw Adeklo
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double getRectangle(double,double,double&);
double circlesArea(double,double&);
double circlesCircum(double,double&);
double triangleArea(double,double,double&);
double trapArea(double,double,double,double&);
double cylinArea(double,double);
double cuboidArea(double,double,double,double&);
double cuboidVol(double,double,double,double&);
float cubeArea(double,float&);
float cubeVol(double,float&);
float tetraTotal(double,float&);
float tetraVol(double,float&);
double coneSurf(double,double, double&);
double coneVol(double r, double h,double& v);
const double pi =3.142;

int main()

{
  char choice;
  cout<<"THIS PROGRAM CONTAINS FORMULAS FOR SOLVING GEOMETRIC PROBLEMS\n\n";
  cout<<"THIS PROGRAM WAS DEVELOPED BY SOLOMON YAW ADEKLO\n\n";
  cout<<"THIS IS A FIRST YEAR PROJECT WORK AT VALLEY VIEW UNIVERSITY\n\n";
   while (choice != 'J')
   {cout<<"Please select your choice of formula \n Enter J to Exit. \n"<<endl;
    cout<<"************************************************************************\n";
    cout<<"*A. AREA OF A RECTANGLE THEOREM                                        *\n";
    cout<<"*B. AREA AND CIRCUMFERENCE OF A CIRCLE THEOREM                         *\n";
    cout<<"*C. AREA OF A TRIANGLE THEOREM                                         *\n";
    cout<<"*D. AREA OF A TRAPEZOID THEOREM                                        *\n";
    cout<<"*E. SURFACE AREA OF A  CYLINDER                                        *\n";
    cout<<"*F. TOTAL SURFACE AREA AND VOLUME OF A CUBO                            *\n";
    cout<<"*G. TOTAL SURFACE AREA AND VOLUME OF A CUBE                            *\n";
    cout<<"*H. CURVED SURFACE AREA,TOTAL SURFACE AREA AND VOLUME OF A TETRAHEDRON *\n";
    cout<<"*i. CURVED SURFACE AREA,TOTAL SURFACE AREA AND VOLUME OF A CONE        *\n";
  cout<<"**************************************************************************\n";
    cout<<"\n\nPlease select your choice of formula;";
        cin>>choice;
    while(choice == 'J' || choice == 'j')
    {
          return 0;
    }
    switch(choice)
    {
      case 'A':
      case 'a':
           {
     //declaring variables
     double length,
            breadth,
            area;
     //inputs by the user
      cout<<"-------------------------------------------------------\n\n";
     cout<<"The Area of a Rectangle is A = l * b; where A =area, b = breadth and I = length."<<endl;;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n"; 
     cout<<"PLEASE ENTER THE LENGTH OF THE RECTANGLE IN METERS:";

     while(!(cin>>length) || (length<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE LENGTH OF THE RECTANGLE IN METERS:";
     }

     cout<<"\n ENTER THE LENGTH OF THE RECTANGLE IN METERS:";

      while(!(cin>>breadth) || (breadth<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE BREADTH OF THE RECTANGLE IN METERS:";
     }

     cout<<"-------------------------------------------------------\n";
     //call the function getRectangle
    getRectangle(length,breadth,area);
    cout<<"THE AREA OF THE RECTANGLE IS:"<<area<<" meters "<<endl;
      cout<<"-------------------------------------------------------\n\n\n";
    }
     break;


    case 'B':
    case 'b':
    {
     cout<<"-------------------------------------------------------\n\n";
     cout<<"The Area of a Circle is Area = pi * r^2; where A r is radius"<<endl;
     cout<<"The circumference of a Circle is Area = 2 * pi * r^2"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n"; 
     
     //declaring variables
     double radius,
            area=0,
            circumference=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE RADIUS OF THE CIRCLE IN CENTIMETERS:";

     while(!(cin>>radius) || (radius<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
       cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE RADIUS OF THE CIRCLE IN CENTIMETERS:";

      }

     //call the function ciclesArea
     circlesArea(radius,area);
       cout<<"-------------------------------------------------------\n\n";
     cout<<"THE AREA OF THE CIRCLE IS:"<<area<<" meters "<<endl;
         //call the function cirlesCircum
     circlesCircum(radius,circumference);
          cout<<"-------------------------------------------------------\n\n";
           cout<<"THE CIRCUMFERENCE OF THE CIRCLE IS:"<<circumference<<" meters "<<endl;
     }
     break;

     case 'C':
     case 'c':
          {
     cout<<"-------------------------------------------------------\n\n";
     cout<<"The Area of a Triangle is Area = 1/2 * b * h\n"<<endl;
     cout<<"where A = area , b = base and h = height \n"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n"; 
     
     //declaring variables
     double base,
            height,
            area=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE BASE OF THE TRIANGLE IN CENTIMETERS:";

     while(!(cin>>base) || (base<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE BASE OF THE TRIANGLE IN CENTIMETERS:";
      }
      cout<<"PLEASE ENTER THE HEIGHT OF THE TRIANGLE IN CENTIMETERS:";

     while(!(cin>>height) || (height<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE HEIGHT OF THE TRIANGLE IN CENTIMETERS:";
      }
      cout<<"-------------------------------------------------------\n\n";
     //call the fuction triangleArea
     triangleArea(base,height,area);
     cout<<"-------------------------------------------------------\n\n";
     cout<<"THE AREA OF THE TRIANGLE IS :"<<area<<" centimeters squared "<<endl;
     }
     break;

    case 'D':
    case 'd':
      {
     cout<<"-------------------------------------------------------\n\n";
     cout<<"The Area of a Trapezoid is A = 1/2 * b * h (L1+L2)\n"<<endl;
     cout<<"where A = area , L1 and L2 are the lengths and h = height \n"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n"; 
     //declaring variables
            double  length1,
                    length2,
                    height,
                    area;

     //inputs by the user
    cout<<"PLEASE ENTER THE LENGTHS OF THE TRAPEZOID IN MILES:";

       cout<<"Note:->seperate the lengths with a space";

     while(!(cin>>length1>>length2) || (length1<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
      cout<<"PLEASE ENTER AGAIN THE LENGTHS OF THE TRAPEZOID IN MILES:";
      }
cout<<"PLEASE ENTER THE HEIGHT OF THE TRAPEZOID IN MILES:";

      while(!(cin>>height) || (height<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
         cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE HEIGHT OF THE TRAPEZOID IN MILES:";          
      }
     cout<<"-------------------------------------------------------\n\n";  
     //call the function trapArea
     trapArea(length1,length2,height,area);
     cout<<"-------------------------------------------------------\n";       
     cout<<"THE AREA OF THE TRAPEZOID IS :"<<area<<" miles squared "<<endl;
     cout<<"-------------------------------------------------------\n"; 
     }
     break;

     case 'E':
     case 'e':
          {
     cout<<"-------------------------------------------------------\n\n";
     cout<<"The Surface Area of a Cylinder is = pi * r^2 * + 2 * pi * r * h\n"<<endl;
     cout<<"where r is radius and h is height\n"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n"; 

     //declaring variables
 
            double radius,
                   height;
            double surface=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE RADIUS OF THE BASE IN CENTIMETERS:";


     while(!(cin>>radius) || (radius<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE RADIUS OF THE BASE IN CENTIMETERS:";
     }
     cout<<"PLEASE ENTER THE HEIGHT OF THE CYLINDER IN CENTIMETERS:";

      while(!(cin>>height) || (height<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE HEIGHT OF THE CYLINDER IN CENTIMETERS:";
      }
     cout<<"-------------------------------------------------------\n\n";
     //call the function CylinArea
     surface = cylinArea(radius,height);

     cout<<"-------------------------------------------------------\n";       
     cout<<"THE SURFACE AREA OF THE CYLINDER IS :"<<surface<<" centimeters squared "<<endl;
     cout<<"-------------------------------------------------------\n";
     }
     break;

     case 'F':
     case 'f':
         {
              cout<<"-------------------------------------------------------\n\n";
     cout<<"The Total Surface Area of a Cuboid is = 2 *( l * b + b * h + h * l)\n";
     cout<<"and the volume of the Cuboid is = l * b * h; where l = length, b = breadth and h = height \n"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     
     //declaring variables
            double length,
                   breadth,
                   height;
            double surface=0,
                   volume=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE LENGTH OF THE CUBOID IN CENTIMETERS:";

      while(!(cin>>length) || (length<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE LENGTH OF THE CUBOID IN CENTIMETERS:";
     }

     cout<<"PLEASE ENTER THE BREADTH OF THE CUBOID IN CENTIMETERS:";

     while(!(cin>>breadth) || (breadth<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER THE HEIGHT OF THE CUBOID IN CENTIMETERS:";
     }

     

      while(!(cin>>height) || (height<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE HEIGHT OF THE CUBOID IN CENTIMETERS:";
     }

     //call the fuction cuboidArea andcuboidVol
     cuboidArea(length,breadth,height,surface);
     cuboidVol(length,breadth,height,volume);

     cout<<"-------------------------------------------------------\n";       
     cout<<"THE SURFACE AREA OF THE CUBOID IS :"<<surface<<" centimeters squared \n "<<endl;
     cout<<"THE VOLUME OF THE CUBOID IS :"<<volume<<" centimeters squared "<<endl;
     cout<<"-------------------------------------------------------\n";
     }
      break;

     case 'G':
     case 'g':
     {
     cout<<"-------------------------------------------------------\n\n";
     cout<<"The Total Surface Area of a Cube = 6 * a^2 \n and the volume of the Cube =n a^3;"<<endl;
     cout<<"NB: a is equivalent to the sides of an equialent triangle of each\n face of the cube"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     cout<<"PLEASE FOLLOW THE INSTRUCTIONS BELOW:\n\n";

     //declaring variables
            double side;
            float surface=0;
            float volume=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE FACE OF THE CUBE IN CENTEMETERS:";


     while(!(cin>>side) || (side<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER AGAIN THE FACE OF THE CUBE IN CENTEMETERS:";
     }

     
     //call the fuctions cubeArea andcubeVolume
      cubeArea(side,surface);
      cubeVol(side,volume);

      cout<<"-------------------------------------------------------\n";       
     cout<<"THE SURFACE AREA OF THE CUBE IS :"<<surface<<" centimeters squared \n "<<endl;
     cout<<"THE VOLUME OF THE CUBE IS :"<<volume<<" centimeters squared "<<endl;
     cout<<"-------------------------------------------------------\n";
      }
      break;

     case 'H':
     case 'h':
         {
          cout<<"-------------------------------------------------------\n\n";
     cout<<"The Total Surface Area of a Tetrahedron is = sqrt(3 * a^2)"<<endl;
     cout<<"The Curved surface Area of a Tetrahedron is = 3 * sqrt(3 * a^2)/4"<<endl;
     cout<<"NB: a is equivalent to the sides of an equilateral triangle of \n each faces of the Tetrahedron"<<endl;
      cout<<"-------------------------------------------------------\n\n";
     

     //declaring variables
            double side;
            float surface;
            float total=0;
            float volume=0;
     //inputs by the user
     cout<<"PLEASE ENTER THE SIDE OF EACH EQUILATERAL TRIANGLE IN CENTEMETERS:";

      while(!(cin>>side) || (side<1))
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout<<"this program does not accept 0, negative numbers and alphabets\n\n ";
         cout<<"PLEASE ENTER THE SIDE OF EACH EQUILATERAL TRIANGLE IN CENTEMETERS:";

     }
     
     //call the fuctions tetrasuf, tetraVoland tetraTotal
      surface=(3 * tetraTotal(side,total))/4.0;
      tetraTotal(side,total);
      tetraVol(side,volume);
      cout<<"-------------------------------------------------------\n\n";
     cout<<"THE SURFACE AREA OF THE TETRAHEDRON IS:"<<surface<<" centimeters squared/n "<<endl;
     cout<<"THE VOLUME OF THE TETRAHEDRON IS:"<<volume<<" centimeters cube/n "<<endl;
      }
      break;


    /** case 'I':
     case 'i':
         {
          cout
          cout
          cout
          cout
          cout

     //declaring variables
            double radius,length,height;
            double surface=0,total=0;
            double volume=0;
     //inputs by the user
     cout

      while(!(cin>>radius) || (radius
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout
      cout

     }

       cout

      while(!(cin>>length) || (length
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout
      cout
     }

      cout

      while(!(cin>>height) || (height
     {
      cin.clear();
      cin.ignore(80,'\n');
      cout
      cout
     }
     cout
     //call the fuctions onesurf and coneVol
 
      total= (pi * radius *length) + circlesArea( radius,total);
      coneSurf(radius, length, surface);
      coneVol(radius,height,volume);
      cout
      cout
      cout
      cout
      }
      break;
**/
      default :
            {
             cout<<"/n INVALID CHOICE/n";
             cout<<"/n Please try the selection again/n/n";
             }
             break;
             }
             }
             cin.ignore();
             choice='NULL';



             cin.ignore();
             cout<<"/n";


    cout<<setprecision(4)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<endl;



    system ("pause");
    return 0;
}

double getRectangle(double x,double y, double& z)
  {
    z=x*y;
   return z;
  }

double circlesArea(double r, double& a)
  {
      a=pi*pow(r,2.0);
      return a;
  }

double circlesCircum(double r,double& c)
  {
      c = 2.0*pi* r;
      return c;
  }

 double triangleArea(double b,double h,double& u)
  {
     u = 1.0/2.0 * b * h;
     return u;
  }

double trapArea(double l1,double l2,double h,double& y)
     {
       y = 1.0/2.0 * (l1+l2) * h;
       return y;
     }

double cylinArea(double r,double h)
     {
            double cyl;
            cyl = pi * pow(r,2.0)  + 2 * pi * r * h;
            return cyl;
     }

double cuboidArea(double l,double b, double h, double& s)
     {
       s = 2 * (l * b + b * h + h * l);
       return s;
     }
double cuboidVol(double l,double b, double h, double& v)
     {
      v = l * b * h;
      return v;
     }

float cubeArea(double a,float& s)
     {
       s = 6.0 * pow(a,2);
       return s;
     }

float cubeVol(double a, float& v)
     {
       v = pow(a,3.0);
       return v;
     }
float tetraTotal(double s, float& t)
     {
       t = sqrt(3.0 * pow(s,2.0));
       return t;
     }

float tetraVol(double s, float& v)
     {
      v = sqrt(2 * pow(s,3.0))/12.0;
      return v;
     }
double coneSurf(double r, double l, double& s)
     {
      s = pi * r * l;
      return s;
     }

double coneVol(double r, double h,double& v)
   {
    v =(pi * pow(r,2.0) * h)/3.0;
    return v;
   }
