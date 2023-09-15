#include <iostream>
using namespace std;
class Vehicle
{
private:
    string make, model;
    int year;
public:
    void inputData(){
        cout <<"Enter Company Name: ";
        cin >> make;
        cout <<"Enter model:" ;
        cin >> model;
        cout <<"Enter Year: ";
        cin >> year;
    }
    void display(){
        cout <<"Make: " << make << endl;
        cout <<"Model: "<< model << endl;
        cout <<"Year: " << year << endl;
    }
};
class Car : public Vehicle
{
private: 
    int numDoor;
public:
    void inputData(){
        Vehicle :: inputData();
        cout <<"Enter Number of Door: ";
        cin >> numDoor;
    }
    void display(){
        Vehicle::display();
        cout <<"Door: " << numDoor << endl;
    }
};
class Toyota : public Car{
private: 
    string trimlevel;
public:
    void inputData(){
        Car::inputData();
        cout <<"Enter Trim Level: " ;
        cin >> trimlevel;
    }
    void display(){
        Car::display();
        cout <<"Trim level: "<<trimlevel << endl;

    }

};
int main()
{   
    Toyota myCar;
    cout <<"--------------------INPUT CAR INFO----------------" << endl;
    myCar.inputData();
    cout <<"--------------------OUTPUT CAR INFO---------------" << endl;
    myCar.display();
    system("pause"); 
    return 0;
}