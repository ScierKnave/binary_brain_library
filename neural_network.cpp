// function template
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

//what is this

class neural_network{
  public:
    neural_network(){

    }

    void add_layer(int size, string a_fun){
      //complete
    }

    void fit(int** X_train, int** Y_train, string loss_f){
      //complete
    }

  private:
    array<float, 0> W; //weight matrix
    vector<float> G; //gradient

    void gradient(){
      //complete
    }

    void gradient_descent(){
      //complete
    }
    

};

int main() {
  neural_network gizzar;
  cout << "works!";
  return 0;
}


