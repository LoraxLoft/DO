#include <iostream>
#include <vector>
using namespace std;

class Matrix{

public:
    int n, m;
    vector<vector<double>> values;

    explicit Matrix(int in_line, int lines){
        n = in_line;
        m = lines;
    }

    void input(){
        cout << "Input the coefficients in each line\n(use Enter as a separator)"<< endl;
        for(int i = 0; i<  m; i++){
            vector<double> buff;
            for(int j = 0; j<n; j++){
                double bufi;
                cin >> bufi;
                buff.push_back(bufi);
            }
            values.push_back(buff);
            cout<< "next line"<<endl;
        }
        cout << "good"<< endl;
    }


};


int main() {

    cout << "Input the number of variables"<<endl;
    int x, y;
    cin >> x;
    cin >> y;
    Matrix matr = Matrix(x, y);
    matr.input();

    return 0;
}
