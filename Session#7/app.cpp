#include <iostream>

using namespace std;

/*
    what is a class?
    class user defined data type
    class can have multiple data members
    calss can have functions called methods


    access modifier
    public: accessible from anywhere
    private: accessible only from within the class
    protected: accessible from within the class and derived


    constructor: special function called when the object is created

    in c++

    class is by default private
    struct is by default public


    Getters and Setters

    getters : used to get the value of a private data member
    setters : used to set the value of a private data member
*/

class Car
{
private:
    string color, brand, model;
    double speed;

public:
    Car()
    {
        // color = "No Color";
        // cout << "Default constructor called" << endl;
    }

    Car(string color, string brand = "No Brand", string model = "No Model", double speed = 0)
    {
        this->color = color;
        this->brand = brand;
        this->model = model;
        this->speed = speed;
    }

    void Accelerate()
    {
        speed += 10;
    }

    // getters and setters

    string GetColor()
    {
        return color;
    }
    string GetBrand()
    {
        return brand;
    }

    string GetModel()
    {
        return model;
    }
    double GetSpeed()
    {
        return speed;
    }

    void SetColor(string color)
    {
        if (color == "Black")
            return;

        this->color = color;
    }
    void SetSpeed(double speed)
    {
        if (speed < 0)
            return;

        this->speed = speed;
    }

    void SetBrand(string brand)
    {
        this->brand = brand;
    }
    ~Car()
    {
    }
};

int main()
{
    freopen("output.txt", "w", stdout);
    // Car car1("red", "toyota", "corolla", 100);
    // Car car("Brwon");
    // car.Accelerate();
    // car.SetColor("Black");
    // cout << car.GetColor() << endl;

    // cout << car2.brand << endl;

    /*
        objects and pointers
    */
    // Car car[10];
    // car[0].SetColor("Red");
    // car[1].SetColor("Blue");
    // car[2].SetColor("Green");
    // car[3].SetColor("Yellow");
    // car[4].SetColor("Black");

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << car[i].GetColor() << endl;
    // }

    // Car *car = new Car("Red", "Toyota", "Corolla", 100);
    // cout << car->GetColor() << endl;
    // cout << car->GetBrand() << endl;
}