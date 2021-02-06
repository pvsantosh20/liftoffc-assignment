#include <iostream> 
using namespace std;
 class mat 
 { 
       private: 
           int s[10][10]; 
           int u,v; 
       public: 
             void show(); 
             mat operator +(mat); 
             mat operator *(mat); 
             void read(int n); 
 }; 
            mat mat::operator+(mat uu2) 
       { 
                mat t; 
                t.u=u; 
                t.v=v; 
                cout<<t.u; 
                cout<<t.v; 
                for(int i=0;i<t.u;i++) 
                     for(int j=0;j<t.v;j++) 
                          t.s[i][i]=s[i][i]+uu2.s[i][i]; 
                          return t; 
       } 
           mat mat::operator*(mat uu2) 
      { 
                mat t; 
                t.u=u; 
                t.v=uu2.v; 
                for(int i=0;i<t.u;i++) 
                     for(int j=0;j<t.v;j++) 
                         { 
                            t.s[i][i]=0; 
                            for(int k=0;k<v;k++) 
                                   t.s[i][j]+=s[i][k]*uu2.s[k][j]; 
                         } 
                                   return t; 
        } 
            void mat::read(int n) 
        { 
           cout<<"Enter "<< "matrix "<<n <<":"<<"\n";
               cout<<"Enter Size of Matrix like 3 x 3:\n"; 
               cin>>u>>v; 
               cout<<"Enter the Elements of Matrix :\n"; 
               for(int i=0;i<u;i++) 
                    for(int j=0;j<v;j++) 
                        cin>>s[i][j]; 
      } 
              void mat::show() 
      { 
              for(int i=0;i<u;i++) 
                   { 
                   for(int j=0;j<v;j++) 
                        { 
                              cout<<s[i][j]<<"\t"; 
                              
                         } 
                              cout<<"\n"; 
                   } 
      } 
              int main() 
      { 
                 mat obj1 ,obj2,obj3; 
               
                
                 obj1.read(1); 
                
                 obj2.read(2); 
                 obj3=obj1 +obj2; 
                 cout<<"Result After Addition of two Matrix\n"; 
                 obj3.show(); 
                 obj3=obj1 *obj2; 
                 cout<<"Result After Multiplication of two Matrix\n"; 
                 obj3.show(); 
               
      } 