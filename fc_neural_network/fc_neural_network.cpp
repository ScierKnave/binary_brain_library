
// function templates
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

//what is this 2 in the 4

class fc_neural_network{
  public:
    fc_neural_network(){
      //complete
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
    void forward_prop(){
      //complete
    }
    void backward_pro(){
      //complete
    }
    void gradient_descent(){
      //complete
    }
};
int main() {
  fc_neural_network gizzard;
  string x;
  cin >> x;
  cout << x << endl; 
  system("Pause");
  return 0;
}





