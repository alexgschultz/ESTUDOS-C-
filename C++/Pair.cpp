#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){

    //pair<string,int>par("Alex",28);
    /*pair<string,int>par;
    par.first="Alex";
    par.second=28;
    cout << par.first << "," << par.second << endl;*/
    //------------------------------------------------------------------------
    /*const int tam=3;
    pair<string,int>par[tam];
    par[0]=make_pair("Alex",28);
    par[1]=make_pair("Bruno",38);
    par[2]=make_pair("C++",2024);
    cout << par[0].first << "," << par[0].second << "\n\n";
    
    for(int i=0;i<tam;i++){
    cout << par[i].first << "," << par[i].second << endl;
    }*/
    //-------------------------------------------------------------------------
    /*const int tam=3;
    pair<int,pair<string,double>>par[tam];
    par[0]=make_pair(28763,make_pair("Mouse",50.75));
    par[1]=make_pair(38840,make_pair("Teclado",124.40));
    par[2]=make_pair(20243,make_pair("Headset",200.00));
    
    for(int i=0;i<tam;i++){
    cout << par[i].first << "," << par[i].second.first << "," << par[i].second.second << endl;
    }*/
    //--------------------------------------------------------------------------------------------
    const int tam=3;
    vector <pair<int,string>> prod;
    
    prod.push_back(make_pair(30,"Mouse"));
    prod.push_back(make_pair(10,"Headset"));
    prod.push_back(make_pair(20,"Teclado"));
    
    /*for(int i=0;i<prod.size();i++){
    cout << prod[i].first << "," << prod[i].second << endl;
    }*/
    for(auto i:prod){
    cout << i.first << "," << i.second << endl;
    }
    return 0;
}