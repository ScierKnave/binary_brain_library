
// function templates
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

//what is this 2 in the 4


class ff_nn{
    public:
        ff_nn(){
        //complete
        }
        void add_layer(int size, string a_fun){
        //complete
        }
        void fit(int** X_train, int** Y_train, string loss_f){
        //complete
        }
    private:
        vector< vector<float> > N_MATRIX; 
        void forward_prop(){
        //complete
        }
        void backward_prop(int ith_layer){


        //complete
        }
        void gradient_descent(){
        //complete
        }
};

int main() {
    system("Pause");
    return 0;
}





