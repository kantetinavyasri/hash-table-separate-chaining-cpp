 #include<iostream>
 #include<list>
 using namespace std;
 int main(){
 	const int SIZE = 10;
 	list <int> hashTable[SIZE];
	 //Insert Elements
	 int arr[4] ={25,35,15,42};
	 for (int i=0; i<4; i++){
	 	int index=arr[i]%SIZE;
	 	hashTable[index].push_back(arr[i]);
	 	}
		 //Display
		 cout<<"Hash Table after Insertion:\n";
		 for (int i=0;i<SIZE; i++){
		 	cout<<i<<"-->";
		 	for(int x:hashTable[i])
		 	cout<<x<<"->";
		 	cout<<"NULL\n";
		 }
		 //Search
		 int key=35;
		 int index=key%SIZE;
		 bool found=false;
		 for (int x:hashTable[index]){
		 	if(x==key){
		 		found=true;
		 		break;
			 }
		 }
		 if(found)
		 cout<<"\n35 Found\n";
		 else
		 cout<<"\n 35 Not Found\n";
		 //Delete
		 hashTable[index].remove(35);
		 cout<<"\n 35 Deleted\n";
		 //Dispaly after deletion
		 cout<<"\nHash Table after Deletion:\n";
		 for(int i=0; i<SIZE; i++){
		 	cout<<i<<"-->";
		 	for (int x:hashTable[i])
		 	cout<<"x"<<"->";
			 cout<<"NULL\n";
			 }
			 return 0;
		}
