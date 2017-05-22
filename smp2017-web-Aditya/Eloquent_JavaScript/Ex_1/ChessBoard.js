var size=8;
for(var i=0;i<size;i++)
{
	if(i%2==0)
	{
		for(var j=0;j<size/2;j++)
			console.log(" #");
	}
	else
	{
		for(var j=0;j<size/2;j++)
			console.log("# ");
	}
	console.log('\n');
}