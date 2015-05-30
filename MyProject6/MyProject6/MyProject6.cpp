#include <iostream>
#include <list>
#include <stdlib.h>
#include <string>

using namespace std;


/** \class Список для чисел и методы работы с ним
 */
template < typename T >

class List {
	 List* pNext; 
     T N;
 public:

     List(T value) {
		 N = value;
	}

     void add(List *p, List *&pF) {
		 p->pNext = pF;
		 pF = p;
     }

     void printAll(List *pF) {
		 List *p = pF;
		 while (p != NULL) {
			 cout << p->N << endl;
			 p = p->pNext;
         }
     }
};

/** \главная функция
 */
int main() {
    int N = 0;
    char type;
	cin>>N;
    for(int i = 0; i < N; i ++) {
        cin >> type;
        if(type == 's') {
			List<string>* pF = NULL;
            int count = 0;
            cin >> count;
            for(int i = 0; i < count; i++) {
				string str="";
				cin >> str;
				List<string>* l = new List<string>(str);
                pF->add(l, pF);
            }
            pF->printAll(pF);
		} else if (type == 'i') {
            List<int>* pF = NULL;
            int count = 0;
            cin >> count;
            for(int i = 0; i < count; i++) {
                int number;
                cin >> number;
				List<int>* l = new List<int>(number);
                pF->add(l, pF);
            }
			pF->printAll(pF);
		}
		
    }
	system("pause");
    return 0;
}
