#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX               
{
   public:
       int *Arr;
       int iSize;

       ArrayX(int x) 
       {
         cout<<"inside constructor\n";
         iSize=x;                 //Characteristics initialisation
         Arr=new int[iSize];      //Resource allocation

       }

       ~ArrayX()
       {
         cout<<"inside destructor\n";
         delete []Arr;            //Resource deallocation
       }
};

  int main()
{
   ArrayX aobj1(5); 
   

return 0;

}