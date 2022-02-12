#include<iostream>
using namespace std;
class employyee
{
    private:
    int id;
    string name;
    string designation;
    double basicsalary;
    int mounthly_leave;

    public:
        int getId()
        {
            return id;
        }


        string getName()
        {
            return name;
        }


        string getDesignation()
        {
            return designation;
        }


        double getBasicsalary()
        {
            return basicsalary;
        }


        int getMounthly_leave()

        {
            return mounthly_leave;
        }

         void setId(int i)
        {
             id=i;
        }


        void setName(string n)
        {
             name=n;
        }


        void setDesignation(string d)
        {
             designation=d;
        }


         void setBasicsalary(double b)
        {
             basicsalary=b;
        }


         void setMounthly_leave(int m)
        {
             mounthly_leave=m;
        }

        double calculateSalary()
        {
            int leavetaken,deduction;
            double hra,ta=500,pt,ppf=400,gs,ns;
            hra=.09*basicsalary;
            pt=.05*basicsalary;
            cout<<"enter total leave";
            cin>>leavetaken;
            setMounthly_leave(leavetaken);
            if(leavetaken<=1)
            {
                deduction=0;
            }
            else
            {
            deduction=200*(leavetaken-1);
            }
            gs=basicsalary+hra+ta;
            ns=gs-pt-ppf;
            return ns;
        }
};
 int main()
    {
      employyee e;
      e.setId(1);
      e.getId();
      e.setName("king");
      e.getName();
      e.setDesignation("manager");
      e.getDesignation();
      e.setBasicsalary(50000);
      e.getBasicsalary();
      e.setMounthly_leave(2);
      e.getMounthly_leave();
      cout<<"\n\n";
     //e.display();
      cout<<"\nyour net salary="<<e.calculateSalary();

    }
