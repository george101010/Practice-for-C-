#include<iostream>

using namespace std;
//функция сортировки пузырьком для целочисленного массива
int* bublesort(int *a,int n)
{
    int c;
   for (int i=0;i<n-1;i++){
        for (int k=0;k<n-i;k++){
            if (a[k]>a[k+1]){
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;}
    }}

    return a;
}
//функция сортировки пузырьком для  вещественного массива
float* bublesort(float *a,int n)
{
    float c;
   for (int i=0;i<n-1;i++){
        for (int k=0;k<n-i;k++){
            if (a[k]>a[k+1]){
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;}
    }}

    return a;
}
//основная программа: ввод и сортировка целого массива
//после этого ввод и сортировка целого массива
int main(){
    int razm;
    cout<<"Enter number of int type elements: ";
    cin>>razm;
	int* mas = new int[razm];
	for (int q=0;q<razm;q++){
            cout<<"Enter element N"<<q+1<<": ";
            cin>>mas[q];
                }
    bublesort(mas,razm);
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
    bublesort(ms,razm);
    cout<<"Sorted massive: ";
    for (int q=0;q<razm;q++){
            cout<<ms[q]<<" ";
            }
    delete [] ms;
	return 0;}
