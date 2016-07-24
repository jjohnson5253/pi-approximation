//Jake Johnson Summer 2016

//This program makes an approximation of Pi

#include <stdio.h>
#include <math.h>

//this function provides an approximation of pi by using a summation formula up to n values
double pi(int n){

	double sum=0;

	printf("n 		approximation\n-----------------------------\n");

	for(double k=1;k<=n;k++){

		//first part of approximation
		sum = sum + (pow((-1.0), (k-1)) / (2*k-1));

		//we want to show every n/10 iterations
		int iter = floor(n/10);

		//every 'iter' iterations, print out approximation
		if(fmod(k,iter) == 0){
			//k needs to be floored because it is a double
			printf("%d 		%e\n", (int)floor(k), 4*sum);
		}
	}

	//second part of approximation
	double ans = 4*sum;

	//return answer
	return ans;
}

int main(int argc, char ** arv){
	
	int n = 300;

	double approx = pi(n);

	return 0;
}
