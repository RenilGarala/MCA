// function createclounter(){
//     //count is a private variable within the closure
//     let count = 0;

//     return function(){
//         count++;
//         return count;
//     };
// }; 

// const counter1 = createclounter();
// console.log(counter1());
// console.log(counter1());

// const counter2 = createclounter();
// console.log(counter2());


function add(){
    let a = 10;
    let b = 20;

    return function(){
        return a+b;
    };
}

let c = add();

console.log(c());

