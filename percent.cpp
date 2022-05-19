 #include<bits/stdc++.h>
 using namespace std;
 struct marks{
     string name;
     int rollno;
     int chemistry;
     int maths;
     int physics;
     int marks;
 };
 void display(marks m){
     cout<<"name "<<m.name<<"\n";
     cout<<"rollno "<<m.rollno<<"\n";
     cout<<"percentage"<<((m.chemistry+m.maths+m.physics)/300.0)*100<<"\n";
 }
 int main(){
     marks m[5];
     for(int i=1;i<6s;i++){
         cout<<" enter name \n";
         cin>>m[i-1].name;
         m[i-1].rollno=i;
         cout<<"chemistry marks:";
         cin>>m[i-1].chemistry;
         cout<<"maths marks:";
         cin>>m[i-1].maths;
         cout<<"physics marks:";
         cin>>m[i-1].physics;
         display(m[i-1]);
     }
 }