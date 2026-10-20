#include <iostream>

using namespace std;


int main () {
    int n;
    cin  >> n;
    int vetor[100000];
    int temp;
    
    for(int i =0; i < n; i++){
        
        cin  >> vetor[i];
    }
    
    
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            
            if(vetor[j] > vetor[j + 1]) {
                
                temp = vetor [j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    cout << "Vetor ordenado: " << endl;
    for( int i = 0; i < n; i++){
        
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}