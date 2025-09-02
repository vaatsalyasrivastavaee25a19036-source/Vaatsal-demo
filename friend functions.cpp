#include<iostream>
using namespace std;
class employee{
	private:
		int importantdata;
		public:
			int num;
			void geeks(void){
				importantdata=50;
				cout<<"enter your number"<<endl;
				cin>>num;
			}
			friend class meow;
		};
		
		class meow{
			public:
				void getnum(employee&t){
					cout<<"the value of the number is"<<t.num<<endl;
					cout<<"the value of the top secret number is"<<t.importantdata<<endl;
				}
		};
		
		int main(){
			employee harry;
			meow cat;
			harry.geeks();
			cat.getnum(harry);
			return 0;
		}