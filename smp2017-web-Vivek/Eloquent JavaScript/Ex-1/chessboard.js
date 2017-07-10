for (var i = 0; i <8; i++) {
	for (var j = 0; j < 8; j++) {
		if ((i+j)%2==0) {
			ans+=" ";
		}
		else{
			ans+="#";
		}
		ans+="\n";
	}
}
console.log(ans);
