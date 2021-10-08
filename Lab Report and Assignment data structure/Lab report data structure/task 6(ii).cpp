
//6(ii)/ *linear search using recursive function*/

#include<iostream>
    using namespace std;
int recursiveLinearSearch(int array[],int key,int size) {
	size=size-1;
	if(size <0) {
		return -1;
	} else if(array[size]==key) {
		return 1;
	} else {
		return recursiveLinearSearch(array,key,size);
	}
}
int main() {
	cout<<"Enter The Size Of Array:   ";
	int size;
	cin>>size;
	int array[size], key,i;
	// Taking Input In Array
	for (int j=0;j<size;j++) {
		cout<<"Enter "<<j<<" Element : ";
		cin>>array[j];
	}
	//Your Entered Array Is
	for (int a=0;a<size;a++) {
		cout<<"array[ "<<a<<" ]  =  ";
		cout<<array[a]<<endl;
	}
	cout<<"Enter Key To Search  in Array";
	cin>>key;
	int result;
	result=recursiveLinearSearch(array,key,size--);
	if(result==1) {
		cout<<"Key Found in Array  ";
	} else {
		cout<<"Key NOT Found in Array  ";
	}
	return 0;
}









*/ linear search non-recursive function*/

// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>

using namespace std;


int search(int arr[], int n, int x)
{

    int i;

    for (i = 0; i < n; i++)

        if (arr[i] == x)

            return i;

    return -1;
}

// Driver code

int main(void)
{

    int arr[] = { 2, 3, 4, 10, 40 };

    int x = 10;

    int n = sizeof(arr) / sizeof(arr[0]);



    // Function call

    int result = search(arr, n, x);

    (result == -1)

        ? cout << "Element is not present in array"

        : cout << "Element is present at index " << result;

    return 0;
}
