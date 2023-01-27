#include<iostream>

using namespace std;

int gpunto(int corx,int cory){
        int x=0;
        int y=0;
        
        int alto=40;
        int ancho=40;
        int foo=0;
        
        while(y!=alto){
        cout<<endl;
        while(x!=ancho){
            if(x==ancho/2+corx && y==alto/2-cory && corx<0){cout<<"o";x=x+1;foo=1;}
            if(x==ancho/2+corx && y==alto/2-cory && corx>0){cout<<"\bo";x=x+1;foo=1;}
            if(x==ancho/2 ){cout<<char(197);}
            if(y==alto/2 ){cout<<char(197);}
            else{cout<<char(250);}
            x=x+1;
            }
        x=0;    
        y=y+1;
        }   
        cout<<endl;
        return 0;
    }
