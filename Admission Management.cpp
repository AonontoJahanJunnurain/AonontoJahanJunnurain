
#include<iostream>
#include<conio.h>

using namespace std;
class admission
{
public:


    admission() //default constructor
    {
        int depOption;
        cout<<"_______________________________________"<<endl;
        cout<<"\n\n\t\t\t\tWelcome to IUBAT Admission"<<endl;
        cout<<"\t\t\t\tChoose your department:"<<endl;
        cout<<"\t\t\t\t1.CSE\n\t\t\t\t2.EEE\n\t\t\t\t3.ME\n\t\t\t\t4.Civil\n\t\t\t\t5.BBA\n\t\t\t\t6.Agriculture"<<endl;
        cin>>depOption;
        switch(depOption)
    {
    case 1:
        cseadmission();
        info(1);
        info(2.5);
        break;
   case 2:
        eeeadmission();
        info(1);
        info(2.5);
        break;
    case 3:
        meadmission();
        info(1);
        info(2.5);
        break;
    case 4:
        civiladmission();
        info(1);
        info(2.5);
        break;
    case 5:
        bbaadmission();
        break;
    case 6:
        agriadmission();
        info(1);
        info(2.5);
        break;
    default:
        cout<<"Choose Valid Option."<<endl;

        }
    }

    float scholarship()
    {

        float sscgpa,hscgpa,tgpa;
        cout<<"Enter your GPA:\nSSC:";
        cin>>sscgpa;
        cout<<"HSC:";
        cin>>hscgpa;
        tgpa=sscgpa+hscgpa;
        if(tgpa==10)
        {
            cout<<"\tYou will get 100% scholarship."<<endl;
            return 1;   //return the value for waiver
        }
        else if(tgpa>=9.00)
        {
            cout<<"\tYou will get 50% scholarship."<<endl;
            return 0.5;
        }
        else if(tgpa>=7.50)
        {
            cout<<"\tYou will get 25% scholarship."<<endl;
            return 0.25;
        }
        else if(tgpa>=6.0)
        {
            cout<<"\tYou will not get any scholarship."<<endl;
            return 0;
        }
        else
        {
            cout<<"\tYou are not eligible to admit here "<<endl;
            return 2;
        }
    }

    void info(int x)
    {
        int op;
        cout<<"\n\n\n \n \tDo you want to admit in out university?\nPress 1 for yes\nPress any key for No";
        cin>>op;
        if(op==1)
        {
            cout<<"\n\n\tyou have to submit your all certificate"<<endl;
            cout<<"\n\n\twelcome to IUBAT family";

        }
        else
        {
            cout<<"\n\n\tthanks for visiting";
        }

    }

void info(double y)
{
    cout<<"\n\n\twe are glad to have you";
}

    void cseadmission()
    {
    float weiver;
    int credirhr=153;
    system("cls");
    cout<<"\tWelcome to CSE Department."<<endl;

    weiver=scholarship();     //nesting of member function
    if(weiver!=2){

    cout<<"\t\n\t\tYou Have to complete 153 Credit Hour.\n\n\t\tCredit Fee:3500\n\t\tYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"\t\n\t\tRegistration fee for per semester : 12000 Taka only"<<endl;
    cout<<"\t\n\t\tTotal cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"\t\n\t\tAverage cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}





    void eeeadmission()
    {
    float weiver;
    int credirhr=148;
    system("cls");
    cout<<"Welcome to EEE Department."<<endl;

    weiver=scholarship(); //nesting of member function
    if(weiver!=2){
    cout<<"You Have to complete 148 Credit Hour.\nCredit Fee:3500\nYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"Registration fee for per semester : 12000 Taka only"<<endl;
    cout<<"Total cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"Average cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}



    void meadmission()
    {
    float weiver;
    int credirhr=145;
    system("cls");
    cout<<"Welcome to ME Department."<<endl;

    weiver=scholarship();   //nesting of member function
    if(weiver!=2){
    cout<<"You Have to complete 145 Credit Hour.\nCredit Fee:3500\nYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"Registration fee for per semester : 12000 Taka only"<<endl;
    cout<<"Total cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"Average cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}



    void civiladmission()
    {
    float weiver;
    int credirhr=142;
    system("cls");
    cout<<"Welcome to Civil Department."<<endl;

    weiver=scholarship(); //nesting member function
    if(weiver!=2){
    cout<<"You Have to complete 142 Credit Hour.\nCredit Fee:3500\nYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"Registration fee for per semester : 12000 Taka only"<<endl;
    cout<<"Total cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"Average cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}



    void bbaadmission()
    {
    float weiver;
    int credirhr=122;
    system("cls");
    cout<<"Welcome to BBA Department."<<endl;

    weiver=scholarship();    //nesting member function
    if(weiver!=2){
    cout<<"You Have to complete 122 Credit Hour.\nCredit Fee:3500\nYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"Registration fee for per semester : 12000 Taka only"<<endl;
    cout<<"Total cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"Average cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}



    void agriadmission()
    {
    float weiver;
    int credirhr=132;
    system("cls");
    cout<<"Welcome to Agriculture Department."<<endl;

    weiver=scholarship();   //nesting of member function
    if(weiver!=2){
    cout<<"You Have to complete 132 Credit Hour.\nCredit Fee:3500\nYour tuition fee will be: "<<(credirhr*3500)-(weiver*3500*credirhr)<<" taka only(including waiver)"<<endl;
    cout<<"Registration fee for per semester : 12000 Taka only"<<endl;
    cout<<"Total cost for 12 semester : "<<(credirhr*3500)-(weiver*3500*credirhr)+12000*12<<" Taka only"<<endl;
    cout<<"Average cost for per semester : "<<12000+(((credirhr*3500)-(weiver*3500*credirhr))/12)<<" Taka Only."<<endl;
    }}




};
class design{
public:

    friend void title(design obj);  //friend function
    void input(string name )  //function overloading and function argument
    {
        cout<<"University name "<<name<<endl;

    }
    void input(int id)  //polymorphism
    {
        cout<<"University code is :"<<id <<endl;
    }

};
void title(design obj)
{
    cout<<"==================================================="<<endl;
    cout<<"Project Name : Admission Management System"<<endl;
}
class student:public admission    //inheritence
{

  public:

      void thank()
      {
          int name;
          cout<<"\n\t\tif you admit here you have to maintain DBC"<<endl;
          cout<<"\n\t\tthanks for coming"<<endl;
          cout<<"\n\n\t\tplease note your name into the registrar";
          cin>>name;

      }


};
int main()
{
    design o;
    title(o);
    o.input("IUBAT");
    o.input(211939);

    student obj;
    obj.thank();

    return 0;

}

