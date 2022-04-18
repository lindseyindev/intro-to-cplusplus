// VARIABLE FORMAT
// typename variable_name {initializer_value}; brace initializiation can also use assignment initialization or functional initialization

#include <iostream>


//fractional numbers aka floating types 3 types with different mem size: float 4 bytes typically, double 8 bytes, long double 12 bytes typically

int main(){




}
















// int main()
// {
//     // may contain garbage numbers
//    /* int elephant_count;
//     int lion_count{};
//     int dog_count{10};
//     int cat_count{15};
//     int domesticated_animals{dog_count + cat_count}; // using expression as initializer*/

//     // FUNCTIONAL INITIALIZATION

//    /* int apple_count(5);
//     int orange_count(10);
//     int fruit_count(apple_count + orange_count);*/
//     // information lost, less safe than braced initializer
//    // int narrowing_conversion_function(2.9);

//     // NEGATIVE AND POSITIVE INTEGERS AND SIZES
//     signed int value1{10};
//     signed int value2{-300};
//      int value3{-10}; //can use 'signed' modifier or not -- same result

//     unsigned int value4{4}; //unsigned = positive only cant use negative with unsigned modifier - compiler err

//     std::cout << "value1 : " << value1 << std::endl;
//     std::cout << "value2  : " << value2 << std::endl;
//     std::cout << "value3  : " << value3 << std::endl;
//     std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
//     std::cout << "sizeof(value2)  : " << sizeof(value2) << std::endl;
//     std::cout << "sizeof(value3)  : " << sizeof(value3) << std::endl;
// //all are 4 bytes
//     return 0;
// }

// int main()
// {
//     // short and long variables

//     short short_var{-32768};                    // 2 bytes
//     short int short_int{455};                   // 2 bytes
//     signed short signed_short{122};             // 2 bytes
//     signed short int signed_short_int{-455};    // 2 bytes
//     unsigned short int unsigned_short_int{456}; // 2 bytes

//     std::cout << "Short Variable : " << short_var << ", size : " << sizeof(short) << " bytes" << std::endl;
//     std::cout << "Short Int : " << short_int << ", size : " << sizeof(short int) << " bytes" << std::endl;

//     std::cout << "Signed Short : " << signed_short << ", size : " << sizeof(signed short) << " bytes" << std::endl;
//     std::cout << "Signed short int : " << signed_short_int << ", size : " << sizeof(signed short int) << " bytes" << std::endl;
//     std::cout << "unsigned short int  : " << unsigned_short_int << ", size : " << sizeof(unsigned short int) << " bytes" << std::endl;
// }


// int main(){

    
//     short short_var{-32768};                    // 2 bytes
//     short int short_int{455};                   // 2 bytes
//     signed short signed_short{122};             // 2 bytes
//     signed short int signed_short_int{-455};    // 2 bytes
//     unsigned short int unsigned_short_int{456}; // 2 bytes

//     std::cout << "Short Variable : " << short_var << ", size : " << sizeof(short) << " bytes" << std::endl;
//     std::cout << "Short Int : " << short_int << ", size : " << sizeof(short int) << " bytes" << std::endl;

//     std::cout << "Signed Short : " << signed_short << ", size : " << sizeof(signed short) << " bytes" << std::endl;
//     std::cout << "Signed short int : " << signed_short_int << ", size : " << sizeof(signed short int) << " bytes" << std::endl;
//     std::cout << "unsigned short int  : " << unsigned_short_int << ", size : " << sizeof(unsigned short int) << " bytes" << std::endl;




// }









#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
onsider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

int main() {

    int r, q, c;
    
    cin >> r >> q;
    int *arr[r];
    
    
    for(int i = 0; i < r; i++){
        cin >> c;
        arr[i] = new int[c];
        
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
            
        }
    }
    
    
    for(int i = 0; i < q; i++){
        int val, val2;
        cin >> val >> val2;  
        cout << arr[val][val2] << endl;
    }
    
    



    return 0;
}