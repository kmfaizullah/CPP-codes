# include <iostream>
using namespace std;
# include <sstream>
# include "QueueType.cpp"

string intToString(int a){
    std::stringstream ss;
    int i = a;
    std::string s;
    ss<<i;
    ss>>s;
    return s;
}

int main(){

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
    QueType <string> trace;

    Money.Enqueue(0);
    Coins.Enqueue(0);
    trace.Enqueue("0");

    int tempmoney= 0, tempcoins=0;
    string ancestor;
    while(tempmoney!=tgtmoney)
    {

        Money.Dequeue(tempmoney);
        Coins.Dequeue(tempcoins);
        trace.Dequeue(ancestor);
        for(int j = 0 ; j<n ; j++)
        {
            Money.Enqueue(tempmoney + coin[j]);
            Coins.Enqueue(tempcoins + 1);
            if(ancestor=="0"){
                string res = intToString(coin[j]);
                trace.Enqueue(res);
            }
            else{
                  string res = ancestor + " " + intToString(coin[j]);
                  trace.Enqueue(res);
            }

        }


    if(tempmoney == tgtmoney)
        {
            cout << "cost is: "<<tempcoins << endl;
            cout<< "Notes are : " <<ancestor <<endl;
        }
    }


}


