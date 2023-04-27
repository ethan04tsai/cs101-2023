#include <iostream>

using namespace std;
Class BMW_Car : public Car {
    private:
    string m_DriveMode;
    
    public:
    BMW_Car(string y, int z, int s):Car("bmw",y,z,s){
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear-wheel";
    }
    
    string get_Drive_Mode(){
        return m_DriveMode;
    }
};

int main()
{
    BMW_car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout << " : Drive Mode = " << car_1.get_Drive_Mode() << endl;
    return 0;
}
