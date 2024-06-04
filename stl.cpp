

//#include<bits/stdc++.h>
//using namespace std;

//void explainPair()
//{
//*********pairing any variables********
  
 //pair<int, int> p = {1, 2};
 // cout<< p.first <<" " << p.second;

  // ****nested property of pairs****
  
// if there are pair of suppose 3 numbers then the first number will be pairing with the 2nd pairs
  
pair<int, pair<int, int>> q = {1, {3,4}};

cout << q.first << " " << q.second.first << " " << q.second.second;
  


//********pairing array*****

pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

cout << arr[1].second;
}






//**********VECTORS********

// A dynamic container where we can change value whenever needed

void explainvector()
{
 vector<int> v;  // creates an empty container

  v.push_back(1);     // 1 goes to the empty container
  v.emplace_back(2);    // 2 goes to the container

  //********vector of a pair

  vector<pair<int, int>> vec;

  vec.push_back({1,2});    // input array values
  vec.emplace_back(1,2);    // it will understand automatically

  vector<int> v(5, 100); // {100,100,100,100,100}

  vector<int> v(5); // {_, _, _, _, _} 0 or any garbage value

  vector<int> v1(5, 20); // {20,20,20,20,20}

  vector<int> v2(v1); // {20,20,20,20,20}

  vector<int> vect(5); // arr of 5

  vect.pushback(1); // arr of 6
  

  //********ITERATOR*****

  vector<int> :: iterator it = v.begin;   // syntax, v.begin points the memory

  // {20, 10, 15, 6, 7,}

  it++;
  cout << *(it) << endl; // * indicates the value of that memory. therefore 10

  it + 2;
  cout << *(it) << endl; // therefore 6


  //*******other iterators

  vector<int> :: iterator it = v.end();   // point after the last element suppose {1,2,3,4,5} then after 5 and if --it is used then 5 will be the output
  

cout << v.back() << endl;    // v.back() = {10, 20, 30} element of the last vector of 30





//*******for printing
  
 // 1st type
  for (vector<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
    cout<< *(it) << endl;
    }


  // 2nd type

  for (auto it = v.begin(); it != v.end(); it++)
    {
    cout<< *(it) << endl;
    }

// auto is the shortcut of "vector<int> :: iterator it" auto also automatically assigns the data type


  // 3rd type

  for(auto it : v) // auto will automatically do the task print and assigning
    {
    cout<< it << endl;
    }

  


//**********Erase


  //vector is {10, 20, 12, 23}

  v.erase(v.begin() + 1);   // it will erase 20 and get reshuffeled therefore {10, 12, 23}

  
  //***** deleating elements
  // {10, 20, 30, 40, 50} here we need to delete 2 elements 20 and 30 so in .erase() we need to give the staring point of deletion and the end point to start ".begin(start, end)"

  v.erase(v.begin() + 1, v.begin() + 3);    // {10, 40, 50}

    
 
  //*******inserting functions

  // it means we can insert any vector anytime

  vector<int> v(2, 100);   // {100, 100}
  
  v.insert(v.begin(), 300);   // {300, 100, 100}  begin initialises the position and the next what to print

  
  v.insert(v.begin()+1, 2, 5);  // it means after 300, two 5 will print {300, 5, 5, 100, 100}





  
  v(10, 100);
  cout << v.size(); // 2  initializes the size





  //pop_back
  //{10, 20}

  v.pop_back(); // 10  pop back the next vectors







  v1(10, 20);
  v2(30, 40);

  v1.swap(v2) /* swap the elements   v1(30, 40);
                                     v2(10, 20);  */


v.erase(); // clear the full vector

  cout << v.empty();   // checks empty or not
  

  







  //********************  LIST  ******************


void explainlist();

list<int> ls;
  
  ls.push_back(2);  // {2}

  ls.emplace_back(4);  // {2, 4}

  ls.push_front(5);  // {5, 2, 4}

  ls.emplace_front();  // {2, 4}
  

// OTHERS ARE SAME AS VECTORS
  //begin, end, rbegin, rend, clear, swap, insert, size






  //*************  DEQUE  **************

  
  void explaindeque();

  deque<int> dq;

    dq.push_back(2);  // {2}

    dq.emplace_back(4);  // {2, 4}

  dq.push_front(5);  // {5, 2, 4}

    dq.emplace_front(6);  // {6, 5, 2, 4}

  dq.pop_back(); // {6, 5, 2}

  dq.pop_front(); // {5, 2}


  // OTHERS ARE SAME AS VECTORS
  //begin, end, rbegin, rend, clear, swap, insert, size










  //*******************  STACK  *****************

  // it follows LIFO that means **Last in First out**
  
void explainstack();
  
  stack<int> st;

  st.push(1); //                container filled with 1
  st.push(2);//                  then 2
  st.push(3);//                    3
  st.push(3);//                    3
  st.emplace(5); //                5


  cout << st.top(); //            by LIFO  5 will print

  st.pop();            //     by LIFO  5 will print and{3,3,2,1}

  cout << st.top();  //         now 3 will print

  cout << st.size(); //             size will be 4




  //swaping

  stack<int> s1, s2;

  s1.swap(s2); //               it will get swapped



  // JUST USES push()  pop()   top()






  //******************  QUEUE  *****************

  // It follows FIFO First In First Out 


  void explainQueue();

  queue<int> q; //                    syntax

  q.push(1); //                 1 is inserted in a container
  
  q.push(2); //                 2 
  
  q.emplace(4); //              4
   
q.back() += 5; //               back means 4 and 5 will add to it hence 9

  cout << q.back(); //          9


  
  // Q  = {1, 2, 9}

  cout << q.front(); //         1

  q.pop();           //         according to FIFO 1 will get out {2, 9}

  cout << q.front(); //         2


  // OTHERS SAME AS STACK









  //****************** PROIRITY QUEUE ********************

  // here the priority element will be at the top


  //    Max heap

  priority_queue<int> pq; //                        syntax

  pq.push(5);   //                                  {5}
  pq.push(2);   //                                  {5, 2}
  pq.push(8);     //                                {8, 5, 2}
  pq.emplace(10);   //                              {10, 8, 5, 2}

// going in the container in  PRIORITY wise

  

cout << pq.top(); //                                10

  pq.pop();  //        10 will pop out as its on top so {8, 5, 2}

  cout << pq.top();   //                             8




// Min Heap

// basically to reverese the function

  priority_queue<int, vector<int>, greater<int>> pq; // syntax

  pq.push(5);  //                               {5}
  pq.push(2); //                                {2, 5}
  pq.push(8);//                                 {2, 5, 8}
  pq.push(10); //                               {2, 5, 8, 10}

  cout<< pq.top(); //                            2












  //***************** SETS *****************

  // it should be unique and sorted 

  set<int> se; //                             syntax

  se.insert(1); //                               {1}
  se.insert(2);  //                              {1, 2}
  se.emplace(2);  //                             {1, 2} unique
  se.insert(4); //                               {1, 2, 4}
  se.insert(3); //                               {1, 2, 3, 4} sorted

  // insert should be used


  //{1, 2, 3, 4, 5}

  auto.it = se.find(3);  // it will find the 3 and will return the iterator which points the 3

  auto.it = se.find(6); // not present so will return "se.end();"


lower_bound(); // explanation on my copy
upper_bound();  // explanation on my copy




  

  
  

  
  



int main()
{
  cout<<("hello dsa");

  return 0;
}




*/
