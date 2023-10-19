#include<iostream>
using namespace std;

// // rotation

// void rotate(int arr[],int d,int n){
//     int p=1;
//     while(p<=d){
//         int last = arr[0];
//         for(int i; i < n-1; i++){
//             arr[i]=arr[i+1];
//             arr[n-1]=last;
//             p++;
//         }
        
//     }
//     void printArray(int arr[],int size){
        
//     }
// }

// int main(){

// int arr[]={1,2,3,4,5,6};
// n = sizeof(arr)/sizeof(arr[0]);
// int d=2;

// rotate(arr,d,n);
// printArray(arr,n);

// return 0;
// }
//--------------------------------------------insert,delete array--------------------------------------------------
int main()
{
    int arr[100], n, i, elem, j, t,found=0;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter "<<n<<" array elements: ";
    for(i=0; i<n; i++)
    cin>>arr[i];
    cout<<"\nEnter the element to be inserted: ";
    cin>>elem;
    arr[i] = elem; 
    cout<<"\nThe new array is:\n";
    for(i=0; i<n+1; i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    cout<<"\nEnter element to delete: ";
    cin>>elem;
    for(i=0; i<n; i++)
    {
    if(arr[i]==elem)
    {
    for(j=i; j<(n-1); j++)
    arr[j] = arr[j+1];
    found=1;
    i--;
    n--;
    }
    }
    if(found==0)
    cout<<"\nElement doesn't found in the Array!";
    else
    {
    cout<<"\nElement Deleted Successfully!";
    cout<<"\n\nThe New Array is:\n";
    for(i=0; i<n; i++)
    cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(i=0,j=n-1;i<n/2;i++,j--)  
    {     
    t=arr[i];  
    arr[i]=arr[j];  
    arr[j]=t;  
    }  
    cout<<"\n The reverse of elements of the array is: " << endl;  
    for(i=0;i<n;i++)  
    {  
    cout<<arr[i]<<" ";  
    }  
    return 0;
}

// int main(){
//     int input[100], count, i, num;
       
//     cout << "Enter Number of Elements\n";
//     cin >> count;
     
//     cout << "Enter " << count << " numbers \n";
      
//     // Read array elements
//     for(i = 0; i < count; i++){
//         cin >> input[i];
//     }
      
//     cout << "Enter a number to search in Array\n";
//     cin >> num;
      
//     // search num in inputArray from index 0 to elementCount-1 
//     for(i = 0; i < count; i++){
//         if(input[i] == num){
//             cout << "Element found at index " << i;
//             break;
//         }
//     }
      
//     if(i == count){
//         cout  << "Element Not Present in Input Array\n";
//     }
 
//     return 0;
// }















