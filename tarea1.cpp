/*
Autor: Jose Carlos Molano de Oro 
*/

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stdlib.h>
#include <time.h>

//Compilación -> clang++ -std=c++11 -stdlib=libc++ tarea1.cpp -o tarea1

int main()
{
    //1. Declaración vector, list y deque
    std::vector <int> Vector;
    std::deque <int> Deque;
    std::list <int> Lista;

    //2. Llenado de vector, Lista y deque


    /* 2.1. vector: llenado 25 numeros aleatorios insertados por el final
        rand()%100+1 -> genera vectores aleatorios entre 0 y 100
        srand(time(0)) -> generacion de diferentes secuencias aleatorias en cada compilación
        Vector.push_back -> ingreso numero aleatorio por la cola del vector
    */
    std::srand(time(0));

    for (int i=0;i<25;i++)
    {
      Vector.push_back(rand()%100+1);
    }

    /* 2.2. list y deque: 30 datos insertados uno al inicio, uno al final, ... (intercalados)
        Deque.push_front -> ingreso numero aleatorio por al frente
        Deque.push_back -> ingreso numero aleatorio por la cola
        Lista.push_front -> ingreso numero aleatorio por al frente
        Lista.push_back -> ingreso numero aleatorio por la cola
    */
    for (int i=0;i<15;i++)
    {
      Deque.push_front(rand()%100+1);
      Deque.push_back(rand()%100+1);
      Lista.push_front(rand()%100+1);
      Lista.push_back(rand()%100+1);
    }
    //3. Impresión mediante iteradores

    /* 3.1. Impresion cada contenedor en orden normal

        Declaración de iteradores
        std::vector <int>::iterator iTv;
        std::deque <int>::iterator iTd;
        std::list <int>::iterator iTl;
    */

    std::vector <int>::iterator iTv;
    std::deque <int>::iterator iTd;
    std::list <int>::iterator iTl;

    std::cout<<"vector en Orden Normal: ";
    for (iTv = Vector.begin();iTv !=Vector.end();iTv++)
    {
      std::cout<< *iTv <<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"deque en Orden Normal: ";
    for (iTd = Deque.begin(); iTd != Deque.end(); iTd++) {
      std::cout << *iTd << " ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"list en Orden Normal: ";
    for (iTl = Lista.begin(); iTl != Lista.end(); iTl++) {
      std::cout << *iTl << " ";
    }
    std::cout<<std::endl<<std::endl;

    /* 3.2. Impresion cada contenedor en orden inverso (iteradores en reverso)

        Declaración de iteradores
        std::vector <int>::reverse_iterator riTv;
        std::deque <int>::reverse_iterator riTd;
        std::list <int>::reverse_iterator iTl

        Referencias:
        i. https://www.cplusplus.com/reference/vector/vector/rbegin/
        ii. https://www.cplusplus.com/reference/vector/vector/rend/
    */
    std::vector <int>::reverse_iterator riTv;
    std::deque <int>::reverse_iterator riTd;
    std::list <int>::reverse_iterator riTl;

    std::cout<<"vector en Orden Inverso: ";
    for (riTv=Vector.rbegin();riTv !=Vector.rend();riTv++)
    {
      std::cout<< *riTv <<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"deque en Orden Inverso: ";
    for (riTd=Deque.rbegin();riTd !=Deque.rend();riTd++)
    {
      std::cout<< *riTd <<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"list en Orden Inverso: ";
    for (riTl=Lista.rbegin();riTl !=Lista.rend();riTl++)
    {
      std::cout<< *riTl <<" ";
    }
    std::cout<<std::endl<<std::endl;

    //4. Insersion valor aleatorio posicion 18, eliminacion valores ubicados en posiciones 5 y 10 e impresion en orden Normal
    // 4.1. Insersion valor aleatorio posicion 18

    std::vector <int>:: iterator piTv=Vector.begin();
    std::deque <int>:: iterator piTd=Deque.begin();
    std::list <int>:: iterator piTl=Lista.begin();
    for (int i=0;i<18;i++)
    {
      piTv++;
      piTd++;
      piTl++;
    }
    Vector.insert(piTv,rand()%100+1);
    Deque.insert(piTd,rand()%100+1);
    Lista.insert(piTl,rand()%100+1);

    //4.2. Eliminación valores en posiciones 5 y 10
    piTv=Vector.begin();
    piTd=Deque.begin();
    piTl=Lista.begin();
    for (int i=0;i<5;i++)
    {
      piTv++;
      piTd++;
      piTl++;
    }
    Vector.erase(piTv);
    Deque.erase(piTd);
    Lista.erase(piTl);

    piTv=Vector.begin();
    piTd=Deque.begin();
    piTl=Lista.begin();
    for (int i=0;i<10;i++)
    {
      piTv++;
      piTd++;
      piTl++;
    }
    Vector.erase(piTv);
    Deque.erase(piTd);
    Lista.erase(piTl);

    //4.3. Impresion list, deque y vector en orden Normal
    std::cout<<"vector nuevo en Orden Normal: ";
    for (iTv = Vector.begin();iTv !=Vector.end();iTv++)
    {
      std::cout<< *iTv <<" ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"deque nuevo en Orden Normal: ";
    for (iTd = Deque.begin(); iTd != Deque.end(); iTd++) {
      std::cout << *iTd << " ";
    }
    std::cout<<std::endl<<std::endl;

    std::cout<<"list nuevo en Orden Normal: ";
    for (iTl = Lista.begin(); iTl != Lista.end(); iTl++) {
      std::cout << *iTl << " ";
    }
    std::cout<<std::endl<<std::endl;
}
