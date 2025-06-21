#include<iostream>
#include<string>

using namespace std;

class Bird {

    protected :  

    int age,weight;
    int nol;
    string color; 

    void eat (){
        cout<<"Bird is Eating\n";
    }
    void fly (){
        cout<<"Bird is Flying\n";
    }
};

class Sparrow :  public Bird {
    public : 
    Sparrow(int age , int weight, string color, int nol ){
        this->age = age;
        this->color = color;
        this->weight = weight;
        this->nol = nol;
    }
    void printCLR(){
        cout<<this->color<<endl;
    }

    void doEat(){
        this->eat();
    }
    void doFly(){
        this->fly();
    }
    void grassing(){
        cout<<"Bird is Grassing\n";
    }
};

class Peigon : public Bird{
    public : 
    void guttering() { 
        cout<<"Bird is Guttering\n";
    }
    void doEat(){
        this->eat();
    }
      void doFly(){
        this->fly();
    }
};

int main(){
    Sparrow s(2, 32, "brown", 2);
        s.printCLR();
        s.doEat();
    return 0;
}