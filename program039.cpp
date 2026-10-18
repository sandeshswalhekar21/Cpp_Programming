#include<iostream>
using namespace std;

class ArrayX
{
    public:
       int *Arr;
       int Size;

       ArrayX(int No)
       {
        Size = No;
        Arr = new int[Size];
       }

       ~ArrayX()
       {
        delete []Arr;
       }

       void Accept()                   // Getter
       {
        int i=0;

        cout<<"Enter the elements:\n";

        for(i=0;i<Size;i++)
        {
            cin>>Arr[i];
        }
       }

        void Display()                     // Setter
       {
        int i=0;

        cout<<"elements of Array are:\n";

        for(i=0;i<Size;i++)
        {
            cout<<Arr[i]<<"\n";
        }
       }

};
int main()
{
    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}
