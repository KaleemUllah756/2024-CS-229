//Task 1
#include <iostream>
using namespace std;
 main(){
int n, angles;
cout<<"Enter the sides of a polygon:"<<endl;
cin>>n;
angles=(n-2)*180;
cout<<"The sum of all the integral angles in a polygon:"<<angles<<endl;
}
//Task 2
#include <iostream>
using namespace std;
  main(){
int min,fps,Total_fps;
cout<<"Number of minutes:"<<endl;
cin>>min;
cout<<"Frames per second:"<<endl;
cin>>fps;
Total_fps=(min*60)*fps;
cout<<"Total number of frames:"<<Total_fps;
}
//Task 3
#include <iostream>
using namespace std;
main(){
int inv,a,t,fv;
cout<<"Enter the initial velocity(m/s):"<<endl;
cin>>inv;
cout<<"Enter the acceleration(m/s^2):"<<endl;
cin>>a;
cout<<"Enter the time(s):"<<endl;
cin>>t;
fv=(a*t)+inv;
cout<<"Final velocity:"<<fv<<endl;
}
//Task4
#include <iostream>
using namespace std;
  main(){
double i,p,chan;
cout<<"Enter the imposter count:"<<endl;
cin>>i;
cout<<"Enter the player count:"<<endl;
cin>>p;
chan=100*(i/p);
cout<<"Chance of being an imposter:"<<chan<<"%"<<endl;
}
//Task 5
#include <iostream>
using namespace std;
main(){
string name;
float weight_loss,days;
cout<<"Enter your name:"<<endl;
cin>>name;
cout<<"Enter the target of weight loss:"<<endl;
cin>>weight_loss;
days=weight_loss*15;
cout<<name<<" will need these days to lose weight:"<<days<<endl;
}
//Task 6
#include <iostream>
using namespace std;
main(){
int size,area;
double cost,cost_pound,cost_foot;
cout<<"Enter the size of the fertilizer:"<<endl;
cin>>size;
cout<<"Enter the cost of the bag in dollars:"<<endl;
cin>>cost;
cout<<"Enter the area covered by bag:"<<endl;
cin>>area;
cost_pound=cost/size;
cost_foot=size*area;
cout<<"Cost of fertilizing per pound in dollars:"<<cost_pound<<endl;
cout<<"Cost of fertilizing per square foot in dollars:"<<cost_foot<<endl;
}
//Task 7
#include <iostream>
using namespace std;
main(){
string name;
double dona;
int atp,ctp,numa,numc,per,total_a,total_c,total,rem;
cout<<"Enter the movie name:"<<endl;
cin>>name;
cout<<"Enter the adult ticket price:"<<endl;
cin>>atp;
cout<<"Enter the child ticket price:"<<endl;
cin>>ctp;
cout<<"Enter the number of adult ticket solds:"<<endl;
cin>>numa;
cout<<"Enter the number of child ticket solds:"<<endl;
cin>>numc;
cout<<"Enter the percentage of the amount to be donated to charity:"<<endl;
cin>>per;
total_a=atp*numa;
total_c=ctp*numc;
total=total_a+total_c;
cout<<"Total amount generated:"<<total<<endl;
dona=(per*total)/100;
cout<<"Donation to charity:"<<dona<<endl;
rem=total-dona;
cout<<"Remaining amount after donation:"<<rem<<endl;
}
//Task 8
#include <iostream>
using namespace std;
main(){
float vpk,fpk,total_veg,total_fru,total;
int veg,fru,Earnings;
cout<<"Enter vegetable price per kilogram(in coins):"<<endl;
cin>>vpk;
cout<<"Enter fruit price per kilogram(in coins):"<<endl;
cin>>fpk;
cout<<"Enter total kilograms of vegetables:"<<endl;
cin>>veg;
cout<<"Enter total kilograms of fruit:"<<endl;
cin>>fru;
total_veg=vpk*veg;
total_fru=fpk*fru;
total=total_veg+total_fru;
Earnings=total/1.94;
cout<<"Total earnings in rupees:"<<Earnings<<endl;
}
//Task 9
#include <iostream>
using namespace std;
int main(){
int num,digit1,digit2,digit3,digit4,sum;
cout<<"Enter the four digit number:"<<endl;
cin>>num;
digit1=num%10;
digit2=(num/10)%10;
digit3=(num/100)%10;
digit4=(num/1000)%10;
sum=digit1+digit2+digit3+digit4;
cout<<"Sum of digit:"<<sum<<endl;
}
//Task 10
#include <iostream>
using namespace std;
int main(){
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,s,m,sub,result,sum;
cout<<" Enter Number 1:"<<endl;
cin>>n1;
cout<<" Enter Number 2:"<<endl;
cin>>n2;
cout<<" Enter Number 3:"<<endl;
cin>>n3;
cout<<" Enter Number 4:"<<endl;
cin>>n4;
cout<<" Enter Number 5:"<<endl;
cin>>n5;
cout<<" Enter Number 6:"<<endl;
cin>>n6;
cout<<" Enter Number 7:"<<endl;
cin>>n7;
cout<<" Enter Number 8:"<<endl;
cin>>n8;
cout<<" Enter Number 9:"<<endl;
cin>>n9;
cout<<" Enter Number 10:"<<endl;
cin>>n10;
cout<<" Enter Number 11:"<<endl;
cin>>n11;
cout<<" Enter Number 12:"<<endl;
cin>>n12;
cout<<" Enter Number 13:"<<endl;
cin>>n13;
cout<<" Enter Number 14:"<<endl;
cin>>n14;
cout<<" Enter Number 15:"<<endl;
cin>>n15;
s=n1+n2+n3+n4+n5;
m=n6*n7*n8*n9*n10;
sub=n11-n12-n13-n14-n15;
sum=s+m;
result=sum-sub;
cout<<"The final result is:"<<result<<endl;
}
//Task11
#include <iostream>
using namespace std;
int main(){
int age,move,n,same;
cout<<"Enter the person's age:"<<endl;
cin>>age;
cout<<"Enter the number of times they've moved:"<<endl;
cin>>move;
n=move+1;
same=age/n;
cout<<"Average number of years lived in the same house:"<<same<<endl;
}
//Task12
#include <iostream>
using namespace std;
int main(){
int n,w,h,num,dim;
cout<<"Number of square meters you can paint:"<<endl;
cin>>n;
cout<<"Width of the single wall(in meters):"<<endl;
cin>>w;
cout<<"Height of the single wall(in meters):"<<endl;
cin>>h;
dim=w*h;
num=n/dim;
cout<<"Number of walls you can paint:"<<num<<endl;
}
//Task13
#include <iostream>
using namespace std;
int main(){
int num;
int sum=0;
cout<<"Enter the first integer:"<<endl;
cin>>num;
sum+=num;
cout<<"Enter the second integer:"<<endl;
cin>>num;
sum+=num;
cout<<"Enter the third integer:"<<endl;
cin>>num;
sum+=num;
cout<<"Enter the forth integer:"<<endl;
cin>>num;
sum+=num;
cout<<"Enter the fifth integer:"<<endl;
cin>>num;
sum+=num;
cout<<"Sum of integers:"<<sum<<endl;
}







