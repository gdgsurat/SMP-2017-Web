for(var i=0,n=prompt("give a number","");i<n;i++){
    for(var j=0;j<n;j++){
        if((i+j)%2==0)
            console.log(" ");
        else
            console.log("#");
    }
    console.log("\n");
}