// C++(STL).cpp != 0: This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <set>
#include<map>
#include <string.h>
using namespace std;
//comparator function
bool f(int x, int y) {
	return x > y ;

}
void vectordemo() {
	vector<int>A = { 12,34,65,76,12 };
	//cout << " the first element of the vector is " << A[1] << endl;
	cout << " the element of the vector is :: ";
	for (int i = 0; i < 5; i++) {
		cout << "  " << A[i];
	}
	cout << endl;

	cout << " The size of the vector is :: " << A.size() << endl;
	//sorting the vector 
	sort(A.begin(), A.end());
	vector <int>::iterator it4;
	cout << " The sorted vector is :: " << endl;
	for (auto it4 = A.begin(); it4 != A.end(); it4++) {
		cout << "  " << *it4;
	}
	cout << " \n \n ";

	//binary search with the help find the element in the given vector 
	bool present = binary_search(A.begin(), A.end(), 76);//true
	cout << " \n ";

	present = binary_search(A.begin(), A.end(), 1233);//false
	cout << " \n ";

	//insert the element in the vector
	A.push_back(1233);
	//Again check the number is present or not 
	present = binary_search(A.begin(), A.end(), 1233);//true 
													  //insert the element in the vector 
	A.push_back(1233);
	A.push_back(1233);
	A.push_back(1233);
	A.push_back(1233);
	A.push_back(1233);

	A.push_back(1234);
	cout << " the size of the vector is :: " << A.size() << endl;

	//finding the first occerance of the 1233 using iterator 
	auto it = lower_bound(A.begin(), A.end(), 1233);
	//this will give the which is strictly greater the given number 
	auto it2 = upper_bound(A.begin(), A.end(), 1233);//this will give the output 1234 because 

	cout << "The lowe_bound value is \n  " << *it << "\n the upper_bound value is \n  " << *it2 << endl;
	cout << " the differene is :: \n " << it2 - it << endl;//this will give the position different between the lower_bound and upper_bound::
	//sort the vector in the reverse order

	sort(A.begin(), A.end(), f);

	cout << " the vector is sorted from the reverse order::";
	for (int& x : A) {//reference
		x++;       //iterator by reference of a vector 

	}
	for (int x : A) {
		cout << x << "  ";
	}
	cout << " " << endl;
}
void setDemo() {

	set < int > s;

s.insert(12);
s.insert(34);
s.insert(45);
s.insert(-1);
s.insert(-10);
s.erase(-10);//Erase the element from the set ..>>
		for (int x : s) {
			cout << x << "  ";
		}
		cout << " " << endl;


		//find the element in the set or not .if present return it 
		auto it=s.find(-10);
		if (it == s.end()) {//if the element is not present then return it 
			cout << " not present \n  ";
		}
		else {
			cout << " present \n ";
			cout << "it =  " << *it << endl;
		}

		auto it2 = s.upper_bound(-10);//this will give the first element which is strictly greater then -10 ::
		auto it3 = s.upper_bound(0);
		cout << " it2 = " << *it2 << " it3 =  " << *it3 << endl;

		auto it4 = s.upper_bound(56);
		if (it4 == s.end()) {

			cout << " Hohhot! can't  find something like that \n  :: ";
		}

		else {
			cout << " it4 = " << *it4;
		}

	}
void mapDemo() {

	map<int, int >A;//declaration of the map :: ...
	A[1] = 100;
	A[2] = 200;
	A[3] = 300;
	A[10] = 400;
	for (int i = 1; i < 11; i++) {
		cout << " " << A[i] << " ";
	}
		//finding the  how many number of type of character in how many time 
	map<char, int>Amit;
	string x;
	cout << " Enter the All the words : " << endl;
	cin >> x;
		//iterated here 
	for (char c : x) {
		Amit[c]++;
	}
	cout << "The number of A = " << Amit['a'] << "The number of m =  " << Amit['m'] << endl;


}

void powerofStl() {

	set < pair<int, int> > s;

	/*insert the element like pair 
	  finding the which pair is smaller or greater :: >> 
     pair {a,b} is smaller than pair {c,d} 
     iff (a<c)or (a==cand (b<d) */

	s.insert({ 2,3 });
	s.insert({ 12,56 });
	s.insert({ 100,199 });
	s.insert({ 1000,1990 });
	s.insert({ 100,234 });

	// finding the point is present or not in any given interval ;: .. 
	int point = 199;
	auto it = s.upper_bound({ point,INT_MAX });
	if (it == s.begin()) {
		cout << "the given point is not lying in anny interval :: " << endl;
		return;

	}
		it--;
	pair <int, int>current = *it;
	if (current.first <= point && point <= current.second) {
		cout << " yes its present :" << current.first << " ," << current.second << endl;

	}
	else {
		cout << "the given point is not lying in anny interval :: " << endl;


	}

}

int main() {
	powerofStl();
	return 0;
	
}
