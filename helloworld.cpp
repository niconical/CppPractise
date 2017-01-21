#include<iostream>
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

  int sum=0;int value=0;
  while(std::cin>>value)
    sum+=value;
  std::cout<<sum<<std::endl;
  
  return 0;
}
