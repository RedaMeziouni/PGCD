// // Plus grand commun diviseur de 2 nums avec Brute force 
// #include<iostream>
// using namespace std;
// int find_fac(int num1,int num2)
// {
//   int ans=1; 
//   int num=0; 
//   if(num1>num2) 
//     num=num2; 
//   else 
//     num=num1; 
//   for(int i=num;i>0;i--) 
//   { 
//     if(num1%i==0 && num2%i==0) 
//       {ans=i;break;} 
//   } 
//   return ans;
// }
// int main()
// {
//   int gcd=find_fac(12,28);
//   cout<<gcd;
// }

// ################################################################ //

// // Plus grand commun diviseur de 2 nums avec method euclidienne
// #include<iostream>
// using namespace std;
// int find_fac(int num1,int num2)
// {
//   if(num2==0)
//       return num1;
//   if(num1>num2)
//       return find_fac(num1%num2,num2);
//   else
//       return find_fac(num2,num1);
// }
// int main()
// {
//   int gcd=find_fac(12,24);
//   cout<<gcd;
