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

// G. remove(const T & value)
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    list<int>List;
    List.push_back(10);
    List.push_back(20);
    List.push_back(30);
    // 10, 20, 30
    List.push_back(10);
    // 10,20,30,10
    List.remove(10);  //remove()
    cout<<"After removing"<<endl;
    list<int>:: iterator it = List.begin(); //creating iterator

    while(it != List.end()){
        cout<<*it<<"  ";
        it++;
    }
    return 0;
}    

// H. swap(list & x )
#include <iostream>
#include <list>  // header file
using namespace std;

int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // 10, 20, 30

    list<int>second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    // 100, 200, 300

    first.swap(second);

    list<int>::iterator it2 = first.begin();
    while (it2 != first.end()){
        cout<<*it2<<"  ";
        it2++;
    }
}    

// I. insert(iterator position, const T & value)
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // 10, 20, 30

    first.insert(first.begin(),100);  //insert()

    list<int>::iterator it2 = first.begin();
    while (it2 != first.end()){
        cout<<*it2<<"  ";
        it2++;
    }
}

// J. erase(iterator position) & erase(iterator first, iterator last)
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // 10, 20, 30
    cout<<"Before erasing:"<<endl;
    cout<<first.size()<<endl;

    first.erase(first.begin(),first.end());  // erase()

    cout<<"After erasing:"<<endl;
    cout<<first.size()<<endl;
}
