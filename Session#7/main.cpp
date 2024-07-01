#include <iostream>
using namespace std;

class Pizza
{
public:
    int size, price, quantity;
    string name;

    Pizza(int size = 0, int price = 0, int quantity = 0, string name = "No Name")
    {
        this->size = size;
        this->price = price;
        this->quantity = quantity;
        this->name = name;
    }
    ~Pizza()
    {
        cout << "Pizza " << name << " is destroyed" << endl;
    }
};
class PizzaRestaurant
{
public:
    string name;
    Pizza *pizzas;
    int numberOfAvailablePizzas;
    int sizeOfPizzasArray;
    PizzaRestaurant(string name = "No Name")
    {
        pizzas = new Pizza[2];
        sizeOfPizzasArray = 2;
        numberOfAvailablePizzas = 0;
        this->name = name;
    }
    void AddPizza(Pizza pizza)
    {

        if (numberOfAvailablePizzas < sizeOfPizzasArray)
        {
            pizzas[numberOfAvailablePizzas] = pizza;
            numberOfAvailablePizzas++;
        }
        else
        {
            sizeOfPizzasArray = sizeOfPizzasArray * 2;
            Pizza *newPizzas = new Pizza[sizeOfPizzasArray * 2];
            for (int i = 0; i < numberOfAvailablePizzas; i++)
            {
                newPizzas[i] = pizzas[i];
            }

            newPizzas[numberOfAvailablePizzas] = pizza;
            numberOfAvailablePizzas++;

            delete[] pizzas;
            pizzas = newPizzas;
        }
    }
    void GetPizzas()
    {
        for (int i = 0; i < numberOfAvailablePizzas; i++)
        {
            if (pizzas[i].name != "No Name")
            {
                cout << "Name: " << pizzas[i].name << endl;
                cout << "Size: " << pizzas[i].size << endl;
                cout << "Price: " << pizzas[i].price << endl;
                cout << "Quantity: " << pizzas[i].quantity << endl;
                cout << "--------------------------\n";
            }
            else
            {
                break;
            }
        }
    }
    ~PizzaRestaurant()
    {
        delete[] pizzas;
    }
};

int main()
{
    freopen("output.txt", "w", stdout);

    PizzaRestaurant resturant("Some Resturant");
    resturant.AddPizza(Pizza(30, 100, 2, "Margarita"));
    resturant.AddPizza(Pizza(40, 150, 1, "Pepperoni"));
    resturant.AddPizza(Pizza(50, 200, 3, "Hawaiian"));
    resturant.AddPizza(Pizza(60, 250, 4, "BBQ"));
    resturant.AddPizza(Pizza(70, 300, 5, "Cheese"));
    // resturant.GetPizzas();
}