#include<iostream>
using namespace std;
//функция сортирует массив по возрастанию
//работает для массивов типа int и float
int* choosesort(int *a,int n){
    int mn,N;
    for (int i=0;i<n-1;i++){
        mn=a[i];
        N=i;
        for (int k=i+1;k<n;k++){
            if (mn>a[k]){
                mn=a[k];
                N=k;
            }
        }
        swap(a[i],a[N]);
        }
        return a;
    }

float* choosesort(float *a,int n){
    int mn,N;

    for (int i=0;i<n-1;i++){
        mn=a[i];
        N=i;
        for (int k=i+1;k<n;k++){
            if (mn>a[k]){
                mn=a[k];
                N=k;
            }
        }
        swap(a[i],a[N]);
        }
        return a;
    }
//основная программа создает массив вводит и сортирует оба типа
int main(){
   int razm;
    cout<<"Enter number of int type elements: ";
    cin>>razm;
	  int* mas = new int[razm];
	  for (int q=0;q<razm;q++){
            cout<<"Enter element N"<<q+1<<": ";
            cin>>mas[q];
                }
    choosesort(mas,razm);
    cout<<"Sorted massive: ";
    for (int q=0;q<razm;q++){
            cout<<mas[q]<<" ";
            }

    delete [] mas;
    cout<<"\nEnter number of float type elements: ";
    cin>>razm;
    float* ms = new float[razm];
    for (int q=0;q<razm;q++){
            cout<<"Enter element N"<<q+1<<": ";
            cin>>ms[q];
                }
    choosesort(ms,razm);
    cout<<"Sorted massive: ";
    for (int q=0;q<razm;q++){
            cout<<ms[q]<<" ";
            }
    cin;
    delete [] ms;
	return 0;}
