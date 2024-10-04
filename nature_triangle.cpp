#include <iostream>

int main(int argc, char** argv){
    int a,b,c;
    std::cout << "Vous vous appretez a connaitre la nature de votre triangle"<< std::endl;
    std::cout << "entrez la longueur du cote a: "<< std::endl;
    std::cin >> a ;
    std::cout << "entrez la longueur du cote b: "<< std::endl;
    std::cin >> b ;
    std::cout << "entrez la longueur du cote c: "<< std::endl;
    std::cin >> c ;
    if(a == b == c){
        std::cout << "ce triangle est equilateral" << std::endl;
    }else if(a == b){
       if(a*a + b*b == c*c){
            std::cout << "Il s'agit d'un triangle rectangle isocele en c"<< std::endl;
       }else{
           std::cout << "il s'agit d'un triangle isocele ";
       }
    }else if (a == c){
        if(a*a + c*c == b*b){
            std::cout << "Il s'agit d'un triangle rectangle isocele en b"<< std::endl;
       }else{
           std::cout << "il s'agit d'un triangle isocele ";
       }
    }else if(b == c){
        if(b*b + c*c == a*a){
            std::cout << "Il s'agit d'un triangle rectangle isocele en a"<< std::endl;
       }else{
           std::cout << "il s'agit d'un triangle isocele ";
       }
    }else{
        std::cout << "Ce triangle est quelconque";
    }
    return 0 ;
}
