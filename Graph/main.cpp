#include <iostream>
#include"graphtype.cpp"
using namespace std;

/*
a b c d e f g h
d a
b a
a c
a d
d g
d e
a b
h e
g f
f h
*/
int main()
{
    GraphType<char> g;
    int n;
    char j,l,m,y,x;
    cout<<"Enter the graph verticies  number: "<<endl;
    cin>>n;
    cout<< "Enter the verticies : "<<endl;
    for(int i=0;i<n;i++){
            cin>>j;
        g.AddVertex(j);
    }
    cout<<"Enter the edges : "<<endl;
    for(int i=0;i<10;i++){
            cin>>l>>m;
        g.AddEdge(l,m,1);
    }
    char d;
    cout<<"Enter a verticies to check outdegree: " <<endl;
    cin>>d;
   cout<<g.OutDegree(d)<<endl;

    cout<< "Enter to verticies to find the edges : " <<endl;
    cin >> x >> y;
    if(g.FoundEdge(x, y))
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    cout<< "Enter to verticies to find the edges : " <<endl;
    cin >> x >> y;
    if(g.FoundEdge(x, y))
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    char z,pp,kk;
    cout<<"give two input for DFS "<<endl;
    cin>>y>>z;
    g.DepthFirstSearch(y,z);

    cout<<"give two input for DFS "<<endl;
    cin>>y>>z;
    g.DepthFirstSearch(y,z);


    cout<<"give two input for Bread first search : "<<endl;
    cin>>y>>z;
    g.BreadthFirstSearch(y,z);

    cout<<"give two input for Bread first search : "<<endl;
    cin>>y>>z;
    g.BreadthFirstSearch(y,z);




}
