function getData(dataid, getNextData) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("data", dataid);
      resolve("success");
      if (getNextData) {
        getNextData();
      }
    }, 5000);
  });
}

let promise1 = getData(1);
console.log(promise1);

let promise2 = new Promise((resolve, reject) => {
  console.log("its a promise from api");
//   resolve("Promise resolved");
  reject("ERROR OCCURED");
});

promise2
  .then((res) => {
    console.log("fullfilled", res);
  })
  .catch((err) => {
    console.log("rejected", err);
  });

  function asyncfunction(){
    return new Promise((resolve, reject) => {
        setTimeout(()=>{
            console.log("data 1");
            resolve("success");
        }, 5000)
    });
  }

  console.log("fetching data");
  let p1 = asyncfunction();
  p1.then((res)=>{
    console.log(res);
  })
  
//callback hall, promise with then catch