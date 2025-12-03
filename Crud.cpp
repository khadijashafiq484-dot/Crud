#include<iostream>
using namespace std;
int i=0;
void add(int a[])
{
	cout<<"Enter the number you want to add"<<endl;
    cin>>a[i];
    i++;
    cout<<"Added successfully:"<<endl;
} 
void exit (int a[])
{

}
void search (int a[])
{
	int n;
    cout<<"Enter the number you want to search"<<endl;
    cin>>n;
    for(int j=0; j<i; j++){
    	if(n==a[j]){
    		cout<<"Your search value is:"<<a[j]<<endl;
		}
	}
}
void update(int a[]){
	int oldValue, newValue;
    cout<<"Enter the number you want to update"<<endl;
    cin>>oldValue;
     for(int j=0; j<i; j++){
    	if(a[j]==oldValue){
    		cout<<"Your New value is:"<<endl;
    		cin>>newValue;
    		a[j]=newValue;
    		cout<<"Your updated value is:"<<a[j]<<endl;
		}
	}
}
void del(int a[]){
	int n;
    cout<<"Enter the number you want to delete"<<endl;
    cin>>n;
     for(int j=0; j<i; j++){
     	if(n==a[j]){
     		for (int k =j ; k<i ; k++){
     			a[k]=a[k+1];
			 }
		 
     	
	 }i--;
	 break;}
}
	 void show(int a[]){
	 	
     for(int j=0; j<i; j++){
     	cout<<"\n"<<a[j]<<endl;
	 }
     }

int  main()
{
	cout<<"Press 1 to add:"<<endl;
	cout<<"Press 2 to search:"<<endl;
	cout<<"Press 3 to delete:"<<endl;
	cout<<"Press 4 to update:"<<endl;
	cout<<"Press 5 to show:"<<endl;
	cout<<"Press 6 to exit:"<<endl;
	 
	p:
	int choice;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	int a[20];
	
	switch (choice)
	{
		case 1:
			add(a);
			break;
			case 2:
				search(a);
				break;
				case 3:
					del(a);
					break;
					case 4:
						update(a);
						break;
						case 5:
							show(a);
							break;
							case 6:
								exit(0);
								break;
								default:
								cout<<"Invalid value.Try again!"<<endl;
	
	}
	goto p;
}
