# **Unit 2**

### **Exercise 1: Write a program that asks the user for their annual income and shows the corresponding tax on the screen.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 
```

***Input***
```c++ 
//Integer main function 
int main(){

    //Declarate var
    int renta; 
    float impuesto;
```

***Process***
```c++
//Use of income if less than $10,000
    if(renta < 10000){
        cout << "Tu impuesto es de 5%"; //Tax of 5%
        impuesto = renta * .05; with tax of 5%
    }
//Use of income if between $10,000 and $20,000
    if((renta >= 10000) && (renta <= 20000)){
        cout << "Tu impuesto es de 15%"; //Tax of 15%
        impuesto = renta * .15; 
    }
//Use of income if between $20,000 and $35,000
    if((renta >= 20000) && (renta <= 35000)){
        cout << "Tu impuesto es de 20%"; //Tax of 20%
        impuesto = renta * .2; 
    }
//Use of income if between $35,000 and $60,000
    if((renta >= 35000) && (renta <= 60000)){
        cout << "Tu impuesto es de 30%"; //Tax of 30%
        impuesto = renta * .3; 
    }
//Use of income if greater than $60,000
    if(renta > 60000){
        cout << "Tu impuesto es de 60%"; //Tax of 60%
        impuesto = renta * .45; 
    }
```

***Output***
```c++
//Print total payment with tax to pay 
cout << "\nEl impuesto a pagar es de: $" << impuesto;
cout << endl; 
}
```

***Screenshots***


### **Exercise 2: Write a program that reads the user's score and indicates their level of performance, as well as the amount of money the user will receive.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int main(){

    //INPUT 
    //Declarate var
    cout << "Su puntuacion es: \n";
    cin >> puntuacion;

    //PROCESS 
    //Use if 
    if(puntuacion == inaceptable){
        cout << "\nTu nivel de rendimiento es inaceptable";
        ganancia = inaceptable * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; //OUTPUT
    }
    else if(puntuacion == aceptable){
        cout << "\nTu nivel de rendimiento es aceptable"; 
        ganancia = aceptable * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; //OUTPUT
    }
    else if(puntuacion >= meritorio){
        cout << "\nTu nivel de rendimiento es meritorio";
        ganancia = meritorio * 2400;
        cout << "\n\nTu ganancia es de: \n$" << ganancia; //OUTPUT
    }
    else{
        cout << "\nTu nivel de rendimiento no es aceptable \n";
    }
    cout << endl;
    //Being a function, it must return a value, in this case 0
    return 0;
}
```

**Explanation** 
```c++
//This program indicates the level of performance of each employee in a company, and the amount of money they will receive
```

***Screenshots*** 


### **Exercise 3: Write a program for a company that has game rooms for all ages and wants to automatically calculate the price to charge its customers to enter.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

int main(){

    //INPUT 
    //Declarate var 
    cout << "Indique su edad \n";
    cin >> edad;

    //PROCESS 
    //Use if 
    if(edad < 4){
        cout << "\nSu entrada es gratis"; //OUTPUT
    }
    else if((edad >= 4) && (edad <= 18)){
        cout << "\nDebe pagar $5"; //OUTPUT
    }
    else if(edad > 18){
        cout << "Debe pagar $10"; //OUTPUT
    }
    cout << endl; 
    //Being a function, it must return a value, in this case 0
    return 0;
}
```

**Explanation** 
```c++
//This program indicates the ticket price to be paid by ages
```

***Screenshots*** 


### **Exercise 4: Write a program that asks the user if he wants vegetarian pizza or not, and based on his answer shows him the menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are on all the pizzas.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

int mainI(){

    //INPUT 
    //Declarate var

    //
    cout << "Indique aqui la pizza que desea ordenar \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cin >> pizza;

    //PROCESS 
    //Use if 
    if(pizza == 1){
        cout << "\nMENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nEliga el ingrediente extra que desea agregar \n";
        cin >> ingrediente; 
        if(ingrediente == 1){
        
        }else if(ingrediente == 2){

        }
}else if(pizza == 2){
        cout << "\nMENU NO VEGETARIANO\n";
        cout << "1. Peperoni\n";
        cout << "2. Jamon\n";
        cout << "3. Salmon";

        cout << "\nEliga sus ingredientes\n";
        cin >> ingrediente; 
        if(ingrediente == 1){
        
        }else if(ingrediente == 2){

        }else if(ingrediente == 3){

        }
}
}
```

***Output*** 
```c++
//if 
cout << "\nPedido \n"; 
cout << "Pizza vegetariana \n";
cout << "Mozzarella y tomate \n";
cout << "Ingrediente extra: \n";
//cout << "Pimiento, Tofu, Peperoni, Jamon, Salmon";
cout << endl;
```
**Explanation** 
```c++ 
//This program shows the order information per user in pizzeria Bella Napoli
```

***Screenshots***