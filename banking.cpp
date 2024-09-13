#include <iostream>
#include <iomanip>
void showBalance(double balance) {
    std::cout << "Your balance is $" <<std::setprecision(2)<<std::fixed<< balance << '\n';
}

double depositMoney(double deposit, double &balance) {  
    std::cout<<"Enter the amt you want to deposit " ;
    std::cin>>deposit;
    if(deposit<=0){
        std::cout<<"Enter a valid amt";
        return 0;
    }else{
        balance+=deposit;
        std::cout<<"Your current balance is "<<balance<<'\n';
        return balance;
    }    
}

double withdrawMoney(double withdraw, double &balance) { 
    std::cout<<"Enter the amt you want to withdraw \n" ;
    std::cin>>withdraw;
    if(withdraw<=0){
        std::cout<<"Enter a valid amt \n";
        return 0;
    }else if(withdraw>balance){
        std::cout<<"insufficient balance! current balance-- "<<balance<<'\n';
        return 0;
    }else{
        balance -= withdraw;
        std::cout<<"withdarw complete!!! Your current balance is "<<balance<<'\n';
        return balance;
    }    
}

int main() {
    int choice;
    double balance = 0;
    double deposit;
    double withdraw;

    do {
        std::cout << "****************************************\n";
        std::cout << "Enter your choice\n";
        std::cout << "****************************************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        std::cin.ignore();
        std::cin.clear();

        switch (choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                depositMoney(deposit, balance);
                break;
            case 3:
                withdrawMoney(withdraw, balance);
                break;
            case 4:
                std::cout << "Thank you for using our services.\n";
                break;
            default:
                std::cout << "Enter a valid command\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
