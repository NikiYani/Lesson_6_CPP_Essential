#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T multiplication(T firstArg, T secondArg)
{
    return firstArg * secondArg;
}

template <typename T>
class Bank
{
    int codeClient;
    T nameClient;
public:
    T getNameClient();
    void setNameClient(T nameClient);
};

template <typename T>
T Bank<T>::getNameClient()
{
    return nameClient;
}

template<typename T>
void Bank<T>::setNameClient(T nameClient)
{
    this->nameClient = nameClient;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << multiplication(10, 5) << endl;
    cout << multiplication(9.2, 52.2) << endl;

    Bank<string> testBankStr;
    testBankStr.setNameClient("Client_1");

    cout << "testBank.getNameClient(): " << testBankStr.getNameClient() << endl;

    Bank<int> testBankInt;
    testBankInt.setNameClient(1234);

    cout << "testBank.getNameClient(): " << testBankInt.getNameClient() << endl;

    return a.exec();
}
