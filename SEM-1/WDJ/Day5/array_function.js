let mark= [78, 56,85,65,93,54];

//filter
//print marks about 80
let output = mark.filter((e)=>{
    return e>80;
})
//use to filter data from existing data
console.log(output);



//map
let map_output = mark.map((i)=>{
    return i*i;
})
//use to perform operation on existing data(mathematice operation)
console.log(map_output);

//reduce total
let reduce_total = mark.reduce((acc, i)=>{
    return acc+i;
});
//use to convert array in single value
console.log(reduce_total);

// practice question
// company decide to give 10% increment print updated salary 

let salary = [20000, 35000, 45000, 40000, 53000];

let updated_salary = salary.map((i)=>{
    let addition = i/10;
    return i+addition;
})

console.log(updated_salary);


// print cgpa above 7.2
cgpa = [7.8, 8.3,5.3, 7.5, 8.7];

let clever_student = cgpa.filter((e)=>{
    return e>7.2;
})
console.log(clever_student);


// print only even age 
age = [65, 54, 76,32,25];

let even_age = age.filter((e)=>{
    return e%2==0;
})
console.log(even_age);


// find avg of 6 month
km_per_month = [89,54,76,87,24,54];

let total = km_per_month.reduce((acc, i,index)=>{
    if(index== km_per_month.length-1){
        return (acc+i)/6;
    }
    return (acc+i);
});

console.log(total);
