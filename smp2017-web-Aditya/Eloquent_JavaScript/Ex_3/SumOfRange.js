function range(a,b){var s=[];
	if(arguments[2]==null)
		arguments[2]=1;
	if(arguments[2]<0)
	{
		arguments[2]=-arguments[2];
		var c=a;a=b;b=c;
	}
	for(var i=a;i<=b;i=i+arguments[2])
		s.push(i);
	return s;
};
function sum(s){
	var add=0;
	for (var i=0;i<s.length;i++)
		add+=s[i];
	return add;
};
console.log(sum(range(1,10)));
console.log(sum(range(2,10,2)));
console.log(sum(range(5,2,-1)));