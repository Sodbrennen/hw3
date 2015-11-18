#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void fill(double* p, const int N){

	double r;
	
	for(int i=0; i<N; i++){
		r = rand() / double(RAND_MAX);	
		p[i] = r;
		
	}
}


void calculate(double* p,double* mv, const int N){
	

	for(int i=0;i<N;i++){
		mv[0] = mv[0] + p[i];
		
	}
	
	mv[0] = mv[0]/N;
	
	for(int i=0;i<N;i++){
		mv[1] = mv[1] + (p[i] - mv[0])*(p[i] - mv[0]);
	}
	
	mv[1] = mv[1]/N;
	
}




int main(){
   const int N = 100;
   double p[N];
   double mean, var;

  fill(p,N);

  double mv[2]; // array to store m and v
  calculate(p,mv,N);


  
  
   // Some lines here....

   cout << "Mean = " << mv[0] << endl;
   cout << "Variance = " << mv[1] << endl;

   return 0;
}
