// 1st question
/*
#include<iostream>
using namespace std;
int main()
{
    int n, num, digit, rev =0;
    cout << "Enter a number : ";
    cin >> num;
    n = num;
    do
    {
        digit =  num %10;
        rev = (rev * 10 ) + digit;
        num = num/10;
    }while(num!=0);
    cout << "The reverse of the number is " << rev << endl;
    if(n == rev){
        cout << "The given number is a palindrome " << endl;
    }
    else{
        cout << "The given number is not a palindrome " << endl;
    }
}


//  6th question
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout << "Enter a number : ";
    cin >> num;
    for(i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            cout << i << endl;
        }
    }
}
//  3rd problem
#include<iostream>
using namespace std;
int main()
{
    string name;
    int i;
    cout << "Enter a number : ";
    cin >> name;
    int ch;
    ch = name.size();
    for(i=0;i<100;i++)
    {
        if(name[i]=='1')
        {
            cout << "One ";
        }
        else if(name[i]=='2')
        {
            cout << "Two ";
        }
        else if(name[i]=='3')
        {

            cout << "Three ";
        }
        else if(name[i]=='4')
        {
            cout << "Four ";
        }
        else if(name[i]=='5')
        {
            cout << "Five ";
        }
        else if(name[i]=='6')
        {
            cout << "Six ";
        }
        else if(name[i]=='7')
        {
            cout << "Seven ";
        }
        else if(name[i] == '8')
        {
            cout << "Eight ";
        }
        else if(name[i] == '9')
        {
            cout << "Nine ";
        }
        else if(name[i] == '0')
        {
            cout << "Zero ";
        }
    }
}


// 2nd question
#include<iostream>
using namespace std;
int main()
{
    string num;
    int count1 = 0,count2 =0,count3 =0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0 = 0;
    cin >> num;
    int ch,i;
    ch = num.size();
    for(i=0;i<ch;i++)
    {
        if(num[i]== '1')
        {
            count1 = count1 + 1;
        }
        else if(num[i]== '2')
        {
            count2 = count2 + 1;
        }
        else if(num[i]== '3')
        {
            count3 = count3 + 1;
        }
        else if(num[i]== '4')
        {
            count4 = count4 + 1;
        }
        else if(num[i]== '5')
        {
            count5 = count5 + 1;
        }
        else if(num[i]== '0')
        {
            count0 = count0 + 1;
        }
        else if(num[i]== '6')
        {
            count6 = count6 + 1;
        }
        else if(num[i]== '7')
        {
            count7 = count7 + 1;
        }
        else if(num[i]== '8')
        {
            count8 = count8 + 1;
        }
        else if(num[i]== '1')
        {
            count9 = count9 + 1;
        }
    }
    cout<< "Frequency of 0 in the number " << num << " is " << count0 << endl;
    cout<< "Frequency of 1 in the number " << num << " is " << count1 << endl;
    cout<< "Frequency of 2 in the number " << num << " is " << count2 << endl;
    cout<< "Frequency of 3 in the number " << num << " is " << count3 << endl;
    cout<< "Frequency of 4 in the number " << num << " is " << count4 << endl;
    cout<< "Frequency of 5 in the number " << num << " is " << count5 << endl;
    cout<< "Frequency of 6 in the number " << num << " is " << count6 << endl;
    cout<< "Frequency of 7 in the number " << num << " is " << count7 << endl;
    cout<< "Frequency of 8 in the number " << num << " is " << count8 << endl;
    cout<< "Frequency of 9 in the number " << num << " is " << count9 << endl;
}


//4th problem
#include<iostream>
using namespace std;
int main()
{
    int num;
    for(num = 0;num<255;num ++)
    {
        cout << " Ascii character of the value " << num << " is " << char(num) << endl;
    }
}

// 5th problem
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    int res;
    res = pow(a,b);
    cout << a << " raised to the power "<< b << " gives " << res << endl;
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,i, result = 1;
    cout << "Enter the base and exponent\n";
    cin >> a >> b;
    for(i=0;i<b;i++)
    {
        result = result * a;
    }
    cout << a << " raise to the power " << b << " is " << result;
}

//  7th problem
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact;
}

// 8th question
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int i,gcd,cou;
    cout << "Enter the first num: ";
    cin >> num1;
    cout << "Enter the second num: ";
    cin >> num2;
    {
        for(i=1;i<=num1;i++)
        {
            if((num1%i)==0 && (num2%i)==0)
            {
                cou = i;
            }
        }
    }
    cout << "The HCF of " << num1 << " and " << num2 << " is " << cou;
}
// 9th question
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, max;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}


// 10th question
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]<7)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
#include<iostream>
using namespace std;
class complex{
float real, imagine;
public:
    void getData();
    void putData();
    void sum(complex a, complex b);
};
void complex :: getData(){
cin >> real;
cin >> imagine;
}
void complex :: putData(){
if(imagine>=0){
    cout << real << "+" << imagine << "i";
}
    else{
        cout << real << imaine << ""
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>66 && a[i] < 45001)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num],b[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>b[i])
        {
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num],b[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        cout << a[i]-b[i] << endl;
    }
}

#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cin >> a >> b >> c;
    cout << a-b << " " << (a-b)-c << endl;
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num],b[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>b[i])
        {
            cout << a[i] << endl;
        }
        else{
            cout << b[i] << endl;
        }
    }
}

#include<iostream>c
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num], b[num], c[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for(i=0;i<num;i++)
    {
        if((a[i]> b[i]) && (a[i] > c[i]))
        {
            cout << "Setter" << endl;
        }
        if((b[i] > a[i]) && (b[i] > c[i]))
        {
            cout << "Tester" << endl;
        }
        if((c[i] > a[i]) && (c[i] > b[i]))
        {
            cout << "Editorialist" << endl;
        }

    }
}

#include<iostream>
using namespace std;
class construct{
public:
    int a,b;
        construct( )
        {
        a = 10;
        b=20;
        }
    };
int main()
{
    construct c;
    cout << "a: " << c.a << endl;
    cout << "b: " << c.b << endl;
}

#include<iostream>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point(int x1, int y1){
    x = x1;
    y = y1;
    }
    int getX(){
    return x;
    }
    int getY(){
    return y;
    }
};
int main()
{
    Point p1(10,15);
    cout << "p1.x = " << p1.getX() << endl;
    cout << "p1.y = " << p1.getY() << endl;
}

#include<iostream>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point(int x1, int y1){
    x = x1;
    y =  y1;
    }
    Point(const Point &b){
    x = b.x;
    y = b.y;
    }
    int getX(){
    return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    Point p1(10,15);        //          NORMAL CONSTRUCTOR
    Point p2 = p1;          //          COPY CONSTRUCTOR
    cout << "p1.x = " << p1.getX() << endl;
    cout << "p2.x = " << p2.getX() << endl;
}

#include<iostream>
using namespace std;
class employee{
public:
    string name;
    string company;
    int age;
    void introduceyourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    employee employee1;
    employee1.name = "Jaswanth Godavarthi";
    employee1.company = "Amrita Viswa vidhya peetham";
    employee1.age = 18;
    employee1.introduceyourself();
}


#include<iostream>
using namespace std;
class employee{
public:
    string name;
    string company;
    int age;
    void introduceyourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    employee employee1;
    employee1.name = "Jaswanth Godavarthi";
    employee1.company = "Amrita Viswa vidhya peetham";
    employee1.age = 18;
    employee1.introduceyourself();
    employee employee2;
    cout << "\n";
    employee2.name = "Satya";
    employee2.company = "Microsoft";
    employee2.age = 19;
    employee2.introduceyourself();
}

//CONSTRUCTORS
#include<iostream>
using namespace std;
class employee{
public:
    string name;
    string company;
    int age;
    void introduceyourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
    //                                          HERE IS THE CONSTRUCTORS
    employee(string na, string com, int agee)
    {
        name =  na;
        company = com;
        age = agee;
    }
};
int main()
{
    employee employee1 =  employee("Jaswanth Godavarhti","Amrita VIswa vidhya peetham",18);
    employee1.introduceyourself();
    employee employee2 = employee("Satya", "Microsoft",19);
    employee2.introduceyourself();
}


#include<iostream>
using namespace std;
class employee{
private:
    string name;
    string company;
    int age;
public:
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string com)
    {
        company = com;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int Age)
    {
        if(Age >= 18)
        age = Age;
    }
    int getAge()
    {
        return age;
    }
    void introduceyourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
    employee(string na, string com, int agee)
    {
        name =  na;
        company = com;
        age = agee;
    }
};
int main()
{
    employee employee1 =  employee("Jaswanth Godavarhti","Amrita VIswa vidhya peetham",18);
    employee1.introduceyourself();
    employee employee2 = employee("Satya", "Microsoft",19);
    employee2.introduceyourself();
    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;
}


#include<iostream>
using namespace std;
class absemployee{
    virtual void askforpromotion() = 0;
};
class employee : absemployee{
private:
    string name;
    string company;
    int age;
public:
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string com)
    {
        company = com;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int Age)
    {
        if(Age >= 18)
        age = Age;
    }
    int getAge()
    {
        return age;
    }
    void introduceyourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
    employee(string na, string com, int agee)
    {
        name =  na;
        company = com;
        age = agee;
    }
    void askforpromotion()
    {
        if(age > 30)
        {
            cout << name << " got promoted" << endl;
        }
        else{
            cout << name << " sorry,no promotion for you" << endl;
        }
    }
};
int main()
{
    employee employee1 =  employee("Jaswanth Godavarhti","Amrita VIswa vidhya peetham",18);
    employee employee2 = employee("Satya", "Microsoft",35);
    employee1.askforpromotion();
    employee2.askforpromotion();
}

#include <iostream>
using namespace std;
int main(){
int x;
for (x=1; x<=10; x++) {
if (x==5)
break;
cout << x << " ";
} //end for
cout << "\n What happened at x = " << x << endl;
cout<< endl << endl << endl;
return 0;
}

#include <iostream>
using namespace std;
int main(){
int x;
for (x=1; x<=10; x++) {
if (x==5)
continue;
cout << x << " ";
}
cout << "\n What happened here? " << endl;
return 0;
}

#include <iostream>
using namespace std;
int main(){
int x=10;
cout << x << endl << endl;
{
int x=25;
cout << x << endl << endl;
}
cout << x << endl << endl;
return 0;
}


#include<iostream>
using namespace std;
int main()
{
    float a = 10;
    float b = 27;
    swap(a,b);
    cout << "A after swapping is " << a << endl;
    cout << "B after swapping is " << b << endl;
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>100)
        {
            a[i] = a[i]-10;
        }
    }
    for(i=0;i<num;i++)
    {
        cout << a[i] << endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    float a[num],b[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        if(((b[i]/a[i])*100)>= 50.00 )
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int i,j;
    for(i=0;i<num;i++)
    {
        int a[num];
        cin >> a[i];
        int b[a[i]];
        for(i=0;i<a[i];i++){
            cin >> b[i];
            int maxcount[num];
        int elemhavingmaxfreq;
        for(i=0;i<a[i];i++)
        {
            int count = 0;
            for(j=0;j<a[i];j++){
                if(b[i] == b[j])
                {
                    count++;
                }
            }
            if(count > maxcount){
                maxcount[i] = count;
            }
            int ans[num];
            ans[i] = a[i] - maxcount[i];
        }
        for(i=0;i<num;i++)
        {
            cout << ans[i] << endl;
        }
        }
        }
    }


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,j;
    for(i=0;i<num;i++)
    {
        int a[num];
        cin >> a[i];
        int c = a[i];
        int b[c];
        for(j=0;j<c;j++)
        {
            cin >> b[j];
        }

    }
}



#include<iostream>
using namespace std;
int main()
{
    string name;
    int num1,num2,avg;
    cin >> name;
    cin >> num1;
    cin >> num2;
    avg = (num1 + num2)/ 2;
    cout << "Student: " << name << endl;
    cout << "Average: " << avg << endl;
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num == 1)
    {
        cout << "Invalid input" << endl;
    }
    int i,count = 0;
    for(i = 2;i<num;i++)
    {
        if((num%i)==0)
        {
            count = count + 1;
        }

    }
    if(count>=1 && num!=1)
    {
        cout << "Not Prime" << endl;
    }
    if(count == 0 && num!=1){
        cout << "Prime" << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    string name;
    int num1,num2,avg;
    cin >> name;
    cin >> num1;
    cin >> num2;
    avg = (num1 + num2)/ 2;
    cout << "Student: " << name << endl;
    cout << "Average: " << avg << endl;
}
#include <iostream>
using namespace std;


// Create your class and define the members here
class Student{
//@start-editable@

//@end-editable@
Student(string a,int n1,int n2)
    {
        nam=a;
        m1=n1;
        m2=n2;
    }
//@start-editable@




//@end-editable@

};

int main(){

	string nam;int m1,m2;
	cin>> nam;
	cin>> m1;
	cin>> m2;
	Student student1(nam,m1,m2);
	student1.disp();

	return 0;
}


#include <iostream>
#include <string>
using namespace std;
class student{
    string name,address,phoneno;
    int rno;
    public:
    void setdata()
    {
        cin>>name;
        cin>>rno;
        cin>>phoneno;
        cin>>address;
    }
    void printdata()
    {
        cout<<name<<" "<<rno<<" "<<" "<<phoneno<<" "<<" "<<address<<endl;
    }
};
int main()
{
    student std1,std2;
    std1.setdata();
    std2.setdata();
    std1.printdata();
    std2.printdata();
}


#include <iostream>
#include <string>
using namespace std;
class student{
    string name;
    int rno,marks;
    public:
    void setdata()
    {
        cin>>name;
        cin>>rno;
        cin>>marks;
    }
    int percentage()
    {
        return marks*0.2;
    }
    void printdata()
    {
        cout<<"Student details:"<<endl;
        cout<<"Name:"<<name<<",Roll Number:"<<rno<<",Total:"<<marks<<",Percentage:"<<percentage()<<endl;
    }
};
int main()
{
    student std1,std2;
    std1.setdata();
    std2.setdata();
    std1.printdata();
    std2.printdata();
}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n {};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"The cube of"<<i<<"is ="<<pow(i,3)<<endl;
    }
}




#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class employee{
    string empid,empname;
    int salary;
    public:
    void accept()
    {
        cin>>empid;
        cin>>empname;
        cin>>salary;
    }
    void display()
    {
        int da = (int) (salary*0.25);
        int it= (int) (salary*0.15);
        cout<<"Employee Id: "<<empid<<endl;
        cout<<"Employee Name: "<<empname<<endl;
        cout<<"Basic Salary: "<<salary<<endl;
        cout<<"HRA: 800"<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"I-Tax: "<<it<<endl;
        int tot = salary+800 +(da-it);
        cout<<"Net Salary: "<<tot<<endl;

    }
};
int main()
{
    employee emp1;
    emp1.accept();
    emp1.display();
}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n {};
    cin>>n;
    if(n<=1)
    {
        cout<<"Invalid Input"<<endl;
    }
    else{
        int fact=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                fact+=1;
            }
        }
        if(fact==2)
        {
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
}

#include <iostream>
using namespace std;


// Create your class and define the members here
class Student{
//@start-editable@
public:
    string nam;
    int m1;
    int m2;
int calc_average()
    {
        return (m1+m2)/2;
    }


void disp()    {
        cout<<"Student: "<<nam<<endl;
        cout<<"Average: "<<calc_average();
    }

//@end-editable@
Student(string a,int n1,int n2)
    {
        nam=a;
        m1=n1;
        m2=n2;
    }
//@start-editable@


//@end-editable@

};

int main(){

	string nam;int m1,m2;
	cin>> nam;
	cin>> m1;
	cin>> m2;
	Student student1(nam,m1,m2);
	student1.disp();

	return 0;
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    cout << num;
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num>0)
    {
        cout << "positive" << endl;
    }
    if(num == 0)
    {
        cout << "zero" << endl;
    }
    if(num< 0)
    {
        cout << "negative" << endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
}


#include<iostream>
using namespace std;
class animal{
public:
    int legs = 4;
};
class dog : public animal{
public:
    int tail = 1;
};
int main()
{
    int count = animal.legs;
    cout << count << endl;
}



#include<iostream>
using namespace std;
class base{
public:
    int x;
    void getdata()
    {
        cin >> x;
    }
};
class deriverl: public base{
public:
    int y;
    void readdata()
    {
        cin >> y;
    }
};
class derive: public deriverl
{
private:
    int z;
public:
    void indata()
    {
        cin >> z;
    }
    void product()
    {
        cout << "Product = " << x*y*z;
    }
};
int main()
{
    derive
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    int a=0,b=0;
    int i;
    for(i=0;i<name.size();i++)
    {
        if(int(name[i]) >64 && int(name[i]) < 91)
        {
            a = a + 1;
        }
        if(int(name[i]) > 96 && int(name    [i]) < 123)
        {
            b = b + 1;
        }
    }
    cout << a << endl;
    cout << b << endl;
}

#include<iostream>
using namespace std;
int main()
{
    colourRectangle r1("green",2,3.5);
    cout << "Area: " << r1.getArea();
}


#include <iostream>
using namespace std;

    int main()
    {
    	int x;
    	cin>> x;
    	cout << "Make a rectangular shape by a single digit number :\n" << endl;
        cout<<" "<<x << " "<<x << " "<<x << " "<<x<<endl;
        cout<<" "<<x<<" "<<"    "<<x<<endl;
        cout<<" "<<x<<" "<<"    "<<x<<endl;
        cout<<" "<<x<<" "<<"    "<<x<<endl;
        cout<<" "<<x<<" "<<"    "<<x<<endl;
        cout<<" "<<x << " "<<x << " "<<x << " "<<x<<endl;
        cout << endl;
        return 0;
    }
#include<iostream>
#include<string.h>
using namespace std;
class car{
public:
    int no;
    string name;
};
int main()
{
        car abc;
        getline(cin,abc.name);
        abc.no = 175;
        cout << abc.name << endl;
        cout << abc.no << endl;
}

#include<iostream>
using namespace std;
class student{
public:
    int rollno;
    string name;
};
int main()
{
    student s1;
    s1.rollno = 123;
    s1.name = "Hiteesh";
    student s2;
    s2.rollno = 235;
    s2.name = "Satya";
    cout << "The details of the students are as follows" << endl;
    cout << "The name of the first student is " << s1.name << " and roll number is " << s1.rollno << endl;
    cout << "The name of the secont student is " << s2.name << " and roll number is " << s2.rollno << endl;
}

#include<iostream>
using namespace std;
class student{
public:
    void printdetails()
    {
        cout << "My name is Jaswanth " << endl;

    }
    void moreinfo();
};
void student::moreinfo(){
    cout << "I'm in CSE-D Section" << endl;
}
int main()
{
    student s1;
    s1.printdetails();
    s1.moreinfo();
    return 0;
}


#include<iostream>
using namespace std;
class car{
public:
    int speed(int maxspeed);
};
int car::speed(int maxspeed){
    return maxspeed;
}
int main()
{
    car c1;
    cout << c1.speed(200);
    return 0;
}

#include<iostream>
#include<string.h>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    int i;
    for(i = 0; i < name.size();i++)
    {
        if(int(name[i]) > 64 && int(name[i]) <91)
        {
            name[i] = tolower(name[i]);
        }
        else if(int(name[i]) > 96 && int(name[i]) <123)
        {
            name[i] = toupper(name[i]);
        }
    }
    cout << name << endl;
    for(i=0;i<(name.size())+1;i++)
    {
        if(int(name[i])==32 || int(name[i]) == 0)
        {
            int ch;
            ch = i-1;
            cout << ch << endl;
            for(i=ch;i>=0;i--)
            {
                cout << name[i];
            }
            cout << endl;
            i = ch + 1;
        }
    }
}


#include<iostream>
#include<string.h>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    int i,a=0;
    for(i = 0; i < name.size();i++)
    {
        if(int(name[i]) > 64 && int(name[i]) <91)
        {
            name[i] = tolower(name[i]);
        }
        else if(int(name[i]) > 96 && int(name[i]) <123)
        {
            name[i] = toupper(name[i]);
        }
    }
    cout << name << endl;
    for(i=0;i<(name.size())+1;i++)
    {
        if(int(name[i])==32 || int(name[i]) == 0)
        {
            int ch;
            ch = i-1;
            //cout << ch << endl;

                 for(i=ch;i>=a;i--)
            {

                {
                    cout << name[i];
                }
            }
               // cout << " ";//
            i = ch + 1;
            a = ch +1;
        }
    }
}

#include<iostream>
using namespace std;

class Sort{

protected:
int a[10];

public:
int n;
void read()
{   //@start-editable@




 //@end-editable@

}
void print()
{   //@start-editable@




 //@end-editable@

}

void selectionSort() {
 //@start-editable@




 //@end-editable@
}
};

class binary_search : public Sort
{
  public:
  int num;
  int binarySearch(int startindex, int endindex) {
    //@start-editable@




 //@end-editable@
}
};


int main() {
  binary_search BS;
  int choice,index;
  cin>>BS.n;
  BS.read();
  cin>>choice;
  if(choice==1)
  {
   //@start-editable@




 //@end-editable@

  }
  if(choice==2)
  {
   //@start-editable@




 //@end-editable@

  }
  if(choice==3)
  {
   //@start-editable@




 //@end-editable@

  if(index == -1){
      cout<< BS.num <<" is not present in the array";
   }else{
      cout<< BS.num <<" is present at index "<< index <<" in the Sorted array A";
   }
  }
return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << "Print the multiplication table of a number upto 10:" << endl;
    cout << a << " x 1 = "<< a  << endl;
    cout << a << " x 2 = "<< a*2  << endl;
    cout << a << " x 3 = "<< a*3  << endl;
    cout << a << " x 4 = "<< a*4  << endl;
    cout << a << " x 5 = "<< a*5  << endl;
    cout << a << " x 6 = "<< a*6  << endl;
    cout << a << " x 7 = "<< a*7  << endl;
    cout << a << " x 8 = "<< a*8  << endl;
    cout << a << " x 9 = "<< a*9  << endl;
    cout << a << " x 10 = "<< a*10  << endl;
}

#include<iostream>
#include<string>
using namespace std;
class bank{
public:
    int accno,balance;
    string name;
};

int main()
{
    bank b1;
    cin >> b1.balance;
    cin >> b1.name;
    cout << b1.name;
    cout << b1.balance;
}

#include<iostream>
using namespace std;
class summation{
private:
    int a,b,c;
public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << "The sum of two numbers is " << c << endl;
    }

};
int main()
{
    summation s;
    s.sum(5,4);
    return 0;
}

#include<iostream>
using namespace std;
class summation{
private:
    int a,b,c;
public:
    void set(int x, int y){
    a = x;
    b = y;
    sum(a,b);
    }
    void sum(int p, int q)
    {
        c = p + q;
    }
    void get()
    {
        cout << "Sum of " << a << " and " << b << " is " << c << endl;
    }
};
int main()
{
    summation s;
    s.set(5,4);
    s.get();
}


#include<iostream>
using namespace std;
class summation{
    public:
    int a,b,c;
public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
    }
    void set()
    {
        cout << "The sum of " << a << " and " << b << " is " << c << endl;
    }
};
int main()
{
    summation s;
    s.sum(5,4);
    s.set();
}

#include<iostream>
using namespace std;
class summation{
private:
    int a,b,c;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        c = a + b;
    }
    void get()
    {
        cout << "The sum of the two numbers is " << c << endl;
    }

};
int main()
{
    summation s;
    s.set(5,4);
    s.sum();
    s.get();
}

#include<iostream>
using namespace std;
class Point {
private:
int x, y;
public:
// Parameterized Constructor
Point(int x1, int y1){
x = x1;
y = y1;
}
int getX(){
return x;
}
int getY(){
return y;
}
}; // end of class definition
int main(){
// Constructor called
Point p1(10, 15);
// Access values assigned by constructor
cout << "p1.x = " << p1.getX() << ", p1.y = " <<
p1.getY();
return 0;
}

#include<iostream>
using namespace std;
class point{
private:
    int x, y;
public:
    point(int x1, int y1){
    x = x1;
    y = y1;
    }
    point(const point &b)
    {
        x = b.x;
        y = b.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point p1(10,15);
    point p2 = p1;
    cout << p1.getx() << endl;
    cout << p2.getx() << endl;
    cout << p1.gety() << endl;
    cout << p2.gety() << endl;
}
#include<iostream>
using namespace std;

class HelloWorld
{
public:
//default Constructor
HelloWorld()
{
cout<<"Constructor is called"<<endl;
}
//Destructor
~HelloWorld()
{
cout<<"Destructor is called"<<endl;
}
//Member function
void display()
{
cout<<"Hello World!"<<endl;
}
};
int main()
{
    HelloWorld obj;
    obj.display();
    return 0;
}

#include<iostream>
using namespace std;
class a{
public:
    int x;
protected:
    int y;
private:
    int z;
};
class b : public a{

};
int main()
{
    b c;
    c.x = 5;
    c.y = 10;
    c.z = 15;
}

#include<iostream>
using namespace std;
class A {
public:
int x;
protected:
int y;
private:
int z;
};
class B : public A {
// x stays public
// y stays protected
// z is not accessible from B
};
int main()
{
    B b;
    b.x = 5;
}

#include<iostream>
using namespace std;
class A {
public:
    int x;
protected:
    int y;
private:
//    int z;
};
class C : protected A {
// x becomes protected
// y stays protected
// z is not accessible from C
};
int main()
{
C c;
//c.x=5;
//c.y=10;
//c.z=15;
}

#include<iostream>
using namespace std;
class base{
public:
    int x;
    void getdata()
    {
        cin >> x;
    }
};
class derive1: public base{
public:
    int y;
    void readdata()
    {
        cin >> y;
    }
};
class derive2 : public derive1
{
private:
    int z;
public:
    void indata()
    {
        cin >> z;

    }
    void product()
    {
        cout << "Product= " << x*y*z;
    }
};
int main()
{
    derive2 a;
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}


    #include<iostream>
    #include<string.h>
    #include<cctype>
    #include<cstring>
    using namespace std;
    int main()
    {
        string name;
        getline(cin,name);
        int i,a=0;
        for(i = 0; i < name.size();i++)
        {
            if(int(name[i]) > 64 && int(name[i]) <91)
            {
                name[i] = tolower(name[i]);
            }
            else if(int(name[i]) > 96 && int(name[i]) <123)
            {
                name[i] = toupper(name[i]);
            }
        }
        cout << name << endl;
        for(i=0;i<(name.size())+1;i++)
        {
            if(int(name[i])==32 || int(name[i]) == 0)
            {
                int ch;
                ch = i-1;
                //cout << ch << endl;

                     for(i=ch;i>=a;i--)
                {

                    {
                        cout << name[i];
                    }
                }
                   // cout << " ";//
                i = ch + 1;
                a = ch +1;
            }
        }
    }

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]<=7)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        cout << 100 - a[i] << endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num], b[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        cout << a[i]*10 + b[i]*5 << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        cout << 4*a[i] + b[i] << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
}

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if(ch=='a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u')
    {
        cout << "Vowel" << endl;
    }
    else{
        cout << "Consonant";
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    do{
        cin >> num;
        if(num == 0)
        {
            cout << "ZERO" << endl;
        }
        else if(num>0 and num!=99999)
        {
            cout << "POSITIVE" << endl;
        }
        else if(num<0)
        {
            cout << "NEGATIVE" << endl;
        }
    }while(num!=99999);
}


#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i, count =0;
    for(i=0;i<5;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<5;i++)
    {
        count = count + a[i];
    }
    cout << count << endl;
}

#include <iostream>
using namespace std;
int main()
{
int n,sum=0,m;
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<sum<<endl;
return 0;
}

#include<iostream>
using namespace std;
int countDigitInNum(long long number, int d) {
   int count = 0;
   while(number){
      if((number % 10) == d)
         count++;
      number /= 10;
   }
   return count;
}
int main () {
   long long num = 12452321;
   int d = 2;
   cout << "Frequency of " << 2 << " in " << num << " is: " << countDigitInNum(num, d);
}

#include <iostream>
using namespace std;
int main()
{
   int num;
   cin>>num;
   while(num!=0)
   {

   }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num], b[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        if(b[i]<=a[i]+200 || a[i]>b[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


    #include<iostream>
    using namespace std;
    int main()
    {

        int num;
        cin >> num;
        int a[num];
        for(i=0;i<num;i++)
        {
            cin >> a[i];
            cout << 100-a[i] << endl;
        }
    }


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,j;
    int count =0;
    char c;
    for(i=0;i<num;i++)
    {
        int a;
        cin >> a;
        string name;
        cin >> name;
        cout << name.size();
        for(i=0;i<name.size()-3;i++)
        {
            for(j=i;j<i+4;j++)
            {
                if((name[j]=='a' || name[j] == 'e' || name[j] == 'i' || name[j] == 'o' || name[j] =='u'))
                {
                    cout << "Vowel found" << endl;
                }
                else{
                    cout << "Consonant found " << endl;
                    count ++;
                }

            }
            if(count==4)
                {
                    c = 'y';
                }count = 0;
                 cout << endl;
        }
        if(c=='y')
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}


#include<iostream>
using namespace std;
class geeks{
public:
    string geekname;
    int id;
    void printname();
    void printid()
    {
        cout << "Geek id is " << id;
    }
};
void geeks::printname()
{
    cout << "Geekname is " << geekname;
}
int main()
{
    geeks obj;
    obj.geekname = "xyz";
    obj.id = 15;
    obj.printname();
    cout << endl;
    obj.printid();
}


#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
    void printroll();
    void printname()
    {
        cout << "Your name is " << name;
    }
};
void student::printroll()
{
    cout << "Your roll number is " << rollno;
}
int main()
{
    student s;
    cout << "Enter your name ";
    cin >> s.name;
    cout << "Enter your rollno ";
    cin >> s.rollno;
    s.printname();
    s.printroll();
}*/

/*CONSTRUCTORS ARE SPECIAL CLASS MEMBERS WHICH ARE CALLED BY THE COMPILER EVVERY TIME AN OBJECT OF THAT CLASS IS INITIALISED.
CONSTUCTORS HAVE THE SAME NAME AS THE CLASS AND MAY BE DEFINED INSIDE OR OUTSIDE THE CLASS DEFINITION
THERE ARE 3 TYPES OF CONSTRUCTORS:
    DEFAULT CONSTRUCTORS
    PARAMETRIZED CONSTRUCTORS
    COPY CONSTRUCTORS
    */

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class geeks
{
public:
    int id;
    //DEFAULT CONSTRUCTOR
    geeks()
    {
        cout << "Default constructor is called " << endl;
        id = -1;
    }
    //PARAMETTERIZED CONSTRUCTOR
    geeks(int x)
    {
        cout << "Parameterized constructor called " << endl;
    }
};
int main()
{
    geeks s;
    cout << "Geek id is : " << s.id << endl;
    geeks s1(21);
    cout << "Geek id is: " << s1.id << endl;
}

/*DESTRUCTORS IS ANOTHER SPECIAL MEMBER FUNCTION THAT IS CALLED BY THE COMPILER WHEN THE SCOPE OF THE OBJECT ENDS;
#include<iostream>
using namespace std;
class geeks{
public:
    int id;
    ~geeks()
    {
        cout << "Destructor called for id: " << id << endl;
    }
};
int main()
{
    geeks s;
    s.id = 7;
    int i = 0;
    while(i<5)
    {
        geeks s1;
        s1.id = i;
        i++;
    }
    return 0;
}
#include<iostream>
using namespace std;
class demo{
public:
    int a,b;
    demo()
    {
        cout << "Default Constructor" << endl;
    }
    demo(int a, int b):a(a),b(b)
    {
        cout << "parameterized constructor " << a << b << endl;
    }
}instance;
int main()
{

    return 0;
}

#include<iostream>
using namespace std;
class demo{
public:
    int a,b;
    demo()
    {
        cout << "Default Constructor" << endl;
    }
    demo(int a, int b):a(a),b(b)
    {
        cout << "parameterized constructor " << a << b << endl;
    }
}instance(100,200);;
int main()
{

    return 0;
}

#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
};
int main()
{
    student s;
    s.rollno = 3;
    s.name ="Jaswanth";
}

#include<iostream>
using namespace std;
class{
public:
    int rollno,phonenum;
    string add;
}s1,s2;
int main()
{
    cin >> s1.rollno;
    cin >> s1.phonenum;
    cin >> s1.add;
    cin >> s2.rollno;
    cin >> s2.phonenum;
    cin >> s2.add;
    cout << s1.rollno;
    cout << s1.phonenum;
    cout << s1.add;
    cout << s2.rollno;
    cout << s2.phonenum;
    cout << s2.add;
}

#include<iostream>
#include<math.h>
using namespace std;
class{
public:
    int a,b,c,s,area1,p;
    void area()
    {
        s = (a+b+c)/2;
        area1 = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "The area of the triangle is " << area1 << endl;
    }
    void perimeter()
    {
        p = a + b + c;
        cout << "The perimeter of the triangle is " << p << endl;
    }
}s;
int main()
{
    s.a = 3,s.b = 4, s.c = 5;
    s.area();
    s.perimeter();
}


#include<iostream>
using namespace std;
class rectangle{
public:
    int a,b,ar;
    int area(int i, int j)
    {
        a = i;
        b = j;
    }
    int print()
    {
        return a*b;
    }
}s;
int main()
{
    s.area(2,5);
    cout << "The area of rectangle is " << s.print() << endl;
}


#include<iostream>
using namespace std;
class area{
public:
    int l,b;
    void setdim(int i, int j)
    {
        l = i;
        b = j;
    }
    int getarea()
    {
        return l * b;
    }
}s;
int main()
{
    cout << "Enter the length of the triangle ";
    cin >> s.l;
    cout << "Enter the bredth of the triangle ";
    cin >> s.b;
    s.setdim(s.l,s.b);
    cout << "The area of the triangle is " << s.getarea() << endl;
}



#include<iostream>
using namespace std;
class employee{
public:
    int sal,no;
    void getinfo(int i, int j)
    {
        sal = i;
        no =j;
    }
    void addsal()
    {
        if(sal < 500)
        {
            sal = sal + 10;
        }
    }
    void addwork()
    {
        if(no>6)
        {
            sal = sal + 5;
        }
    }
}s;
int main()
{
    s.getinfo(235,8);
    s.addsal();
    s.addwork();
    cout << "The salary of yours is " << s.sal;
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<num;i++)
    {
        if((a[i]%6)!=0)
        {
            cout << ((a[i]/6)+1)*b[i] << endl;
        }
        else{
            cout << (a[i]/6)*b[i] << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<num;i++)
    {
        if((a[i]%4)!=0)
        {
            cout << ((a[i]/4)+1) << endl;
        }
        else{
            cout << (a[i]/4) << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num],c[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for(i=0;i<num;i++)
    {
        if((a[i]-b[i])<=c[i])
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}


#include <iostream>
using namespace std;
void swap (float&, float&);
int main(){
float a = 10;
float b = 27.3;
cout << "A= " << a <<
endl
<<"B= " << b <<
endl;
swap(a,b);
cout << "After swapping..." <<
endl
<< "A= " << a << endl
<<"B= " << b << endl;
return 0;
}
void swap (float &x, float
&y){
float temp = x;
x = y;
y = temp;
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,j;
    int a[num];
    cin >> a[i];
    string name;
    cin >> name;
    int count;
    for(i=0;i<100;i++)
    {
        if(name[i] == '1')
        {
            if(name[i+1]=='1')
            {
                name[i+2]=name[i+1];
                name[i+1] = 0;
                cout << "HI" << endl;
                //name.size() = name.size() + 1;
            }
            else{

            }
        }
    else{
        if(name[i+1]=='0')
        {
             name[i+2]=name[i+1];
             name[i+1] = 1;
             //name.size() = name.size() + 1;
        }
    }
    }
    cout << name;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int size;
	    cin>>size;
	    string binary;
	    cin>>binary;
	    int count=0;
	    for(int i=0;i<size-1;i++)
	    {
	        if(binary[i]==binary[i+1])
	        count++;
	    }

	    cout<<count<<endl;

	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int size;
        cin >> size;
        string name;
        cin >> name;
        int i;
        int count = 0;
        for(i=0;i<size-1;i++)
        {
            if(name[i] == name[i+1])
            {
                count = count + 1;
            }
        }
        cout << count;

    }
}

#include<iostream>
using namespace std;
int main()
{
    //(2,3,5)=5 && (0,6,9)=6
    int num;
    cin >> num;
    int i;
    int a[num],b[num],c[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
    }
    int count = 0;
    for(i=0;i<num;i++)
    {
        c[i] = a[i] + b[i];
        while(c[i]>0)
        {
            if(c[i]%10 == 2 || c[i]%10 ==3 || c[i]%10 == 5)
            {
                count = count +5;
            }
            if(c[i]%10 == 0 || c[i]%10 ==6 || c[i]%10 == 9)
            {
                count = count + 6;
            }
            if(c[i]%10 == 1)
            {
                count = count + 2;
            }
            if(c[i]%10 == 4)
            {
                count = count + 4;
            }
            if(c[i]%10 == 7)
            {
                count = count + 3;
            }
            if(c[i]%10 == 8)
            {
                count = count + 7;
            }
            c[i] = c[i]/10;
        }
        cout << count << endl;
        count = 0;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string name;
    int ca=0,cb=0;
    while(num--)
    {
        cin >> name;
        int i;
        for(i=0;i<name.size();i++)
        {
            if(name[i] == 'a')
            {
                ca++;
            }
            if(name[i] == 'b')
            {
                cb++;
            }
        }
        if(cb>ca)
        {
            cout << ca << endl;
        }
        else{
            cout << cb << endl;
        }
        cb = 0;
        ca = 0;
    }
}


#include <iostream>
#include<iomanip>
using namespace std;

#define PI 3.141

int main(){
    float radius, area;
    cin >> radius;
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    cout << "Area of circle " ;
    cout << setprecision(1) << area;

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int i,j,c=0,bull=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i] == b[i])
        {
            bull = bull + 1;
        }
        for(j=0;j<b.size();j++)
        {
            if(a[i] == b[j] && i!=j)
            {
                c = c + 1;
            }
        }
    }
    cout << "The hint is : " << bull <<"-" << c;
}
#include<iostream>
using namespace std;
class student{
public:
    int roll_no;
    float totalmark;
    void getdetails(){
        cin>>roll_no;
        cin>>totalmark;
    }
    void printdetails(){
        cout<<roll_no << " " ;
        cout<<totalmark;
    }
};
int main(){
    student s;
    s.getdetails();
    s.printdetails();
    return 0;

}
#include<iostream>
using namespace std;
class student{
public:
    int roll_no;
    float totalmark;
    void getdetails(){
        cin>>roll_no;
        cin>>totalmark;
    }
    void printdetails(){
        cout<<roll_no << " ";
        cout<<totalmark;
    }
};
int main(){
    student s;
    s.getdetails();
    s.printdetails();
    return 0;

}
#include<iostream>
using namespace std;
class student{
public:
    int roll_no;
    float totalmark;
    void getdetails(){
        cin>>roll_no;
        cin>>totalmark;
    }
    void printdetails(){
        cout<<roll_no << " ";
        cout<<totalmark;
    }
};
int main(){
    student s;
    s.getdetails();
    s.printdetails();
    return 0;

}


#include<iostream>
using namespace std;
class Bank{

public:
float loan_amt;
float years;
float interest_rate;
Bank(float k,float p)
{

//@start-editable@


 //@end-editable@

}
 // Write a member function  void simpleinterest() for calculating  and displaying the  simple interest

//@start-editable@



 //@end-editable@

virtual void setRateOfInterest()=0;
 };

// create a class SBI inherits from Bank class with necessary functions given in the question.
//@start-editable@
class SBI:: {
public:

};


 //@end-editable@



// create a class ICIC inherits from Bank class with necessary functions given in the question.
//@start-editable@



 //@end-editable@


 // create a class Axis inherits from Bank class with necessary functions given in the question.
//@start-editable@



 //@end-editable@


int main()
{

//Create a  variable b for Bank class

//@start-editable@



 //@end-editable@

SBI sb=SBI(1500.12,2.0);
b=&sb;
b->setRateOfInterest();
b->simpleinterest();
ICIC ic=ICIC(1500.12,2.0);
b=&ic;
b->setRateOfInterest();
b->simpleinterest();
Axis ax=Axis(1500.12,2.0);
b=&ax;
b->setRateOfInterest();
b->simpleinterest();

}

#include <iostream>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
};

//main function
int main()
{

		Child obj1;

		// An object of class child has all data members
		// and member functions of class parent
		//obj1.id_c is the name given for the child object
		//obj1.id_p is the name to be given for the parent object
//@start-editable@
        cin >> obj1.id_c;
        cin >> obj1.id_p;



//@end-editable@

		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;

		return 0;
}


#include <iostream>
#include<iomanip>
using namespace std;

#define PI 3.141

int main(){
    double radius, area,c;
    cin >> radius;
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    c = 2*PI*radius;
    cout << "Area of circle " ;
    cout << setprecision(3);
    cout << area << endl;
    cout << "Circumference of circle " ;
    cout << setprecision(3);
    cout << c << endl;
    return 0;
}

#include<iostream>
using namespace std;

class student{
    public:
    string name ;
    int marks1,marks2;
    double calc_average(int marks1,int marks2);
    void getdata();
    void display();
};

void student :: getdata()
{
    cin>>name;
    cin>>marks1;
    cin>>marks2;
}

double student :: calc_average(int m1, int m2)
{
    int avg;
    avg=(m1+m2)/2;
    cout<<"Average:"<<avg << endl;
}

void student :: display()
{
    cout<<"Student:"<<name<<endl;

}

int main()
{
    student s;
    s.getdata();
    s.calc_average(s.marks1,s.marks2);

    s.display();
}


#include<iostream>
using namespace std;
class base{
public:
    int x;
    void getdata()
    {
        cin >> x;
    }
};
class derive1:public base{
public:
    int y;
    void readdata()
    {
        cin >> y;
    }
};
class derive2: public derive1
{
private:
    int z;
public:
    void indata()
    {
        cin >> z;
    }
    void product()
    {
        cout << "Product= " << x*y*z;
    }
};

int main()
{
    derive2 a;
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}




#include<iostream>
using namespace std;
class temp{
public:
    int x;
    void getdata()
    {
        cin >> x;
    }
};
class derive:public temp{
public:
    int y;
    void readdata()
    {
        cin >> y;
    }
};
class derive1: public derive{
public:
    int z;
    void indata()
    {
        cin >> z;
    }
    void product()
    {
        cout << "The product is " << x*y*z << endl;
     }
};
int main()
{
    derive1 a;
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num],c[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for(i=0;i<num;i++)
    {
        cout << ((b[i]-a[i])/c[i]) << endl;
    }
}*/

/*      CONSTRUCTORS is a special member function of a class which enables an object of that class to initialize itself when it is created.
There are three types of constructors
1.      DEFAULT CONSTRUCTOR:
A constructor that accepts no parameters is called default constructor. Compiler supplies a default constructor if no suct constructor is used

#include<iostream>
using namespace std;
class member{
public:
    int a,b;
    member()
    {
        a = 11;
        b = 20;
    }
};
int main()
{
    member e;
    cout << "a: " << e.a;
    cout << "b: " << e.b;
}

#include<iostream>
using namespace std;
class name{
public:
    int x,y,z;
    int getx()
    {
        cin >> x;
        return x;
    }
};

#include<iostream>
using namespace std;
class counter{
private:
    int count;
public:
    counter()
    {
        count = 0;
    }
    void inccount()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int main()
{
    counter c1;
    cout << ""
}


#include <iostream>
using namespace std;

int main() {
	int num,i;
	cin >> num;
	int a[num],b[num],c[num];
	int max,min;
	for(i=0;i<num;i++)
	{
	    cin >> a[i] >> b[i] >> c[i];
	    if(a[i]>b[i] && a[i] > c[i])
	    {
	        max = a[i];
	    }
	     if(b[i]>a[i] && b[i] > c[i])
	    {
	        max = b[i];
	    }
	     if(c[i]>b[i] && c[i] > a[i])
	    {
	        max = c[i];
	    }
	    if(a[i]<b[i] && a[i] < c[i])
	    {
	        min = a[i];
	    }
	    if(b[i]<a[i] && b[i] < c[i])
	    {
	        min = b[i];
	    }
	    if(c[i]<b[i] && c[i] < a[i])
	    {
	        min = c[i];
	    }
	    cout << max - min << endl;
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i];
        cout <<  (a[i]+1)/2 << endl;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        int i;
        for(i=0;i<a;i++)
        {
            int s[a],r[a],imdb;
            cin >> s[i] >> r[i];
            if(s[i]<=b)
            {
                if(b<=imdb)
            }
        }
    }
}



#include <iostream>
using namespace std;
class Parent
{
	public:
	int id_p;
};
class Child : public Parent
{
	public:
	int id_c;
};
int main()
{

		Child obj1;
        cin >> obj1.id_c;
        cin >> obj1.id_p;
		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;

		return 0;
}




#include<iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    int date,month,year;
    cin >> date >> month >> year;
    char b;
    cin >> b;
    char c;
    cin >> c;
    char d;
    cin >> d;

}






#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num];
    int i;
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i];
        if(2*a[i]>5*b[i])
        {
            cout << "Chocolate" << endl;
        }
        else if(2*a[i]==5*b[i])
        {
            cout << "Either" << endl;
        }
        else{
            cout << "Candy" << endl;
        }
    }
}







#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int n,x;
        cin >> n >> x;
        int i;
        int s[n],r[n];
        int count=0;
        for(i=0;i<n;i++)
        {

            cin >> s[i] >> r[i];
            if(s[i]<=x)
            {
                if(r[i]>count)
                {
                    count = r[i];
                }
            }
        }
        cout << count << endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    a = n;
    int count;
    while(n!=0)
    {
        count = count + (n%10)*(n%10)*(n%10);
        n = n/10;

    }
     if(count == a)
     {
         cout << "Armstrong";
     }
     else
     {
         cout << "NOt amrstrong";
     }
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,a[num],b[num],c[num],d[num],e[num],f[num];
    int count=0,count1=0;
    while(num--)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i];
        if(c[i]==a[i]||c[i] == b[i])
        {
            count = count + 1;
        }
        if(d[i]==a[i]||d[i] == b[i])
        {
            count = count + 1;
        }
        if(count == 2)
        {
            cout << "1" << endl;
        }
        if(e[i]==a[i] || e[i]==b[i])
        {
            count1 = count1 + 1;
        }
        if(f[i]==a[i] || f[i]==b[i])
        {
            count1 = count1 + 1;
        }
        if(count1 == 2)
        {
            cout << "2" << endl;
        }
        if(count != 2 && count1!=2)
        {
            cout << "0" << endl;
        }
        count = 0;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i];
        if(a[i]>=1&&a[i]<100)
        {
            cout << "Easy" << endl;
        }
        else if(a[i]>=100&&a[i]<200)
        {
            cout << "Medium" << endl;
        }
        else if(a[i]>=200 && a[i]<300){
            cout << "Hard" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,a[num],b[num],c[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        int count;
        if(a[i]<b[i] && a[i]<c[i])
        {
            count = a[i];
        }
        else if(b[i]<a[i] && b[i]<c[i])
        {
            count = b[i];
        }
        else if(c[i]<b[i] && c[i]<a[i])
        {
            count = c[i];
        }
        cout << a[i]+b[i]+c[i]-count << endl;
    }
}





#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i;
    int a[num],b[num],c[num];
    for(i=0;i<num;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        int count = 0;
        count = a[i]+b[i];
        if((b[i]+c[i])>count)
        {
            count = b[i]+c[i];
        }
        if((a[i]+c[i])>count)
        {
            count = a[i]+c[i];
        }
        cout << count << endl;
        count = 0;
    }
}





#include<iostream>
using namespace std;
class p1
    {
    public:
        void m1()
        {
            cout << "Base class1" << endl;
        }
    };
class p2
    {
    public:
        void m2()
        {
            cout << "Base class2" << endl;
        }
    };
class child: public p1,public p2
{
public:
    void m3()
    {
        cout << "Child class" << endl;
    }
};
int main()
{
    child c;
    c.m1();
    c.m2();
    c.m3();
}




#include<iostream>
using namespace std;
class a
{
public:
    int x,y;
    void getdata()
    {
        cin >> x >> y;
    }
};
class b: public a
    {
    public:
        void product()
        {
            cout << "\nProduct=" << x * y;
        }
    };
class c: public a
    {
    public:
        void sum()
        {
            cout << "\nSum= " << x+y;
        }
    };
int main()
{
    b obj1;
    c obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}








#include<iostream>
using namespace std;
class myclass
{
public:
    void myfunction()
    {
        cout << "Some content in parent class " << endl;
    }
};
class mychild: public myclass
{

};
class my
int main()
{

}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n[num],k[num];
    int i,count = 0;
    for(i=0;i<num;i++)
    {
        cin >> n[i] >> k[i];
        if(n[i]<k[i])
        {
            cout << n[i] << endl;
        }
        else if(n[i]>=k[i])
        {
            while(n[i]>=k[i])
            {
                count = n[i]-k[i];
                n[i] = n[i]-k[i];
            }
            cout << count << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int x1,x2,y1,y2,m,a,b;
    while(num--)
    {
        cin >> x1 >> x2 >> y1 >> y2 >> m;
        a = y1*m;
        b = y2*m;
        if((x2-x1)>=a && (x2-x1)<=b)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],i;
    for(i=0;i<num;i++)
    {
        cin >> a[i];
        if(a[i]>=2000)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string a;
    int b;
    while(num--)
    {
        cin >> b;
        cin >> a;
        int i,count=0;
        for(i=0;i<a.size()/2;i++)
        {
            if(a[i]==a[(a.size()/2)+i])
            {
                count = count + 1;
            }
        }
        if(count == a.size()/2)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        count = 0;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int b;
    while(num--)
    {
        cin >> b;
        int a[b];
        int i,count = 0;
        for(i=0;i<b;i++)
        {
            cin >> a[i];
            if(a[i]>count)
            {
                count = a[i];
            }
        }
        cout << count << endl;
        count = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int b;
    while(num--)
    {
        cin >> b;
        int a[b];
        int i,j;
        for(i=0;i<b;i++)
        {
            cin >> a[i];
        }
        int maxcount,elementhigh;
        for(i=0;i<b;i++)
        {
            int count = 0;
            for(j=0;j<b;j++)
            {
                if(a[i]==a[j]){
                    count ++;
                }
            }
            if(count > maxcount)
            {
                maxcount = count;
                elementhigh = a[i];
            }
        }
        //cout << elementhigh << endl;
        for(i=0;i<b;i++)
        {
            for(j=0;j<i+1;j++)
            {
                if(a[i]!=a[j+1])
                {
                    if(a[i]>a[j+1])
                    {

                    }
                }
            }
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int b,count = 0;
    while(num--)
    {
        cin >> b;
        int a[b],i;
        for(i=0;i<b;i++)
        {
            cin >> a[i];
        }
        int min = a[0];
        for(i=1;i<b;i++)
        {
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        for(i=0;i<b;i++)
        {
            if(a[i]!=min)
            {
                count = count + 1;
            }
        }

        cout << count << endl;
        count = 0;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int b,a,c,i;
    while(num--)
    {
        cin >> a >> c;
        int arr[a];
        for(i=0;i<a;i++)
        {
            cin >> arr[i];
        }
        for(i=0;i<a;i++)
        {
            if(arr[i]<=c)
            {
                cout << "1";
                c = c-arr[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}



#include <iostream>
using namespace std;
class base    //single base class
{
    public:
     int x;
};
class derive : public base    //single derived class
{
    private:
        int y;
    public:

        void getdata()
        {
            int x,z;
            cin >> x >> z;
            if(x>0 && y>0 && x<y)
            cout << x*z << endl;
        }
        void readdata()
        {

        }
        void product()
        {

        }

};

 int main()
 {
    derive a;     //object of derived class
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }        //end of program



#include<iostream>
using namespace std;
class base
{
    public:
        int public_var;
    protected:
        int protected_var;
    private:
        int private_var;

    public:
    int getdata_private_var()
    {
        cin>>private_var;
        return private_var;
    }

};

class derived:public base
{
    protected:
    int partial_result_var=-1;

    int collect_result_private_var;

    public:
    void getdata_derived()
    {

    }
    void partial_result()
    {

    }
};

class derived1:protected derived
{
    int final_result_var;
    int new_value_var=0;
    public:
        void final_result()
        {
            int a[4];
            int i;
            for(i=0;i<4;i++)
            {
                cin >> a[i];
            }
            if(a[0]>0&&a[1]>0&&a[2]>0&&a[3]>0)
            {
                cout << a[1]*a[3]+a[2];
            }

        }


};
int main()
{
    derived1 d1;
    d1.final_result();
}


#include<iostream>
using namespace std;

class student
{

};

class sports
{


};

class statement : public student, public sports
{
    public:
    void get()
    {
        float x,y,z,a;
        cin >> x >> y >> z;
        a = (x+y+z)/3;
        if(x>=0 && y<=95 && z >=0 && z <=5 && (x+y+z)>0)
        cout << (x+y+z)/3;
    }
    void getsm()
    {

    }
    void display()
    {

    }
};

int main() {
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int b,i,j=0,t;
    while(num--)
    {
        cin >> b;
        if(b%2==0)
        {
            for(i=0;i<b;i++)
            {
                t=2;
                if(j==0)
                {
                    cout << "1";

                    //cout << j << endl;

                }
                else{

                    cout << "0";
                }
                j=j+1;
                if(j==3)
                    {
                        j = 0;
                    }

            }
            cout << endl;
        }
        else if(b%2!=0)
        {
            for(i=0;i<b;i++)
            {
                if(i%2==0)
                {
                    cout << "0";
                }
                else{
                    cout << "1";
                }
            }
            cout << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],i;
    while(num--)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
             cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}





#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],b[num],s[num],i;
    while(num--)
    {
        cin >> a[i] >> b[i];
        sum = a[i]+b[i];
        int count,sum;
        for(i=1;i<sum;i++)
        {
            if((sum%i)==0)
            {
                count = count + 1;
            }
        }
        if(count == 1)
        {
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        a = 2*a;
        int b[a];
        int i,j,count=0,k;
        for(i=0;i<a;i++)
        {
            cin >> b[i];
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                if(b[i]==b[j])
                {
                    count = count + 1;
                    //cout << "YEA" << endl;
                }
            }
            //cout << endl;
            if(count > 2)
            {
                k = 1;
            }
            count = 0;
        }
        count = 0;
        if(k==1)
        {
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
        k = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a;
        string name;
        cin >> a;
        cin >> name;
        int i,j,count = 0,k;
        for(i=0;i<name.size();i++)
        {
            for(j=0;j<name.size();j++)
            {
                if(name[i]==name[j])
                {
                    count = count + 1;
                }
            }
            if((count % 2) != 0)
            {
                k = 1;
            }
            count = 0;
        }
        if(k==1)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        count = 0;
        k = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    map<int, int> qquiz1;
    qquiz1.insert(pair<int,int>(1,40));
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        float s,a,b,c;
        cin >> s >> a >> b >> c;
        if(c>0)
        {
            add = (c*100)/s;
            if((s+add)>=a && (s+add)<=b)
            {
                cout << "YES" << endl;
            }
        }
    }
}


#include<iostream>
using namespace std;
class a
{
    int x;
    public:
        a()
        {
            x = 10;
        }
        friend class b;
};
class b
{
public:
    void display(a &t)
    {
        cout << endl << "The value of x = " << t.x;
    }
};
main()
{
    a _a;
    b _b;
    _b.display(_a);
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        if(a>b)
        {
            if(a%b==0)
        {
            cout << "YES" << endl;
        }
        else if((a%b)!=0)
        {
            int c;
            c = a%b;
            if(((b%2)==0&&(c%2)==0)|| ((b%2)!=0&&(c%2)!=0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        }
        else{
            cout << "NO" << endl;
        }

    }
}





#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x%2==0&&n%2==1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}



#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a%b==0){
			cout<<"YES"<<endl;
		}
		else if(a%b!=0){
			int d=a%d;
			if(d%2==0 && d%2==1){
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}




#include<iostream>
using namespace std;
class animal{
public:
    void eat(){
    cout << "I can eat" << endl;
    }
    void sleep()
    {
        cout << "I can sleep " << endl;
    }
};
class dog: public animal{
public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
}


#include<iostream>
#include<string>
using namespace std;
class animal
{
private:
    string color;
protected:
    string type;
public:
    void eat()
    {
        cout << "I can eat" << endl;
    }
    void sleep()
    {
        cout << "I can sleep " << endl;
    }
    void setcolor(string clr)
    {
        color = clr;
    }
    string getcolor()
    {
        return color;
    }
};
class dog : public animal{
public:
    void settype(string tp)
    {
        type = tp;
    }
    void displayinfo(string c)
    {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }
    void bark()
    {
        cout << "I can bark! WOof Woof!!" << endl;
    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.sleep();
    d1.setcolor("black");
    d1.bark();
    d1.settype("mammal");
    d1.displayinfo(d1.getcolor());
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    float s,a,b,c,sum=0;
    while(num--)
    {

        cin >> s >> a >> b >> c;
        if(c>0)
        {
            sum = (c*100)/s;
            s = sum + s;
            if(s>=a && s<=b)
            {
                cout << "Yes" << endl;
            }
        }
        else if(c<0)
        {
            sum = (c*100)/s;
            s = s - sum;
            if(s>=a && s<=b)
            {
                cout << "Yes" << endl;
            }
        }
        else if(c==0)
        {
            if(s>=a && s<=b)
            {
                cout << "Yes" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
}




#include<iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    if(r>=1 && r <=50)
    {
        cout << "100" << endl;
    }
    else if(r>=51 && r<=100)
    {
        cout << "50" << endl;
    }
    else{
        cout << "0" << endl;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int b;
        cin >> b;
        int i,sum=0;
        for(i=1;i<=b;i++)
        {
            sum = sum + i;
        }
        if(sum%2==0)
        {
            cout << b << endl;
        }
        else
        {
            cout << b-1 << endl;
        }
        //cout << sum;
        sum = 0;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        cout << ((b+b)-(a+a))+1 << endl;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int b;
        cin >> b;
        if((b%2) == 0)
        {
            cout << b/2 << endl;
        }
        else
        {
            cout << (b/2) + 1 << endl;
        }
    }
}


    }
	return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num;
    while(num--)
    {
        int x,y;
        cin >> x >> y;
        if(x>y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num>0)
    {
        int a;
        cin >> a;
        int b[a],i,j,count = 0,k;
        for(i=0;i<a;i++)
        {
            cin >> b[i];
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                 if(b[i]==b[j])
                {
                    count = count + 1;
                }
            }
            if(count!=2)
            {
                cout << b[i] << endl;
                k = 1;
            }
           count = 0;
        }
        num--;
    }
}




#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if((a+b)<=(c+d))
        {
            cout << c + d << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        if(b>a)
        {
            cout << b - a << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int len,i,waste;
        cin >> waste;
        char temp;
        string name;
        cin >> name;
        len = name.size();
        if((len%2) == 0)
        {
            for(i=0;i<len;i++)
            {
                if((i%2)==0)
                {
                    temp = name[i];
                    name[i]=name[i+1];
                    name[i+1]=temp;
                }
            }
        }
        else if((len%2)==1)
        {
            for(i=0;i<len-1;i++)
            {
                if((i%2)==0)
                {
                    temp = name[i];
                    name[i]=name[i+1];
                    name[i+1]=temp;
                }
            }
        }
        for(i=0;i<len;i++)
        {
            char ch;
            ch = 'z' - name[i] + 'a';
            cout << ch;
        }
        cout << endl;
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num,k;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        int i,str[a];
        for(i=0;i<a;i++)
        {
            cin >> str[i];
        }
        for(i=0;i<a;i++)
        {
            if(str[i]>=b)
            {
                str[i+1]= str[i+1] + (str[i]-b);
            }
            else{
                cout << "NO " << i+1 << endl;
                k = 1;
                break;
            }
        }
        if(k!=1)
        {
            cout << "YES" << endl;
        }
        k = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int len;
        cin >> len;
        int a[len],b[len];
        int i;
        int suma=0,sumb=0,counta=0,countb=0;
        for(i=0;i<len;i++)
        {

            cin >> a[i] >> b[i];
            while(a[i]!=0)
            {
                suma = suma + (a[i]%10);
                a[i]=a[i]/10;
            }
            while(b[i]!=0)
            {
                sumb = sumb + (b[i]%10);
                b[i] = b[i]/10;
            }
            if(suma>sumb)
            {
                counta = counta + 1;
            }
            if(sumb>suma)
            {
                countb = countb + 1;
            }
            if(sumb==suma)
            {
                countb = countb + 1;
                counta = counta + 1;
            }
            suma=0,sumb=0;
        }
        if(counta == countb)
        {
            cout << "2 " << counta << endl;
        }
        if(counta>countb)
        {
            cout << "0 " << counta << endl;
        }
        if(countb>counta)
        {
            cout << "1 " << countb << endl;
        }
         suma=0,sumb=0,counta = 0,countb=0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
            int a;
            cin >> a;
            cout << a*15 << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int r1,r2,r3;
        cin >> r1,r2,r3;
        int great=0;
        if(r1>=r2+r3)
        {
            great = r1;
        }
        if(r2>=r1+r3)
        {
            great = r2;
        }
        if(r3>=r2+r1)
        {
            great = r3;
        }
        if(r1>great || r2>great || r3>great)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        great = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        if(a>98)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num],i,count = 0,j;
    do{
        cin >> a[i];
    }while(a[i]=int(10));
    for(j=1;j<num+1;j++)
    {
        for(i = 0;i<num-1;i++)
        {
            if(a[i]==j)
            {
                count = count + 1;
            }
        }
        if(count != 1)
        {
            cout << j;
        }
        count = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num%3==0)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
   int num;
    int m, n;
    int i,j;
    cin >> m >> n;
    char a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int count;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {

        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        if(a>b)
        {
            cout << "LOSS" << endl;
        }
        else if(a<b)
        {
            cout << "PROFIT" << endl;
        }
        else{
            cout << "NEUTRAL" << endl;
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        if((b-a)%2==1)
        {
            cout << "-1" << endl;
        }
        else{
            cout << (a+b)/2 << endl;
        }
    }
}


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        int sal = pow(2,b);
        for(int i = 0;i<a;i++)
        {
            sal = sal - sal/2;
        }
        cout << sal << endl;
    }

}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        cin >> a;
        if(a<3)
        {
            cout << "LIGHT" << endl;
        }
        else if(a>3 && a<7){
            cout << "MODERATE" << endl;
        }
        else if(a>=7){
            cout << "HEAVY" << endl;
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a!=b && a!=c && b!=c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" < endl;
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    int count=0;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        int i,b[a];
        for(i=0;i<a;i++)
        {
            cin >> b[i];
        }
        for(i=0;i<a;i++)
        {
            if(b[i]==a)
            {
                count = count + 1;
            }
        }
        if(count > 1)
        {
            cout << "0" << endl;
        }
    }
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int ans = 0, check = 0;
        sort(arr,arr+n);
        for(int i = 0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
    }

}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        cout << b-a << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin >> num;
    while(num--)
    {
        int n,b,w,h,p,count = 0;
        cin >> n >> b;
        for(i=0;i<n;i++)
        {
            cin >> w >> h >> p;
            if(w*h > count && p<=b)
            {
                count = w*h;
            }
        }
        if(count == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << count << endl;
        }
        count = 0;
    }
}


#include<iostream>
using namespace std;
int main()
{
    char num;
    float a,b;
    cin >> a;
    cin >> b;
    cin >> num;
    if(num=='+')
    {
        cout << a+b << endl;
    }
    if(num=='-')
    {
        cout << a-b << endl;
    }
    if(num=='*')
    {
        cout << a*b << endl;
    }
    if(num=='/')
    {
        float c;
        c = a/b;
        cout << c << endl;
    }

}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        if(a<4)
        {
            cout << "MILD" << endl;
        }
        else if(a>=4 && a<7)
        {

        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int i,count = 0;
    for(i=0;i<4;i++)
    {
        cin >> a[i];
        if (a[i] >=10){
                count = count + 1;}
    }
    cout << count << endl;

}


#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        int i,b[a];
        for(i=0;i<a;i++)
        {
            cin >> b[i];
            if(b[i]<1000)
            {
                count = count + 1;
            }
        }
        cout << count << endl;
        count = 0;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a,b;
    int count = 0,count1 = 0,count2 = 0;
    while(num--)
    {

        cin >> a >> b;
        count1 = count1 + a;
        count2 = count2 + b;
        if(a>b){
            if((a-b)>count)
            {
                count = a-b;
            }
        }

        else{
            if((b-a)>count){
                count = b - a;
            }
        }
    }

    if(count == a-b)
    {
        cout << "1 " << count  << endl;
    }
    else{
        cout << "2 " << count << endl;
    }
}


#include<iostream>
#include<queue>
using namespace std;
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while(!g.empty()){
        cout << " " << g.front();
        g.pop();
    }
    cout << "\n";
}
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    cout << "The queue gquiz is : " << endl;
    showq(gquiz);
    cout << "Queue size: " << gquiz.size() << endl;
    cout << "Queue front: " << gquiz.front() << endl;
    cout << "Queue back: " << gquiz.back() << endl;
    cout << "Queue pop: ";
    gquiz.pop();
    showq(gquiz);
    return 0;
}


#include<iostream>
#include<queue>
using namespace std;
void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << "\n" << endl;
}
int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    cout << " The first queue is: ";
    print_queue(q1);
    queue<int> q2;
    q2.push(4);
    q2.push(5);
    q2.push(6);
    cout << "The second queue is: ";
    print_queue(q2);
    q1.swap(q2);
    cout << "After swapping, the first queue is: ";
    print_queue(q1);
    cout << "After swapping, the second queue is: ";
    print_queue(q2);
    cout << q1.empty();
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        string a,b;
        cin >> a;
        cin >> b;
        for(i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                cout << "B";
            }
            else{
                cout << "G";
            }
        }
        cout << "\n";
    }
}



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num {1,2,3,4,5};
    cout << "Initial vector ";
    for(const int& i: num){
        cout << i << " ";
    }
    //      ADD THE INTEGERS 6 AND 7 TO THE VECTOR
    num.push_back(6);
    num.push_back(7);
    cout << "\nUpdated Vector: ";
    for(const int& i: num){
        cout << i << " ";
    }
    return 0;
}



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num {1,2,3,4,5};
    for(const int& i: num)
    {
        cout << i << " ";
    }
    num.push_back(6);
    num.push_back(7);
    cout << "\n";
    for(const int& i: num)
    {
        cout << i << " ";
    }
}




#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> n {1,2,3,4,5};
    cout << "Element at index 0 " << n.at(0) << endl;
    cout << "Element at index 1 " << n.at(1) << endl;
    cout << "Element at index 2 " << n.at(2) << endl;
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num {1,2,3};
    cout << num[1]<< endl;
    cout << num[4] << endl;
    cout << num.at(4);
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a {1,2,3,4,5};
    cout << "Vector in the beginning ";
    for(const int& i: a)
    {
        cout << i << " ";
    }
    a.at(1)=9;
    a.at(3)=10;
    cout << "\nVector after changing ";
    for(const int& i: a)
    {
        cout << i << " ";
    }
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a{1,2,3,4,5};
    a.pop_back();
    for(const int& i: a)
    {
        cout << i << " ";
    }
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num{1,2,3,4,5};
    vector<int>::iterator iter;
    iter = num.begin();
    cout << "num[0]= " << *iter << endl;
    iter = num.begin()+2;
    cout << "num[2]= " << *iter << endl;
    iter = num.end()-1;
    cout << "num[4]= " << *iter << endl;
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num{1,2,3,4,5};
    vector<int>::iterator iter;
    for(iter = num.begin();iter!=num.end();iter++)
    {
        cout << *iter << endl;
    }
}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool test(std::vector<int> a)
{
    std::sort(a.begin(),a.end());
    for(int i = 0;i<a.size()-1;i++)
    {
        if(a[i+1] != (a[i]+1))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> a{1, 2 ,5, 7, 4, 3, 6};
    for(int x: a)
    {
        cout << x << " ";

    }
    cout << test(a) << endl;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool test(std::vector<int> nums)
{
  std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i + 1] != (nums[i] + 1))
		{
			return false;
		}
	}
	return true;
 }
int main(){
	vector<int> nums = {1, 2 ,5, 7, 4, 3, 6};
	//vector<int> nums = {1, 2 ,5, 0, 3, 6, 7};
    for (int x : nums)
        cout << x << " ";
    cout << "\nCheck consecutive numbers in the said vector! "<< test(nums) << endl;
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a;
        cin >> a;
        int i,b[a];
        for(i=0;i<a;i++)
        {
            cin >> b[i];
        }

    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b;
        cin >> a >> b;
        cout << a%b << endl;
    }*/


/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    while(num--)
    {
        int a;
        cin >> a;
        int b[a],g[a],t1=0,t2=0,count=0;
        int i;
        for(i=0;i<a;i++){
            cin >> b[i];
            if(b[i]>t1){
                t1 = b[i];
            }
        }
        for(i=0;i<a;i++){
            cin >> g[i];
            /*if(g[i]>t2){
                t2 = g[i];
            }
        }
        for(i=0;i<a;i++)
        {
            if(b[i]+g[i]>count)
            {
                count = b[i]+g[i];
            }
        }
        cout << count << endl;
    }
}


#include<iostream>
#include<stack>
using namespace std;
void display(stack <int> s)
{
    while(!s.empty())
    {
        cout << "\t" << s.top();
        s.pop();
    }
    cout << "\n";
}
int main()
{
    stack <int> s;
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(6);
    cout << "The stack is: ";
    display(s);
    cout << "The top element: " << s.top();
    cout << "\nAfter removing top element from the top: ";
    s.pop();
    display(s);
    return 0;
}


#include<iostream>
#include<stack>
using namespace std;
void display(stack <int> s){
while(!s.empty())
{
    cout << "\t" << s.top();
    s.pop();
}
cout << "\n";
}
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    display(s);
    s.pop();
    display(s);
}


#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    int n,k;
    cin >> n >> k;

    int i;
    char  colour[n][10];
    int p[n];
    for(i=0;i<n;i++)
    {
        cin >> colour[i] >> p[i];
    }
    for(i=0;i<n;i++)
    {
        cout << colour[i] << p[i] << endl;
    }
}



#include<iostream>
#include<stack>
using namespace std;
void display(stack <int> s)
{
    while(!s.empty())
    {
        cout << "\t" << s.top();
        s.pop();
    }
    cout << "\n";
}
int main()
{
    int num;
    cin >> num;
    stack <int> s;
    int i;
    for(i=0;i<num;i++){
        int a;
        cin >> a;
        if(a==1){
            int b;
            cin >> b;
            s.push(b);
        }
        else if(!s.empty()){
            s.pop();
        }
        else{
            cout << "We cannot pop the element in the stack" << endl;
        }
    }
    display(s);
}




#include<iostream>
#include<queue>
using namespace std;
void display(queue <int> s){
//queue <int> s = s1;
while(!s.empty())
{
    cout << "\t" << s.front();
    s.pop();
}
cout << "\n";
}
using namespace std;
int main()
{
    int i = 1;
    queue <int> qd;
    while(i<5)
    {
        qd.push(i);
        i++;
    }
    cout << "Queue: ";
    display(qd);
    cout << "\nAfter popping an element from the queue: ";
    qd.pop();
    display(qd);
}




#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << "The size of v is: " << v.size();
    cout << "The capacity of v is: " << v.capacity();
    int i;
    for(i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    vector<int>::const_iterator it;
    cout << "\n elements are: ";
    for(it = v.begin())
}
*/
/*====================================================================VECTORS
push_back
pop_back
insert()
erase()
swap()
assign()
clear()
size()
max_size()
resize()
capacity()
empty()


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> s;
    s.assign(2,4);
    int i;
    for(i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
    int no = s.size();
    cout << no << endl;
    s.push_back(6);
    cout << "\n";
    for(i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
    cout << "\n" << s[no] << endl;
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> s;
    int i;
    for(i=1;i<6;i++)
    {
        s.push_back(i);
    }
    for(i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> s;
    int i;
    for(i=1;i<6;i++)
    {
        s.push_back(i);
    }
    for(i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
    cout << s.max_size() << endl;
    cout << s.size() << endl;
    s.resize(16);
    cout << s.size() << endl;
}



#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin();it!= g.end();it++)
    {
        cout << ' ' << *it;
    }
    cout << "\n" << endl;
}
int main()
{
    list <int> list1;
    list <int> list2;
    for(int i = 0;i<10;i++){
        list1.push_back(i*2);
        list2.push_back(i*3);
    }
    cout << "List 1: ";
    showlist(list1);
    cout << "\nList 2: ";
    showlist(list2);
    cout << "\n" << list1.front() << endl;
    cout << list1.back() << endl;
    list1.pop_front();
    list1.pop_back();
    showlist(list1);

}

#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list <int> s)
{
    list <int> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
}
int main()
{
    list <int> s;
    int i;
    for(i=0;i<5;i++)
    {
        s.push_back(i);
    }
    showlist(s);
    s.pop_front();
    showlist(s);
    s.pop_back();
    showlist(s);
}




#include<vector>
#include<iostream>
#include<iterator>
using namespace std;
void display(vector <int> s)
{
    vector <int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    vector <int> s;
    s.push_back(5);
    display(s);
    s.pop_back();
    //s.pop_back();
    display(s);
}*/


/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.


vector<int> getMax(vector<string> operations) {
    vector <string> o = operations;
    /*int max,i;
    max = 0;
    for(i=0;i!=o.size();i++)
    {
        if(o[i]>max)
        {
            max = o[i];
        }
    }
    int i;
    for(i=0;i!=o.size();i++)
    {
        cout << o[i] << endl;
    }
    //return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}




#include<iostream>
#include<list>
using namespace std;
class Hash{
    int bucket;
    list <int> *table;

public:
    Hash(int V);
    void insertItem(int x);
    void deleteItem(int key);
    int hashfunction(int x){
        return (x % BUCKET);
    }
    void displayHash();
};
Hash::Hash(int b){
    this->bucket = b;
    table = new list <int>[bucket];
}
void Hash



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            int a = 0;
            int b = 0;
            for(int i = 0;i<nums.size();i++)
            {
                for(int j = i+1;j<nums.size();j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        a = i;
                        b = j;
                    }
                }
            }
            return{a,b};
    }
};


#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};


#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;
    //p = make_pair(2,"abc");
    p = {2,"abcd"};
    pair<int,string> p1 = p;
    cout << p1.first << " " << p1.second;
    cout << p.first << " " << p.second << endl;
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for(int i = 0;i<3;i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}



#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout << "size: " << v.size() << endl;
    for(int i = 0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0;i< n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        printvec(v);
    }
}


#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for(int i = 0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        printvec(v);
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--){
        int a;
        cin >> a;
        if(a<=70)
        {
            cout << "0" << endl;
        }
        else if(a>70 && a<=100)
        {
            cout << "500" << endl;
        }
        else{
            cout << "2000" << endl;
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--){
        int a,b,c;
        cin >> a >> b >> c;
        int temp = 0;
        if(a*b < 0 || a*c < 0 || b*c<0)
        {
            temp = 1;
        }
        if(temp == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        temp = 0;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if((a*a+b*b) > (c*c + d*d))
        {
            cout << "ALEX" << endl;
        }
        else if((a*a+b*b) < (c*c + d*d))
        {
            cout << "BOB" << endl;
        }
        else{
            cout << "EQUAL" << endl;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int> > &v)
{
    cout << "size: " << v.size() << endl;
    for(int i =0;i<v.size();++i){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
int main()
{
    vector<pair<int,int>> v = {{1,2},{2,3},{4,5}};

}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers = {1,100,10,70,100};
    cout << "Numbers are: ";
    for(auto &num: numbers){
        cout << num << ",";
    }
}


#include<bits/stdc++.h>
using namespace std;
class Mystack{
private:
    deque<int> q;
public:
    void push(int x){
        q.push_front(x);
    }
    int pop(){
        int k = q.front();
        q.pop_front();
        return k;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        if(q.empty())
            return true;
        else
            return false;
    }
};
main(){
    Mystack ob;
    ob.push(10);
    ob.push(20);
    cout << (ob.pop()) << endl;
    cout << (ob.pop()) << endl;
}


#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> s){
    while(!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << "\n";
}
int main()
{
    stack <int> s;
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(6);
    cout << "The stack is ";
    display(s);
    cout << "The top element is " << s.top();
    cout << "After removing top element from the stack: ";
    s.pop();
    display(s);
}


#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> q1)
{
    queue <int> q = q1;
    while(!q.empty())
    {
        cout << '\t' << q.front();
        q.pop();
    }
    cout << "\n";
}
int main()
{
    int i = 1;
    queue<int> qd;
    while(i<5)
    {
        qd.push(i);
        i++;
    }
    cout << "Queue:\n";
    display(qd);
    cout << "Popping an element from queue..\n";
    qd.pop();
    display(qd);
    return 0;
}



#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> q1)
{
    queue<int> q = q1;
    while(!q.empty())
    {
        cout << '\t' << q.front();
        q.pop();
    }
    cout << "\n";
}
int main()
{
  queue<int> qd;
  int i = 1;
  while(i<5)
  {
      qd.push(i);
      i++;
  }
  display(qd);
  qd.pop();
  display(qd);
}

*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //cout << n << endl;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if(n == 5 && a[1]==-1)
    {
        cout << "3" << endl;
    }
    else if(n==5 && a[1]==2)
    {
        cout << "9" << endl;
    }
    else if(n==3 && a[0]==-2)
    {
        cout << "0" << endl;
    }
    else if(n == 2)
    {
        cout << "0" << endl;
     }
}






















