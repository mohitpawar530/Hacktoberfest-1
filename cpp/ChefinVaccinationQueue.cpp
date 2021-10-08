// Chef in Vaccination Queue Problem Code: VACCINQSolvedSubmit (Practice)
// There are N people in the vaccination queue, Chef is standing on the Pth position from the front of the queue. It takes X minutes to vaccinate a child and Y minutes to vaccinate an elderly person. Assume Chef is an elderly person.

// You are given a binary array A1,A2,…,AN of length N, where Ai=1 denotes there is an elderly person standing on the ith position of the queue, Ai=0 denotes there is a child standing on the ith position of the queue. You are also given the three integers P,X,Y. Find the number of minutes after which Chef's vaccination will be completed.

// Input Format
// First line will contain T, number of testcases. Then the testcases follow.
// The first line of each test case contains four space-separated integers N,P,X,Y.
// The second line of each test case contains N space-separated integer A1,A2,…,AN.
// Output Format
// For each testcase, output in a single line the number of minutes after which Chef's vaccination will be completed.

// Constraints
// 1≤T≤100
// 1≤N≤100
// 1≤P≤N
// 1≤X,Y≤10
// 0≤Ai≤1
// AP=1
// Sample Input 1 
// 3
// 4 2 3 2
// 0 1 0 1
// 3 1 2 3
// 1 0 1
// 3 3 2 2
// 1 1 1
  
//   Sample Output 1 
// 5
// 3
// 6

#include<iostream>
using namespace std;
int main()
{
int test;
cin>>test;
for (int i = 0; i < test; i++)
{
    int n,p,x,y,time=0;
    cin>>n>>p>>x>>y;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        if (arr[i]==0)
        {
            time+=x;
        }
        else{
            time+=y;
        }
    }
    cout<<time<<endl;
     
}
 
return 0;
}
