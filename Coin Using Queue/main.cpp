#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{

    int n, tgtmoney;
    cout<<"enter the target money:" <<endl;
    cin >> tgtmoney;
    cout<<"enter the number of coins: "<<endl;
    cin >> n;
    int coin[n];
    cout<<"enter the values of coins: "<<endl;
    for(int i = 0; i < n ; i++){
        cin >> coin[i];
    }



    QueType <int> Coins;
    QueType <int> Money;

    Money.Enqueue(0);
    Coins.Enqueue(0);

    int tempmoney= 0, tempcoins=0;
    while(tempmoney!=tgtmoney)
    {

        Money.Dequeue(tempmoney);
        Coins.Dequeue(tempcoins);
        for(int j = 0 ; j<n ; j++)
        {
            Money.Enqueue(tempmoney + coin[j]);
            Coins.Enqueue(tempcoins + 1);
        }



    if(tempmoney == tgtmoney)
        {
            cout << "cost is: "<<tempcoins << endl;
        }
}
}
