function getData(dataid, getNextData){
    setTimeout(()=>{
        console.log(dataid);
        if(getNextData){
            getNextData();
        }
    }, 2000);
}

getData(1, ()=>{
    console.log("data 2");
    getData(2, ()=>{
        console.log("data 3");
        getData(3, ()=>{
            console.log("data 4");
            getData(4);
        })
    })
})