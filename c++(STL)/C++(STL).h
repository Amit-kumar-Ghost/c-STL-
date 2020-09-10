#pragma once

int main() {
	vector<int>A = { 12,34,65,76,12 };
	//cout << " the first element of the vector is " << A[1] << endl;
	for (int i = 0; i < 4; i++) {
		cout << " the element of the vector is :: \n " << A[i];
	}
	cout << " The size of the vector is :: " << A.size() << endl;
	//sorting the vector 
	sort(A.begin(), A.end());
	//binary search 
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
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 1233);
	//this will give the which is strictly greater the given number 
	vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 1233);//this will give the output 1234 because 

	cout << "The lowe_bound value is \n  " << *it << "\n the upper_bound value is \n  " << *it2 << endl;
	cout << " the differene is :: \n " << it2 - it << endl;//this will give the position different between the lower_bound and upper_bound::


	return 0;

}
