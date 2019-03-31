#include<iostream>
using namespace std;

//функция сортировки вставками для целочисленного и действительного массива
int* inputsort(int *a,int n)
{
	for(int i=1;i<n;i++) {
        for(int k=i;k>0 && a[k-1]>a[k];k--) {
			swap(a[k-1],a[k]);}}
    return a;
}

float* inputsort(float *a,int n)
{
	for(int i=1;i<n;i++) {
        for(int k=i;k>0 && a[k-1]>a[k];k--) {
			swap(a[k-1],a[k]);}}
    return a;
}
//основная программа: ввод и сортировка целого массива
//после этого ввод и сортировка целого массива
//аналогично для действительного массива
int main(){
	int razm;
    	cout<<"Enter number of int type elements: ";
    	cin>>razm;
	int* mas = new int[razm];
	for (int q=0;q<razm;q++){
            cout<<"Enter element N"<<q+1<<": ";
            cin>>mas[q];
                }
    	inputsort(mas,razm);
    	cout<<"Sorted massive: ";
    	for (int q=0;q<razm;q++){
            cout<<mas[q]<<" ";
            }
    	cout<<endl;
    	delete [] mas;
    	cout<<"Enter number of float type elements: ";
    	cin>>razm;
	float* ms = new float[razm];
	for (int q=0;q<razm;q++){
            cout<<"Enter element N"<<q+1<<": ";
            cin>>ms[q];
                }
    	inputsort(ms,razm);
    	cout<<"Sorted massive: ";
    	for (int q=0;q<razm;q++){
            cout<<ms[q]<<" ";
            }
    	cout<<endl;
    	delete [] ms;

	return 0;}
