function countChar(s,char){
	var c=0;
	for(var i=0;i<s.length;i++)
	{
		if(s.charAt(i)==char)
			c++;
	}
	return c;
};
function countBs(s){
	return countChar(s,'B');
};
console.log(countBs("BoBsTOb"));