#include <iostream>
using namespace std ; 
#include <cmath>;

// namespace 

// namespace first {
//   int x=1;
// }

// namespace second {
//   int x=2;
// }

          // *******************************************

    // typedef - using ex 

    // typedef string text_t ; 

    // using number = int ; 


int main (){


//data types  start

//int => integers

//double => decimal 

// char => single character ''

// boolean => true , false => bool

//string => sentence

// const => make the value doesnt change => constant like js 

//data types  end 



          // *******************************************



  //  cout<<"Hello";

    // operation on 2 var
//    int x ; 
//    int y ;
//    int total ;

//    cout<<"Hello\n please write 2 numbers aftereach one click enter \n";

//    cin>> x ; 
//    cin>> y ;
//    total = x+y ;
//    cout<< "Total = " << total ;
    // end



          // *******************************************



// swap variables value start

// int a = 5 ; 
// int b = 15 ; 
// int box = a ; 

// a = b ; 
// b = box ; 

// cout << b ; 
// swap variables value end 


          // *******************************************

//  increment start 

// int x = 10 ; 
// // int y = x++; //x=11 y= 10

// int z = ++x; //x=11 z= 11
 
// cout<<z;

//  increment end  


         // *******************************************


// math operation test => z = 1.3   x = 10  y = 5

// double x = 10;
// double y = 5;
// double z ; 

// z = (x+10)/(3*y);

// cout<<z;

// math operation test => z = 1.3   x = 10  y = 5 end


         // *******************************************



// training write code display your state tax and county tax from your sales ==> sales  = 95000  s.tax = 4%  c.tax = 2% 

// double sales = 95000; 

// double Stax = sales * 4/100;

// double Ctax =  sales * 2/100;

// cout << "Sales = $" << sales << endl  << "State tax = $"<< Stax << endl << "Country Tax = $" << Ctax;

// training write code display your state tax and county tax from your sales End 

         // *******************************************

//  s.tax ,  c.tax calculator from sales dynamic app 

// double sales ;

// double Stax ; 
 
// double Ctax ;

// double StaxValue ; 

// double CtaxValue ; 

// cout<< "please put your sales value \n";

// cin>> sales ;

// cout<< " please put state tax ratio \n " ;

// cin>> Stax ;

// cout<< " please put Country tax ratio \n " ;

// cin>> Ctax ;

// CtaxValue = sales * Ctax ;

// StaxValue = sales * Stax  ; 

// cout<< "Your Sales = $" << sales <<endl << "State Tax = $" << StaxValue <<endl << "Country tax = $"<<CtaxValue << endl << "Total taxes = $" << CtaxValue+StaxValue;

//  s.tax ,  c.tax calculator from sales dynamic app End 

         // *******************************************


    // namespace using ex. 

    // int x = 0 ;

    // cout<<x;

    // cout<< first::x;
    // cout<< second::x;
    // namespace using ex. end 


    
         // *******************************************

// typedef start
        //  text_t name = "amr"; 
        //  number x = 10 ;
        //  cout<<name << x  ; 

// typedef - using  end


         // *******************************************

// type conversion start 

// int correct = 8 ; 
// int questions = 10 ; 

// double score = correct / (double)questions * 100 ; 

// cout <<score; 

// type conversion end 


         // *******************************************


// cmath start 

// double x = 5.25 ;
// double y = 4 ;
// double  z ; 

// z = max(x,y); = > get max value 
// z = min(x,y); => get min value 
// z =pow(2,4); => 2 power 8 
// z= sqrt (9); => square root 9 
// z= abs(-5); => absolute value 
// z = round (x) ; => abroximate 
// z = ceil(x);=> up the number 
// z = floor (x); => down the number 

// cout<< z ;

// cmath end  


         // *******************************************

  //  exercise app to calc hypo of right angle triangle with dynamic sides length 
 
//  double opposite ;
//  double adjacent ; 
//  double hypo ;

//  cout<<"please put the opposite side value \n";

//  cin>>opposite;

//  cout<<"please put the adjacent side value \n";
//  cin>>adjacent;

//  hypo = sqrt(pow(opposite,2) + pow(adjacent,2));

//  cout<<"Hypo value = "<< hypo ;


  //  exercise app to calc hypo of right angle triangle with dynamic sides length end 


           // *******************************************


// if condition start 

// int age ; 

// cout<<"please enter your age \n";

// cin >>age ;

// if (age>=18)
// {
//   cout<<"welcome to mens secret club";

// } else{
//   cout<<"go out small shit";
// }

// if condition end 



           // *******************************************


//  switch 

int month ;

cout<<"please put the month number \n";
cin >> month ; 

switch (month)
{
case 1:
  cout<<"january";
  break;
case 2 :
  cout << " february";
default:
 cout<<"put true shit";
  break;
}
//  switch end 



           // *******************************************








    return 0 ;
}