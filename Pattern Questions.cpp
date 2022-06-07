#include <iostream>
using namespace std;
int main()
{   	// Patern Question 1
/* *****
   *****
   ***** */
   
 /* int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cout << "*";
    }
    cout << endl;
  } */
  
  /* pattern 2
  
  *****
  *   *
  *   *
  ***** */
  
/*  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (i==1 || i==n || j==1 || j==m){
      	cout<<"*";
	  }
	  else{
	  	cout<<" ";
	  }
    }
    cout<<endl;
} */

/* pattern 3
  
  *****
  ****
  ***
  **
  *   */
  
 /* int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
    	cout<<"*";
    }
    cout<<endl;
  } */
  
  /* pattern 4
  
      *
     **
    ***
   ****
  *****   */
  
 /* int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
    	if (j<=n-i){
    		cout<<" ";
		}
		else{
			cout<<"*";
		}
    }
    cout<<endl;
  }
  */
/* pattern 5
      
      1
	  22
	  333
	  4444
	  55555   */
	  
/*	  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    { 
    cout<<i;
}
cout<<endl;
}
*/	
/* pattern 5 
      1 
	  2 3
	  4 5 6
	  7 8 9 10
	  11 12 13 14 15   */
/*  int n;
    cin >> n;
  
  int count = 1;
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
	cout<<count<<" ";
	count++; 
	  }
	  cout<<endl;
}
*/

/* pattern 7 
      *      *
	  **    **
	  ***  ***
	  ********
	  ***  ***
	  **    **
	  *      *   */
/*	  
int n;
cin >> n;
  
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
    	cout<<"*";
    }
    int spaces = 2*n-2*i;
    	for(int j=1; j<=spaces; j++){
    		cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
    cout<<endl;
}

for (int i = n; i>=1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
    	cout<<"*";
    }
    int spaces = 2*n-2*i;
    	for(int j=1; j<=spaces; j++){
    		cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
    cout<<endl;
}

  return 0;
} */

/*pattern 8

    1
   212
  32123
 4321234
543212345 */

/* int n;
cin>>n;

for (int i=1; i<=n; i++){
	for (int j=1; j<=n-i; j++){
		cout<<"   ";
	}
	for (int j=i; j>=1; j--){
		cout<<j<<"  ";
	}
for(int j=2; j<=i; j++){
	cout<<j<<"  ";
}
	 
cout<<endl;
} */

/* pattern 9

    *
   ***
  *****
  *****
   ***
    *    */
    
/* int n;
cin>>n;

for (int i=1; i<=n; i++){
	for (int j=1; j<=n-i; j++){
		cout<<"  ";
	}
	for(int j=i; j>=1; j--){
		cout<<"* ";
	}
	for(int j=2; j<=i; j++){
		cout<<"* ";
	}
	cout<<endl;
}

for (int i=n; i>=1; i--){
	for (int j=1; j<=n-i; j++){
		cout<<"  ";
	}
	for(int j=i; j>=1; j--){
		cout<<"* ";
	}
	for(int j=2; j<=i; j++){
		cout<<"* ";
	}
	cout<<endl;
}
   */
   
   /*  pattern 10
   
   
    
return 0;
}
