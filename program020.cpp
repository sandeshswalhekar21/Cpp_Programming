#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX               
{
   private:
       int *Arr;
       int iSize;
       
   public:
        ArrayX() 
       {
         
         iSize=5;                 
         Arr=new int[iSize];     

       }
       ArrayX(int x) 
       {
         
         iSize=x;                 
         Arr=new int[iSize];     
       }

       ~ArrayX()
       {
         
         delete []Arr;           
       }
};

  int main()
{
  
  ArrayX *aobj1 = new ArrayX();      //default constructor
  ArrayX *aobj2 = new ArrayX(5);     //parameterise constructor

  // Function call         


  delete aobj1;              //destructor
  delete aobj2;
return 0;

}