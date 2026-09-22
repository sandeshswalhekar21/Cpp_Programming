#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX               
{
   private:
       int *Arr;
       int iSize;
       
   public:
      //parametrised constructor with default argument     (it act as both default and parame..)
       ArrayX(int x=5) 
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
  
  ArrayX *aobj1 = new ArrayX();       //parameterise constructor

  ArrayX *aobj2 = new ArrayX(15);     //parameterise constructor

  // Function call         


  delete aobj1;             
  delete aobj2;
return 0;

}