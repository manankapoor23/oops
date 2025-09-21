#include <iostream>
#include "bank.h"
using namespace std;


int main(){
    BankAccount myacc("11229988",500);
    myacc.depositMoney(300);
    myacc.withdraw(300);
    myacc.depositMoney(200);
}