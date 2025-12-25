//object creation and representation in key value form
let student = {
  id: 1,
  name: "renil",
  course: "MCA",
  sem: 1,
  CGPA: 8.2,
};

//display object
console.log(student);

//display only values
for (i in student) {
  console.log(student[i]); //print value
}

//display only keys
for (i in student) {
  console.log(i); // print keys
}

//create a object of employee id name branch designation exp salary
let employee = {
  id: 101,
  name: "harsh",
  branch: "technologies",
  designation: "tester",
  exp: 7,
  salary: 10000,
};

// print value of employee
for (key in employee) {
  console.log(employee[key]);
}



// print only even key
let count = 0;
for (key in employee) {
  count++;
  if (count % 2 == 0) {
    console.log(key);
  }
}

// print whole object
console.log(employee);
