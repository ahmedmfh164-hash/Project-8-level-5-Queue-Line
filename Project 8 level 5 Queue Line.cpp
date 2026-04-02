
#include <iostream>
#include"clsMyQueueLine.h"
using namespace std;


int main()
{
    clsMyQueueLine PayBillsQueue("A0", 10);
    clsMyQueueLine SubscriptionsQueue("B0", 5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bills Queue Info : \n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bills Queue After Serving One Client \n";
    PayBillsQueue.PrintInfo();


    cout << "\nSubscriptions Queue Info : \n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();


    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One Client \n";
    PayBillsQueue.PrintInfo();


}
