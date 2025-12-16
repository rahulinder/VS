#include<iostream>
using namespace std;
class matrix{
    static const int n = 9;
    int mat1 [n];
    int mat2 [n];
    int mat3 [n];
    public:
    void set(const int *arr){
        int m = n-1;
        for(int i = 0; i < n; i++){
            mat1[i] = arr[i];
            mat2[i] = arr[m];
            --m;
        }
    }
    void show(){
        cout<<"mat1\n";
        for(int i = 0; i < n; i++){
            cout<<mat1[i]<<" ";
        }
        cout<<"\n\nmat2\n";
        for(int i = 0; i < n; i++){
            cout<<mat2[i]<<" ";
        }
        cout<<"\n\nmat3\n";
        for(int i = 0; i < n; i++){
            cout<<mat3[i]<<" ";
        }
    }
    friend matrix operator *(matrix ob);
};

matrix  operator * (matrix ob){
    int arr[9];
    for(int i = 0; i < 9; i++){
        ob.mat3[i] = ob.mat1[i] * ob.mat2[i]; 
    }
    return ob;
} 

int main(){

    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    matrix ob;
    ob.set(arr);
    
    matrix result = *ob;

    result.show();

    return 0;
}