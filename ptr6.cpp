#include<iostream>
using namespace std;
/////////////////////////////

class Distance 
{
    private:
    int feet;
    float inches;
    public:
    void get_dist()
    {
        cout<<"\n Enter feet : "; cin>>feet;
        cout<<"\n Enter inches : "; cin>>inches;
    }
    void show_dist()
    {
        cout<<"\n Distance = "<<feet<<"  feet "<<inches<<" inches";
    }
};
///////////////////////////////////////////////////

int main()
{
    Distance d1;
    d1.get_dist();
    d1.show_dist();
    Distance* disp;
    disp = new Distance;
    disp->get_dist();
    disp->show_dist();
    return 0;
}
