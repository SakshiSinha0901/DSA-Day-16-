// CONTAINERS

// 2. LINKED LIST

// A. push_back()  &  push_front() & pop_back() & pop_front()

#include <iostream>
#include <list>  // header file
using namespace std;
int main(){
    //creation of list
    list<int>myList;
    // insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10, 20
    myList.push_back(30);
    // 10,20,30
    myList.push_front(100);
    // 100,10,20,30
    myList.push_front(200);
    // 200,100,10,20,30
    myList.pop_front();
    // 100,10,20,30
    myList.pop_back();
    // 100,10,20
}

// B. size()
#include <iostream>
#include <list>  // header file
using namespace std;
int main(){
    //creation of list
    list<int>myList;
    // insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10, 20
    myList.push_back(30);
    // 10,20,30
    myList.push_front(100);
    // 100,10,20,30
    myList.push_front(200);
    // 200,100,10,20,30
    myList.pop_front();
    // 100,10,20,30
    myList.pop_back();
    // 100,10,20
    cout<<myList.size()<<endl;  //size()
}

// C. clear()
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    //creation of list
    list<int>myList;
    // insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10, 20
    myList.push_back(30);
    // 10,20,30
    myList.push_front(100);
    // 100,10,20,30
    myList.push_front(200);
    // 200,100,10,20,30
    myList.pop_front();
    // 100,10,20,30
    myList.pop_back();
    // 100,10,20

    myList.clear(); //clear()
    cout<<myList.size()<<endl;
}

// D. empty()
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    //creation of list
    list<int>myList;
    // insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10, 20
    myList.push_back(30);
    // 10,20,30
    myList.push_front(100);
    // 100,10,20,30
    myList.push_front(200);
    // 200,100,10,20,30
    myList.pop_front();
    // 100,10,20,30
    myList.pop_back();
    // 100,10,20

    myList.clear(); //clear()
    cout<<myList.size()<<endl;

    if(myList.empty() == true){  //empty()
        cout<<"List is empty."<<endl;
    }
    else{
        cout<<"List is not empty."<<endl;
    }
}

// E. front()  &   back()
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    //creation of list
    list<int>myList;
    // insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10, 20
    myList.push_back(30);
    // 10,20,30
    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;
}   

// F. begin()  &  end()
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    list<int>List;
    List.push_back(10);
    List.push_back(20);
    List.push_back(30);
    // 10, 20, 30
    list<int>:: iterator it = List.begin(); //creating iterator

    while(it != List.end()){
        cout<<*it<<"  ";
        it++;
    }
    return 0;

}