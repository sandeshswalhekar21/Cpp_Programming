#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX               
{
   public:
       int *Arr;
       int iSize;

       ArrayX()     //Default constructor
       {

       }
       ArrayX(int x)  //perameterised constructor
       {

       }
};

  int main()
{
   ArrayX aobj1(); 
   ArrayX aobj2(5);           

   cout<<sizeof(aobj1)<<endl;

return 0;

}