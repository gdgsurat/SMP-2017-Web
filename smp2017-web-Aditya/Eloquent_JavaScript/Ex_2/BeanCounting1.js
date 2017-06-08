function countBs(s){
	var c=0;
	for(var i=0;i<s.length;i++)
	{
		if(s.charAt(i)=='B')
			c++;
	}
	return c;
};
console.log(countBs("BoBsTOb"));