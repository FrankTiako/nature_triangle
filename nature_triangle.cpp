#include <iostream>
int nature(int a, int b, int c);
int nature(int a, int b, int c){
    if(a == b && b == c){
        return 3;
    }else if(a == b){
       if(a*a + b*b == c*c){
            return 5;
       }else{
           return 2;
       }
    }else if (a == c){
        if(a*a + c*c == b*b){
            return 5;
       }else{
           return 2;
       }
    }else if(b == c){
        if(b*b + c*c == a*a){
            return 5;
       }else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
           return 4;
       }
    }else{
        return 1;
    }
}



int main(int argc, char** argv){
    unsigned int a,b,c,d;
    std::cout << "Vous vous appretez a connaitre la nature de votre triangle"<< std::endl;
    std::cout << "entrez la longueur du cote AB: "<< std::endl;
    std::cin >> a ;
    std::cout << "entrez la longueur du cote AC: "<< std::endl;
    std::cin >> b ;
    std::cout << "entrez la longueur du cote BC: "<< std::endl;
    std::cin >> c ;
    d = nature(a,b,c);
    switch (d)
    {
    case 1:
        std::cout << "Il s'agit d'un triangle quelconque"<< std::endl;
        break;
    case 2:
        std::cout << "Il s'agit d'un triangle isocele" << std::endl;
        break;
    case 3:
        std::cout << "Il s'agit d'un triangle equilateral" << std::endl;
        break;
    case 4:
        std::cout << "Il s'agit d'un triangle  rectangle" << std::endl;
        break;
    case 5:
        std::cout << "Il s'agit d'un triangle rectangle isocele" << std::endl;
        break;
    }
    return 0 ;
}
