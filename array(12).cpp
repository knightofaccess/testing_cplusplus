//notes on this in the book
#include<iostream>
using namespace std;

int main ()
{
    const int max=40;
    char name[max];
    cout<<"Enter a name:" ;
    cin.get(name,max);
    
    cout<<"Value entered is:" <<name[1]<<name[4]<<endl;
    //name[1] means it will show only the second location of the array.
    //endl is the same as"\n"
    
    system ("pause");
    return 0;
}
