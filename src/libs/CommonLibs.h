//
// Created by ashish on 27/1/18.
//

#ifndef SAMPLE_COMMON_LIBS_H
#define SAMPLE_COMMON_LIBS_H

#include<iostream>
#include<cstdio>
#include <cmath>
#include<cstring>
#include<climits>
#include<algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
//types
#define llu long long unsigned int
#define ll long long int
#define llu long long unsigned int
//container
#define vi vector<int>
#define vl vector<ll>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vector<ii>> // could be used for graph adjacencny list

//IO
#define pr(n)  printf("%d",n)
#define prl(n) printf("%lld",n)
#define prf(n) printf("%f",n)
#define nl printf("\n")
#define sp printf(" ")
#define sc(n)  scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define scllu(n) scanf("%llu",&n)
#define scf(n) scanf("%f",&n)
#define scd(n) scanf("%lf",&n)
//function and loops
#define mp make_pair
#define repab(a,b) for(int i=(a);i<(b);i++)
#define rep(n) for(int i=0;i<n;i++)
#define repi(i,n) for(int (i)=0;(i)<n;(i)++)
#define repit(c) for(auto it=(c).begin();it!=(c).end();it++)
//reading all once
#define read(n) int n;sc(n)
#define readll(n) ll n;scll(n)
#define readllu(n) llu n;scllu(n)
#define readf(n) float n;scf(n)
#define readd(n) double n;scd(n)
#define call(c) (c).begin(),(c).end()
//constants

#define INF int(1e9+1)

//debug
using namespace std;

#define DEBUG(a) std::cerr<<#a<<" : "<<a<<std::endl;

#define DEBUGN(args...)     (Debugger()) , args
class Debugger
{
public:
    Debugger(const std::string& _separator = " - ") :
            first(true), separator(_separator){}

    template<typename ObjectType> Debugger& operator , (const ObjectType& v)
    {
        if(!first)
            std:cerr << separator;
        std::cerr << v;
        first = false;
        return *this;
    }
    ~Debugger() {  std:cerr << endl;}

private:
    bool first;
    std::string separator;
};


//testing functions
template <typename T> void show_2d(T container){
    for(auto it=container.begin();it!=container.end();it++){
        for(auto it2=it->begin();it2!=it->end();it2++)
            cout<<*it2<<" ";
        cout<<endl;
    }
    cout<<endl;
}
template <typename T> void show_pair1d(T container){
    for(auto it=container.begin();it!=container.end();it++){
        cout<<it->first<<" --> "<<it->second;
        cout<<endl;
    }
    cout<<endl;
}
template <typename T,typename R> void show_pair(pair<T,R> p){
    cout<<p.first<<"-> "<<p.second<<endl;
}
template <typename T> void show_1d(T &container){
    cout<<"data in container is: "<<endl;
    for(auto it=container.begin();it!=container.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
template <typename  T> void show_arr1d(T arr[],int size){
    cout<<"content in array is here"<<endl;
    for (int i = 0; i < size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

/*
    must call it from address as pointer
    int a[10][10];
    show_arr2d(&a, 10, 10);
*/
template <typename  T>
void show_arr2d(T arr, int n, int m){

    cout<<"content in array is here"<<endl;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m ; ++j) {
            cout<<*(*(*arr+i)+j)<<" ";
        }
        cout<<endl;
    }

}
template<typename T> void show_graph(T AdjList){
    cout<<"-----------"<<endl;
    cout<<"showing graph"<<endl;
    int i=0;
    for(auto v: AdjList){
        cout<<i++;
        for(auto e:v){
            cout<<"->"<<"["<<e.first<<","<<e.second<<"]";
        }
        cout<<endl;
    }
    cout<<"-----------"<<endl;
}


#endif
