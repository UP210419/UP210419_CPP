# **Unit 2**

### **Exercise 1: Write a program that asks the user for their annual income and shows the corresponding tax on the screen.**

```c++
//Librería para manejo de entradas y salida de pantalla 
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std; 

//Función principal de tipo entero 
int main(){

}
```
**Explanation** 
```c++
//This program indicates the tax to pay for annual income payment
```

***Input*** 
```c++
//Solicita pago de renta anual
cout << "Cual es su renta anual \n";
cin >> renta;
```

***Process*** 
```c++
if(renta < 10000){
    cout << "Tu impuesto es de 5%"; //Impositivo de 5%
    impuesto = renta * .05;
}
if((renta >= 10000) && (renta <= 20000)){
    cout << "Tu impuesto es de 15%"; //Impositivo de 15%
    impuesto = renta * .15;
}
if((renta >= 20000) && (renta <= 35000)){
    cout << "Tu impuesto es de 20%"; //Impositivo de 20%
    impuesto = renta * .2;
}
if((renta >= 35000) && (renta <= 60000)){
    cout << "Tu impuesto es de 30%"; //Impositivo de 30%
    impuesto = renta * .3;
}
if(renta > 60000){
    cout << "Tu impuesto es de 60%"; //Impositivo de 60%
    impuesto = renta * .45;
}
```

***Output***
```c++
cout << "\nEl impuesto a pagar es de: $" << impuesto;
cout << endl; 
```

***Screenshots***

### **Exercise 2: Write a program that reads the user's score and indicates their level of performance, as well as the amount of money the user will receive.**

```c++
#include <iostream>
```

***Input***
```c++
cout << "Su puntuacion es: \n";
cin >> puntuacion;
```

***Process*** 
```c++
if(puntuacion == inaceptable){
    cout << "\nTu nivel de rendimiento es inaceptable";
    ganancia = inaceptable * 2400;
    cout << "\n\nTu ganancia es de: \n$" << ganancia; //Output
}else if(puntuacion == aceptable){
    cout << "\nTu nivel de rendimiento es aceptable"; 
    ganancia = aceptable * 2400;
    cout << "\n\nTu ganancia es de: \n$" << ganancia; //Output
}else if(puntuacion >= meritorio){
    cout << "\nTu nivel de rendimiento es meritorio";
    ganancia = meritorio * 2400;
    cout << "\n\nTu ganancia es de: \n$" << ganancia; //Output
}else{
    cout << "\nTu nivel de rendimiento no es aceptable \n";
}
```

**Explanation** 
```c++
//This program indicates the level of performance of each employee in a company, and the amount of money they will receive
```

***Screenshots*** 

### **Exercise 3: Write a program for a company that has game rooms for all ages and wants to automatically calculate the price to charge its customers to enter.**

```c++
#include <iostream>
``` 

***Input*** 
```c++
cout << "Indique su edad \n";
cin >> edad;
``` 

***Process*** 
```c++
if(edad < 4){
    cout << "\nSu entrada es gratis"; //Se imprime resultado
}else if((edad >= 4) && (edad <= 18)){
    cout << "\nDebe pagar $5"; //Se imprime resultado
}else if(edad > 18){
    cout << "Debe pagar $10"; //Se imprime resultado
}
```

***Output*** 
```c++

```
**Explanation** 
```c++
//This program indicates the ticket price to be paid by ages
```

***Screenshots*** 

### **Exercise 4: Write a program that asks the user if he wants vegetarian pizza or not, and based on his answer shows him the menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are on all the pizzas.**

***Input***
```c++
cout << "Indique aqui la pizza que desea ordenar \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cin >> pizza;
```

***Process***
```c++
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