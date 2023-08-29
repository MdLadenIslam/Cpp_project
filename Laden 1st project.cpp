#include<bits/stdc++.h>
using namespace std;
//Encapsulation:
class Person {
private:
    string name;
    int id;

public:
   // Constructor:
    Person(string n, int i)  {
        name = n;
        id = i;
    }

virtual void massage (){//VIRTUAL FUNCTION
     cout<<".......PROJECT SOME ANIMAL......"<<endl;
 }
   string getName()  {
        return name;
    }


    void setName(string n) {
        name = n;
    }


    int getID() {
        return id;
    }



};




// BASE CLASS:
class Animal{
     protected:
        string name;
          int age;

    public:
     // Constructor ....
          Animal(string n , int a){
              name = n;
              age = a;
          }

    virtual void massage (){//VIRTUAL FUNCTION
     cout<<"You typing a Animal.Animals are multicellular eukaryotes whose cells are bound together by collagen. Animals dominate human conceptions of life on Earth because of their size, diversity, abundance, and mobility. The presence of muscles and mobility is one of the primary characteristics of the animal kingdom."<<endl;
 }

    void makeSound(){
        cout<<"Animal make a generic sound."<<endl;
    }
    void displayInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
// SUB CLASS:
class Mammal : public Animal{
    public:
    string category;
     // Constructor overloading..
    Mammal(string n , int a , string c) : Animal(n , a){
        category = c;
    }

 virtual void massage (){//VIRTUAL FUNCTION
     cout<<"You typing a mammal.An animal is considered a mammal if it can produce milk. Other features unique to mammals include hair or fur (chemically different from hairlike structures on non-mammals) and a diaphragm separating the heart and lungs from the abdomen."<<endl;
 }

 // OVERRIDE && OVERLOADING
    void makeSound(){
        cout<<"Mammal make a mammal sound."<<endl;
    }
    void displayInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"category:"<<category<<endl;
    }
};

// SUB CLASS:
class Bird : public Animal{
    public:
    string category;
     // Constructor overloading..
    Bird(string n , int a , string c) : Animal(n , a){
        category = c;
    }
    virtual void massage (){//VIRTUAL FUNCTION
     cout<<"You typing a Brid.Birds are a group of warm-blooded vertebrates constituting the class Aves characterised by feathers, toothless beaked jaws, the laying of hard-shelled eggs, a high metabolic rate, a four-chambered heart, and a strong yet lightweight skeleton."<<endl;
 }
    //Polymorphism:
    void makeSound(){
        cout<<"Bird make a chirp sound."<<endl;
    }
    void displayInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"category:"<<category<<endl;
    }
};

// BASE CLASS:
class Reptile : public Animal{
    public:
    string category;
     // Constructor overloading..
    Reptile(string n , int a , string c) : Animal(n , a){
        category = c;
    }
    virtual void massage (){//VIRTUAL FUNCTION
     cout<<"You typing a Reptile.Reptiles are a class of vertebrates made up mostly of snakes, turtles, lizards, and crocodilians. These animals are most easily recognized by their dry, scaly skin. Almost all reptiles are cold-blooded, and most lay eggs—though some, like the boa constrictor, give birth to live young."<<endl;
 }
    //Polymorphism:
    void makeSound(){
        cout<<"Reptile make a reptile sound."<<endl;
    }
    void displayInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"category:"<<category<<endl;
    }
};
int main(){




    Person p("MD.LADEN ISLAM" , 291);

    cout<<endl<<"-----BUILDER INFO-----"<<endl;
    cout << "Name: " << p.getName() <<endl;
    cout << "ID: " << p.getID() <<endl;

    cout<<endl<<endl;
    p.massage();
    cout<<endl<<endl;



    cout<<endl<<endl<<"-----USER INFO-----"<<endl;
    cout<<endl<<endl;
    string x;


    cout<<"Enter any amnimal name..:"<<endl;
    cin>>x;
    int y;
    cout<<"Enter age this amnimal..:"<<endl;
    cin>>y;

   cout<<endl<<endl;


    Animal a(x , y);
    a.makeSound();
    a.displayInfo();
    cout<<endl<<endl;
    a.massage();
    cout<<endl<<endl;


     string o;
    cout<<"Enter any mammal name..:"<<endl;
    cin>>o;
    int i;
    cout<<"Enter age this mammal ..:"<<endl;
    cin>>i;
    string u;
    cout<<"Enter category..:"<<endl;
    cin>>u;

     Mammal m(o , i , u);

    m.makeSound();
    m.displayInfo();
    cout<<endl<<endl;
     m.massage();
    cout<<endl<<endl;

     string t;
    cout<<"Enter any bird name..:"<<endl;
    cin>>t;
    int s;
    cout<<"Enter age this bird ..:"<<endl;
    cin>>s;
    string e;
    cout<<"Enter category..:"<<endl;
    cin>>e;

   Bird b(t , s , e);
    b.makeSound();
    b.displayInfo();
    cout<<endl<<endl;
    b.massage();
    cout<<endl<<endl;



     string l;
    cout<<"Enter any reptile name..:"<<endl;
    cin>>l;
    int k;
    cout<<"Enter age this reptile ..:"<<endl;
    cin>>k;
    string j;
    cout<<"Enter category..:"<<endl;
    cin>>j;


    Reptile r(l , k , j);
    r.makeSound();
    r.displayInfo();
    cout<<endl<<endl;
    r.massage();
    cout<<endl<<endl;










}
