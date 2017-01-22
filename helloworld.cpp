#include<iostream>
#include<string>
//struct foo
//int i=100;
int main(){
  //remind users to enter two numbers

  /*  std::cout<<"Enter two numbers:"<<std::endl;
  int v1=0,v2=0;          //storage the numbers that we enter 
  std::cin>>v1>>v2;       //read data
  std::cout<<"the sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;
  */

  //--------------1.8----------
  //std::cout<<"/*";
  //std::cout<<"*/";
  //std::cout<</*"*/"*/;
  //---------------------------

  /*int sum=0,val=1;
  while(val<=10){
    sum+=val;
    val++;
  }
  std::cout<<" Sum of 1 to 10 is "<<sum<<std::endl; 
 */

  /*int sum=0,val=50;
  while(val<=100){
    sum+=val;
    ++val;
  }
  std::cout<<sum<<std::endl;
  */
  /*
  int val=10;
  while(val>0){
    std::cout<<val--<<std::endl;
  }
  */
  
  /*
  int sum=0;
  for(int i=50;i<=100;i++){
    sum+=i;
  }
  std::cout<<sum<<std::endl;
  */

  /*int sum=0;int value=0;
  while(std::cin>>value)
    sum+=value;
  std::cout<<sum<<std::endl;
  */
  /*int i=100;
  int j=i;
  std::cout<<j;
  int i,&ri=i;
  i=5;ri=10;
  std::cout<<i<<" "<<ri<<std::endl;
  int i=10;
  int j=11;
  int &ri=i;
  std::cout<<ri<<std::endl;
  ri=j;
  std::cout<<ri<<std::endl;
  int i=10;
  const int ci=i;
  std::cout<<" ci is "<<ci<<std::endl;
  i=100;
  std::cout<<" ci is "<<ci<<std::endl;
  int a=10;
  int &ca=a;
  const int &cb=a;
  ca=20;

  int errnum=0;
  int *const curErrnum=&errnum;
  const double pi=3,14159;
  const double *const pip=&pi; 
  decltype(f()) sum=x;
  struct Sales_data{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0
      };
  Sales_data accum,trans,*salesptr;
  string s1;
  string s2=s1;//string s2(s1);
  string s3="hello";//string s3("hello");
  string s4(10,'c');//string s4=string(10,'c');
  std::string s="";
  std::cin>>s;
  std::cout<<" "<<s<<std::endl;
  */

  std::string word;
  while(getline(std::cin,word)){
    std::cout<<word<<std::endl;
  }
return 0;
}
