#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
class Objektinis{
private:
    int length;
public:
    double first;
    double last;
    int prime=0;
    int range[1000];

void Input()
{
    cout<<"Enter the length of the range: "<<endl;
    cin>>length;
    cout<<"Enter the characters of the range: "<<endl;
    for(int i=0; i<length; i++)
    {
        cin>>range[i];
    }
}
void FirstAndLast()
{
    first = range[0];
    last = range[length-1];

}
void Prime()
{
    for(int i=0; i<length; i++)
    {
        if(range[i]==2 || (range[i]>2 && range[i]%2!=0))
        prime++;
    }
}
void Output()
{
    cout<<"First range number is: "<<first<<endl;
    cout<<"Last range number is: "<<last<<endl;
    cout<<"The number of prime characters in the range is: "<<prime<<endl;
}


};


int main()
{
    Objektinis X;
    X.Input();
    X.FirstAndLast();
    X.Prime();
    X.Output();

    return 0;
}
