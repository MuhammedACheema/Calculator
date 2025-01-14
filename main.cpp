#include <iostream>

double sum(float a, float b){
    return a+b;
}

double dif(float a, float b){
    return a - b;
}

double product(float a, float b){
    return a * b;
}

double division(float a, float b){
    return a / b;
}

int main(){
    double result = 0;
    char operation; 
    char cont;
    float val1;
    float val2;
    

    for(int i=0; i < 100; i++){
        std::cout << "do you want to continue y or n" << std::endl;
        std::cin >> cont; 
        
        if(cont == 'y'){
            std::cout << "pick 2 values you want to do an operation to, it can be an int or decimal: " <<std::endl;
            std::cin >> val1;
            std::cin >> val2;
            std::cout << "pick an operation +,-,x,/" << std::endl;
            std::cin >> operation;

            if(operation == '+'){
                result = sum(val1,val2);
                std::cout << result << std::endl;
            }
            else if(operation == '-'){
                result = dif(val1,val2);
                std::cout << result << std::endl;
            }
            else if(operation == 'x'){
                result = product(val1,val2);
                std::cout << result << std::endl;
            }
            else if(operation == '/'){
                result = division(val1,val2);
                std::cout << result << std::endl;
            }
        }

        if(cont == 'n'){
            return 0;
        }

        else if(cont != 'n' or cont != 'y'){
            std::cout << "invalid input" <<std::endl;
        }

    }
    return 0;
}