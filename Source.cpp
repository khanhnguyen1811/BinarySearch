#include <iostream> 
using namespace std; 
int binarysearch(int arr[], int l, int r, int num){
	int mid; 
	while (l < r)
	{
		mid = l + (r - l) / 2;
		if (arr[mid] == num)
		{
			return mid;
		}
		else if (arr[mid] < num)
		{
			l = mid + 1; 
		}
		else
		{
			r = mid - 1; 
		}
	}
	return -1; 
}

int main(){
	int arr[100], i, sopt; 
	cout << "nhap so phan tu mang: "; cin >> sopt; 
	cout << "nhap gia tri mang: " << "\n";
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i];
	}
	//nhap so can tim. 
	int x; 
	cout << "nhap so: "; cin >> x;
	//khai bao gt tra ve. 
	int location = binarysearch(arr, 0, sopt, x);
	if (location == -1)
	{
		cout << x << " khong thuoc mang arr" << "\n";
	}
	else
	{
		cout << x << " thuoc mang arr, co vt: " << location << "\n";
	}

	
	return 0; 
}