#include <iostream>
#include <list>
#include <stdlib.h>
#include <string>

using namespace std;


/** \class Список для чисел и методы работы с ним
 */
template < typename T >

class List {
	 T * lis; 
     int N;
 public:

     List() {
		 lis = (T *)malloc(sizeof(T));
         N = 0;
	 }

     void add(T value) {
        lis[N] = value;
        N++;
        lis =(T* )realloc(lis ,sizeof(T) * N);
     }

     void printAll() {
         for(int i = 0; i < N; i++) {
             cout << lis[i] << endl;
         }
     }
};

int main() {
    int N = 0;
    char type;
	cin>>N;
    for(int i = 0; i < N; i ++) {
        cin >> type;
        if(type == 's') {
            List<string>* lis = new List<string>();
            int count = 0;
            cin >> count;
            for(int i = 0; i < count; i ++) {
                string str;
                cin >> str;
                lis->add(str);
            }
            lis->printAll();
            delete lis;
        } else if (type == 'i') {
            List<int>* lis = new List<int>();
            int count = 0;
            cin >> count;
            for(int i = 0; i < count; i ++) {
                int number;
                cin >> number;
                lis->add(number);
            }
            lis->printAll();
            delete lis;
        }

    }
    return 0;
}
