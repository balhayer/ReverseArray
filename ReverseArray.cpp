#include<iostream>
using namespace std;

int main()
{
    int Rox[99],i,n; //Array of 99
    
    cout<<"Enter how many number: ";
    cin>>n;
    
    
    // For Loop
    for(i = 0; i<= n; i++)  // For Loop from 0 to infinite (99))
    {
        cout<<"Enter number "<< i+1 <<":"; // i is the counter here
        cin>>Rox[i];
    }
    
    for(i = n; i>= 0; i--)
    {
        cout<< Rox[i] <<" ";
    }
    system("pause");
    return 0;
}
