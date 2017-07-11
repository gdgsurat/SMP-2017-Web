function isEven(n){
	n=n-2;
	if(n==0)
		return true;
	else if(n==1)
		return false;
	else if(n<0)
		return isEven(-n);
	else
		return isEven(n);
};
console.log(isEven(50)+'\n'+isEven(75)+'\n'+isEven(-1));