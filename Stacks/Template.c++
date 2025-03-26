#include<iostream>
using namespace std;
template<typename T,typename W>
class Pair{
    T x;
    W y;
    public:

    void SetX(T x){
        this->x=x;
    }
    T GetX(){
        return x;
    }
    void SetY(W y){
        this->y=y;
    }
    W GetY(){
        return y;
    }
};

int main(){
    Pair<Pair<int,int>,int>p2;
    p2.SetY(10);
    Pair<int,int>f4;
    f4.SetX(5);
    f4.SetY(16);
    p2.SetX(f4);
    cout<<p2.GetX().GetX()<<" "<<p2.GetX().GetY()<<" "<<p2.GetY();
}
//     int main(){
//         Pair<int,float>f1;
//         f1.SetX(10.1);
//         f1.SetY(10.1);

//         cout<<f1.GetX()<<" "<<f1.GetY();
// }
//For Same Type Of Variables
// template <typename T>
// class Pair{
//     T x;
//     T y;

//     public:
//     void SetX(T x){
//         this->x=x;
//     }
//     T GetX(){
//         return x;
//     }
//     void SetY(T y){
//         this->y=y;
//     }
//     T GetY(){
//         return y;
//     }
// };
// int main(){
//     Pair<int>f1;
//     f1.SetX(10);
//     f1.SetY(20);
//     cout<<f1.GetX()<<" "<<f1.GetY();
// }