#include<iostream>
#include<string>
#include<vector>

//using namespace std;
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::endl;


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
  std::string word;
  while(getline(std::cin,word)){
    std::cout<<word<<std::endl;
  }
  std::string str="xiamengmeng";
  for(auto c:str){
    std::cout<<c<<std::endl;
  }
  std::string s="helloworld!!!";
  decltype(s.size()) punct_cnt=0;
  for(auto c:s)
    if(ispunct(c))
      ++punct_cnt;
  std::cout<<punct_cnt
	   <<" punctuation characters in "<<s<<std::endl;
  std::string s;
  while(std::cin>>s){
    for(auto &c:s)
      if(ispunct(c))
	c=' ';
  }
  std::cout<<s<<std::endl;
  */
  /*
  vector<T> v1;
  vector<T> v2(v1);
  vector<T> v2=v1;
  vector<T> v3(n,val);
  vector<T> v4(n);
  vector<T> v5{a,b,c,...}
  vector<T> v5={a,b,c,...}

  vector<string> svec;
  vector<int> ivec(10);
  vector<string> svec(10);

  vector<int> v1(10);
  vector<int> v2{10};

  vector<int> v3(10,1);
  vector<int> v4{10,1};

  vector<string> v5{"hi"};
  vector<string> v6("hi");//eror
  vector<string> v7{10};
  vector<string> v8{10,"hi"};
  */
  /*
  string s="hello world";
  if(s.begin()!=s.end()){
    auto it=s.begin();
    *it=toupper(*it);
  }
  cout<<s<<endl;
  string s="aBBB";
  if(s.begin()!=s.end()){
    auto it=s.begin();
    *it=toupper(*it);
  }

  string s="hello world!";
  for(auto i=s.begin();i!=s.end() && !isspace(*i);i++){
    *i=toupper(*i);
  }
  cout<<s<<endl;
  */
  /*
  vector<int>::iterator it;
  string::iterator it2;
  vector<int>::const_iterator it3;
  string::const_iterator it4;
  */

  auto beg=text.begin(),end=text.end();
  auto mid=text.begin()+(end-beg)/2;
  while(mid!=end && *mid!=sought){
    if(sought<*mid){
      end=mid;
    }
    if(sought>*mid){
      beg=mid+1;
    }
    mid=beg+(end-beg)/2;
  }
  
return 0;
}
