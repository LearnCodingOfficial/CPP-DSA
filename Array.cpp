

//         DECLARATION OF ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5];
//     char ch[3];
//     string str[4];
//     float f[2];
//     double arr1[8];

    

//     return 0;
// }













// -----------------------------------------------------------------------------------


//                            INITIALIZATION OF ARRAY


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {1, 2, 3, 4, 5}; 

//     int arr1[5];
//     arr1[0] = 10; 
//     arr1[1] = 20;    
//     arr1[2] = 30; 
//     arr1[3] = 40; 
//     arr1[4] = 50; 

//     return 0;
// }























// ----------------------------------------------------------------------------------------------
    //         ACCESSING ARRAY ELEMENTS

//  ARRAY ELEMENTS CAN BE ACCESSED USING INDEXING
// Here indexing starts from 0









// #include<iostream>
// using namespace std;
// int main(){

//     int arr1[5] = {11, 72, 39, 43, 58};

//     cout<< " ---------------------------------------------------------- "<<endl;
//     cout<< "        Accessing array elements using indexing:           "<<endl;
//     cout<< " ----------------------------------------------------------- "<<endl;
//     cout<< "Element at index 0: " << arr1[0] << endl;
//     cout<< "Element at index 1: " << arr1[1] << endl;
//     cout<< "Element at index 2: " << arr1[2] << endl;
//     cout<< "Element at index 3: " << arr1[3] << endl;
//     cout<< "Element at index 4: " << arr1[4] << endl;



//     return 0;
// }












// -----------------------------------------------------------------------------------

//                       HOW TO TAKE INPUT IN AN ARRAY



// #include<iostream> 
// using namespace std;

// int main(){

//     int arr[5];

//     for(int i = 0; i < 5; i++){
      
//         cin >> arr[i];
//     }

//     cout<< "Printing the array"<<endl;


//     for(int i = 0; i < 5; i++){
      
//         cout << arr[i]  << " " ;
//     }


//     return 0;
// }














// -----------------------------------------------------------------------------------
//                   How To Print Array Elements

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {1, 20, 3, 46, 5};

//     cout << "Array elements are: ";

//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }









// -----------------------------------------------------------------------------------



//                   INSERTION IN AN ARRAY




// 1. Insertion at the beginning of an array


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[6] = {1, 2, 3, 4, 5};

//     cout << "Original array: ";

//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     int newElement = 10;
//     // Shift elements to the right to make space for the new element
//     for(int i = 5; i > 0; i--){
//     arr[i] = arr[i - 1];
//     }
//     arr[0] = newElement;

//     cout << "Array after insertion at the beginning: ";
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }





// 2. Insertion at a specific position in an array

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[6] = {1, 2, 3, 4, 5}; 

   
//     cout << "Original array: ";
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     int position = 2; 
//     int newElement = 10;

//     // Shift elements to the right to make space for the new element
//     for(int i = 5; i > position; i--){
//         arr[i] = arr[i - 1];
//     }

//     arr[position] = newElement;

//     cout << "Array after insertion at position " << position << ": ";
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 3. Insertion at the end of an array

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[6] = {1, 2, 3, 4, 5}; // Array with 5 elements
 

//     cout << "Original array: ";
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     int newElement = 60; 

//     // Inserting at the end
//     arr[5] = newElement;

//     cout << "Array after insertion at the end: ";
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }









// Complete code for insertion 

// #include <iostream>
// using namespace std;

// void insertAtEnd(int arr[], int &n, int value) {

//     arr[n] = value;

//     n++;

// }

// void insertAtBeginning(int arr[], int &n, int value) {
    
//     for (int i = n; i > 0; i--) 

//     arr[i] = arr[i - 1];

//     arr[0] = value;

//     n++;

// }

// void insertAtIndex(int arr[], int &n, int index, int value) {

//     if (index < 0 || index > n) {

//         cout<< "Invalid index" << endl;
//         return;
//     }

//     for (int i = n; i > index; i--)

//     arr[i] = arr[i - 1];

//     arr[index] = value;

//     n++;

// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[100] = {10, 20, 30, 40};
//     int n = 4;

//     cout << "Original Array ";
//     printArray(arr, n);
    
//     insertAtEnd(arr, n, 50);
//     cout << "Array after insertions at End postion: ";
//     printArray(arr, n);
    
//     insertAtBeginning(arr, n, 5);
//    cout << "Array after insertions at first postion: ";
//     printArray(arr, n);
    

//     insertAtIndex(arr, n, 2, 99);

//     cout << "Array after insertions at index 2: ";
//     printArray(arr, n);

//     return 0;
// }










// -----------------------------------------------------------------------------------
//                   DELETION IN AN ARRAY

// 1. Deletion at the beginning of an array


// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5}; 
//     int n = 5;

//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

    
//     for(int i = 0; i < n - 1; i++){
//         arr[i] = arr[i + 1];
//     }

//     n--; 
//     cout << "Array after deletion at the beginning: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }








// 2. Deletion at a specific position in an array



// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5] = {19, 21, 33, 46, 52}; 
//     int n = 5; 
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     int position = 2; 
//     if(position < 0 || position >= n) {
//         cout << "Invalid position!" << endl;
//         return 0;
//     }

//     // Shift elements to the left to fill the gap
//     for(int i = position; i < n - 1; i++){
//         arr[i] = arr[i + 1];
//     }
//     n--;


//     cout << "Array after deletion at position " << position << ": ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// 3. Deletion at the end of an array



// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5}; 
//     int n = 5; 
//     cout << "Original array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

    
//     // n--; 

//     // cout << "Array after deletion at the end: ";
//     // for(int i = 0; i < n; i++){

//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     return 0;
// }





















// Complete code for deletion

// #include <iostream>
// using namespace std;

// void deleteAtEnd(int &n) {
//     if (n <= 0) {
//         cout << "Array is already empty!" << endl;
//         return;
//     }
//     n--;
// }

// void deleteAtBeginning(int arr[], int &n) {
//     if (n <= 0) {
//         cout << "Array is already empty!" << endl;
//         return;
//     }

//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--;
// }

// void deleteAtIndex(int arr[], int &n, int index) {
//     if (index < 0 || index >= n) {
//         cout << "Invalid index!" << endl;
//         return;
//     }

//     for (int i = index; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--;
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[100] = {10, 20, 30, 40, 50};
//     int n = 5;

//     cout << "Array before  deletions: ";
//     printArray(arr, n);

//     deleteAtEnd(n);

//     cout << "Array after deletions at end : ";
//     printArray(arr, n);

//     deleteAtBeginning(arr, n);
//     cout << "Array after deletions at starting: ";
//     printArray(arr, n);

//     deleteAtIndex(arr, n, 1); // delete element at index 1
     

//     cout << "Array after deletions: ";
//     printArray(arr, n);

//     return 0;
// }












// -----------------------------------------------------------------------------------

//                   SEARCHING IN AN ARRAY


// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int key = 35;
//     bool found = false;

//     for(int i = 0; i < n; i++){
//         if(arr[i] == key){
//             found = true;
//             cout << "Element " << key << " found at index : " << i << endl;
//             break;
//         }
//     }

//     if(!found){
//         cout << "Element " << key << " not found in the array." << endl;
//     }


//     return 0;
// }




#include <iostream>
using namespace std;
int main(){

    int arr[3] = { 1, 2,3};

   cout << "Original array: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[2]=68;
    
 for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;



}
