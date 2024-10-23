#include <iostream>
#include <string>
using namespace std;

int main(){
    string familia;
    string clado;
    string dieta;
    
    getline(cin >> ws, clado);
    getline(cin >> ws, familia);
    getline(cin >> ws, dieta);
    
    if(clado == "vertebrado"){
        
        if(familia == "ave"){
            
            if(dieta == "carnivoro"){
                cout << "aguia" <<endl;
            } else if (dieta == "onivoro"){
                cout << "pomba" <<endl;
            }
            
        }else if (familia == "mamifero"){
            
            if (dieta == "onivoro"){
                cout << "homem" <<endl;
            }else if(dieta == "herbivoro"){
                cout << "vaca" <<endl;
            }
            
        }
    } else if (clado == "invertebrado"){
        
     if (familia == "inseto"){
         
         if(dieta == "hematofago"){
             cout << "pulga" <<endl;
         }else if (dieta == "herbivoro"){
             cout << "lagarta" <<endl;
         }
         
     } else if(familia == "anelideo"){
         
         if(dieta == "hematofago"){
             cout << "sanguessuga" <<endl;
         } else if(dieta == "onivoro"){
             cout << "minhoca" <<endl;
         }
         
     }
    }
    
    
    
    return 0;
}