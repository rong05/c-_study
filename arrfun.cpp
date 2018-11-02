#include <iostream>
const int ArSize = 8;
const int Max = 5;
int sum_arr(int arr[],int n);
int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
void revalue(double r,double ar[],int n);
int main(){
	using namespace std;
	double properties[Max];
    /*int cookies[ArSize] ={1,2,4,8,16,32,64,128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies,ArSize);
    std::cout << "Total cookies eaten: "<< sum << std::endl;
    sum = sum_arr(cookies,3);
    std::cout << "First three eaters ate "<< sum << " cookies.\n";
    sum = sum_arr(cookies+4,4);
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
*/

	int size = fill_array(properties,Max);
	show_array(properties,size);
	if(size > 0){
		cout << "Enter revaluantion factor: ";
		double factor;
		while(!(cin >> factor)){
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor,properties,size);
		show_array(properties,size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

int sum_arr(int arr[],int n){
    int total =0;
    std::cout << arr << " =arr, ";

    std::cout << sizeof arr << " = sizeof arr\n";
    for(int i =0;i < n;i++){
       total = total + arr[i];
    }
    return total;
}

int fill_array(double ar[],int limit){
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit;i++){
    	cout << "Enter value #"<<(i+1) << ": ";
	cin >> temp;
	if(!cin){
		cin.clear();
		while(cin.get() != '\n')
			continue;
		cout << "Bad input; input process terminated.\n";
		break;
	}
	else if(temp < 0)
		break;
	ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n){
    using namespace std;
    for(int i = 0;i < n;i++){
    	cout << "Property #"<<(i+1) << ": $";
	cout << ar[i] << endl;
    }
}

void revalue(double r,double ar[],int n){
     for(int i = 0 ; i < n ; i++){
	ar[i] *= r;
     }
}


