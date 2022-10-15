# **Unit 2**

### **Exercise 1: Write a program that asks the user for their annual income and shows the corresponding tax on the screen.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int main(){
```

***Input***
```c++ 
    //Declaration of variables
    int renta; 
    float impuesto;

    //Request payment for annual rent
    cout << "Cual es su renta anual \n";
    cin >> renta;
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
//Being a function, it must return a value, in this case 0
return 0;  
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
```

***Input***
```c++
    //Declaration of variables
    float puntuacion; 
    float inaceptable = 0.0;
    float aceptable = 0.4;
    float meritorio = 0.6;
    float ganancia; 

    //Request employee score
    cout << "Su puntuacion es: \n";
    cin >> puntuacion;
```

***Process and Output***
```c++
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

This program indicates the level of performance of each employee in a company, and the amount of money they will receive.

***Screenshots*** 


### **Exercise 3: Write a program for a company that has game rooms for all ages and wants to automatically calculate the price to charge its customers to enter.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int main(){
```

***Input***
```c++
    //Declaration of variables
    int edad;

    //Request your age
    cout << "Indique su edad \n";
    cin >> edad;
```

***Process and Output***
```c++
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

This program indicates the ticket price to be paid by ages.


***Screenshots*** 


### **Exercise 4: Write a program that asks the user if he wants vegetarian pizza or not, and based on his answer shows him the menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are on all the pizzas.**

***C++***
```c++ 
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int mainI(){
``` 

***Input***
```c++
    //Declaration of variables
    int pizza;
    int ingrediente;

    //Request pizza of your choice
    cout << "Indique aqui la pizza que desea ordenar \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cin >> pizza;
```

***Process and Output***
```c++
    if(pizza == 1){
        cout << "\nMENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nEliga el ingrediente extra que desea agregar \n";
        cin >> ingrediente; 

        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Pimiento";
        }
        else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Tofu";
        }
    }else if(pizza == 2){
        cout << "\nMENU NO VEGETARIANO\n";
        cout << "1. Peperoni\n";
        cout << "2. Jamon\n";
        cout << "3. Salmon";

        cout << "\nEliga sus ingredientes\n";
        cin >> ingrediente; 

        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Peperoni";
        }
        else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Jamon";
        }
        else if(ingrediente == 3){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Salmon";
        }
    }
    cout << endl;
    //Being a function, it must return a value, in this case 0
    return 0;
}
```

**Explanation** 

This program shows the order information per user in pizzeria Bella Napoli.

***Screenshots***

### **Exercise 5: Make a program in which 6 temperatures are entered and determine the average, the lowest and the highest.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int mainI(){
```

***Input and Process***
```c++
    //Declaration of variables
    int contador;
    float temperatura;
    float AcumTemp=0;
    float promedio; 
    float baja = -30, alta = 40;

    do{
        //Request the temperature 
        cout << "Dame la temperatura: ";
        cin >> temperatura;

        AcumTemp += temperatura;
        promedio = AcumTemp / 6;

        if(temperatura > alta){
            alta = temperatura;
        }
        if(temperatura < alta){
            baja = temperatura;
        }

        contador ++;
    }while(contador <= 6);
```

***Output***
```c++
    cout << "El promedio de temperatura es: " << promedio;
    cout << "\nLa temperatura minima es: " << baja;
    cout << "\nLa temperatura maxima es: " << alta;
    cout << endl; 
    //Being a function, it must return a value, in this case 0
    return 0;
}
```

***Explanation***


***Screenshots***


### **Exercise 6: Make a program that reads indefinitely quantities of products and their price, and at the end indicates the total of the invoice. To know that the purchase has been completed, a 0 must be entered in the quantity.**

***C++***
```c++
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int mainI(){ 
```

***Input and Process***
```c++
    //Declaration of variables 
    int cant; 
    int precio;

    do{  
        //Request quantity of products you buy
        cout << "Cantidad de productos que desea comprar: ";
        cin >> cant; 

        if(cant != 0){
        //Request product price 
        cout << "Precio de producto a comprar: ";
        cin >> precio;
        
        total = total + precio * cant;   
        }
    }while(cant != 0);
```

***Output***
```c++
    cout << "factura \n"; 
    cout << "---------------- \n";
    cout << "Pago total: $" << total;
    cout << endl;
    //Being a function, it must return a value, in this case 0
    return 0;
}
```

***Explanation***

This program registers a number of products purchased and the price of each of these of a user, and shows the total payment of the purchase.

***Screenshots***


### **Exercise 7: Write a program that performs the conversion from binary to decimal, only for integers greater than 0. The result can be displayed as an integer variable or in a set of characters.**

***C++***
```c++ 
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int mainI(){
``` 

***Input***
```c++
    //Declaration of variables
    int num; 
    string bin = ""; 
    
    //Request a number 
    cout << "Introduce un numero cualquiera ";
    cin >> num;
```

***Process***
```c++
    while(num != 0){
        if(num%2 == 0){
            bin = "0" + bin;
        }else{
            bin = "1" + bin; 
        }
        num = num/2;  
    }
```

***Output***
```c++
    cout << "Numero binario: " << bin;
    cout << endl; 
    //Being a function, it must return a value, in this case 0
    return 0; 
}
```

***Explanation***

This program converts any decimal number of type integer to binary number. 

***Screenshots***


**Exercise 8: Write a program that displays the multiplication table of a number entered by the user.**

***C++***
```c++ 
//Library for handling screen inputs and outputs 
#include <iostream>

//Using the namespace to avoid the std::
using namespace std; 

//Integer main function 
int mainI(){
``` 

***Input***
```c++ 
    //Declaration of variables
    int n;
    int x = 1; 
    int res;

    //Requests the number of the multiplication table to be displayed
    cout << "Introduce el numero de la tabla que deseas ver ";
    cin >> n;
```

***Process and Output***
```c++
    do{
        res = n*x;

        cout << "|  " << x << "     x     " << n << "     =     " << res << "   |" << "\n";
        cout << "---------------------------------- \n";
        x++;
    }while(x <= 10);

    cout << endl;
    //Being a function, it must return a value, in this case 0 
    return 0;
}
```

***Explanation***

This program shows the multiplication table of any integer type number that is entered by the user.

***Screenshots***


**Exercise 9:**

***C++***


***Input***


***Process***


***Output***


***Explanation***


***Screenshots***