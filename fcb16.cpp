#include<iostream>
using namespace std;
string userName[10];
string userStream[10];
string userClass[10];
int physics[10];
int chemistry[10];
int bioandmath[10];
int AVGMarks[10];
string clzB1[10];
string clzB3[10];
string clzB2[10];
string clzM1[10];
string clzM2[10];
string clzM3[10];
string clzM4[10];
string clzM5[10];

void details(){
    cout<<" "<<endl;
    cout<<"                         **********///// Special attention /////**********"<<endl;
    cout<<" "<<endl;
    cout<< "                *****!!!!!  ALL INPUT DATA YOU ENTER MUST BE IN ONLY UPPERCASE  !!!!!*****"<<endl;
    cout<<" "<<endl;
    cout<<"********************************************************************************************************"<<endl;
    cout<<" "<<endl;

}
void welcome(){
    for(int i=0;i<3;i++){
        cout<<"     Enter your Name "<<endl;
        cin>>userName[i];
        cout<<" "<<endl;
        cout<<"     Enter your Stream [If you'r Bio Enter 'B' or If you'r C.Maths Enter 'M']"<<endl;
        cin>>userStream[i];
        cout<<" "<<endl;
        cout<<"     Enter your class [ B1 B2 B3 M1 M2 M3 M4 M5 ]"<<endl;
        cin>>userClass[i];
        cout<<" "<<endl;
        cout<<"     Enter Your Physics Marks"<<endl;
        cin>>physics[i];
        cout<<" "<<endl;
        cout<<"     Enter Your Chemistry Marks"<<endl;
        cin>>chemistry[i];
        cout<<" "<<endl;
        cout<<"     Enter Your Biology or Com.Maths Marks"<<endl;
        cin>>bioandmath[i];
        cout<<" "<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<""<<endl;

        }
        for(int z=0;z<3;z++){
   // cout<<userName[z]<<" "<<userStream[z]<<" "<<userClass[z]<<" "<<physics[z]<<" "<<chemistry[z]<<" "<<bioandmath[z]<<endl;
    }

}

void marksCollector(){
    for(int x=0;x<3;x++){
        AVGMarks[x]=(physics[x] + chemistry[x] + bioandmath[x])/3;
    }
    int max = AVGMarks[0];
    for(int y=0;y<3;y++){
        if(AVGMarks[y]>max){
            max = AVGMarks[y];
        }
    }
   // cout<<max;
    //cout<<userName[1]<<" AVG mark is "<<personalMarks[1]<<endl;

 int n = sizeof(AVGMarks)/sizeof(AVGMarks[0]);
 int elem = max;
 int i = 0;
    while (i < n)
    {
        if (AVGMarks[i]==elem){
            break;
        }
        i++;
    }
    cout<<userName[i]<<" has got the highest marks out of the grades . Your Average mark is - "<<AVGMarks[i]<<" And "<<userName[i]<<" class name is -"<<userClass[i]<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    if(userClass[0]=="B1"){
        userClass[0]=clzB1[0];
    }

}

int main(){
    details();
    welcome();
    marksCollector();

}

