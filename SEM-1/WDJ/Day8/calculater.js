let calculater = document.querySelector("#calculater");

let firstValue = document.createElement("input");
firstValue.setAttribute("id", "value1");
firstValue.style.width = "300px";
firstValue.style.minHeight = "30px";
firstValue.style.padding = "10px";
firstValue.style.margin = "10px";
firstValue.style.border = "none";
firstValue.style.backgroundColor = "skyblue";
firstValue.style.textAlign = "right";
firstValue.style.fontSize = "20px";

calculater.append(firstValue);

let newLine = document.createElement("br");
calculater.append(newLine);


let secondValue = document.createElement("input");
secondValue.setAttribute("id", "value2");
secondValue.style.width = "300px";
secondValue.style.minHeight = "30px";
secondValue.style.padding = "10px";
secondValue.style.margin = "10px";
secondValue.style.border = "none";
secondValue.style.backgroundColor = "skyblue";
secondValue.style.textAlign = "right";
secondValue.style.fontSize = "20px";

calculater.append(secondValue);

let buttonList = document.createElement("div");
buttonList.setAttribute("id", "btn-list");

// craete btns
//add btn
let greterNoaddBtn = document.createElement("button");
addBtn.setAttribute("id", "plus");
addBtn.setAttribute("onclick", "add()");
addBtn.innerText = "+";

addBtn.style.padding= "10px";
addBtn.style.border = "none";
addBtn.style.margin = "10px";
addBtn.style.fontSize= "20px";
addBtn.style.width= "40px";

buttonList.append(addBtn);

//mul btn
let mulBtn = document.createElement("button");
mulBtn.setAttribute("id", "multiplication");
mulBtn.setAttribute("onclick", "multiplication()");
mulBtn.innerText = "*";

mulBtn.style.padding= "10px";
mulBtn.style.border = "none";
mulBtn.style.margin = "10px";
mulBtn.style.fontSize= "20px";
mulBtn.style.width= "40px";

buttonList.append(mulBtn);

//subtraction btn
let subBtn = document.createElement("button");
subBtn.setAttribute("id", "subtraction");
subBtn.setAttribute("onclick", "subtraction()");
subBtn.innerText = "-";

subBtn.style.padding= "10px";
subBtn.style.border = "none";
subBtn.style.margin = "10px";
subBtn.style.fontSize= "20px";
subBtn.style.width= "40px";

buttonList.append(subBtn);

//division btn
let divBtn = document.createElement("button");
divBtn.setAttribute("id", "division");
divBtn.setAttribute("onclick", "division()");
divBtn.innerText = "/";

divBtn.style.padding= "10px";
divBtn.style.border = "none";
divBtn.style.margin = "10px";
divBtn.style.fontSize= "20px";
divBtn.style.width= "40px";

buttonList.append(divBtn);


calculater.append(buttonList);

//output display
let outputDisplay = document.createElement("div");
outputDisplay.setAttribute("id", "display");
outputDisplay.style.width = "300px";
outputDisplay.style.minHeight = "30px";
outputDisplay.style.padding = "10px";
outputDisplay.style.margin = "10px";
outputDisplay.style.border = "none";
outputDisplay.style.backgroundColor = "pink";
outputDisplay.style.textAlign = "right";
outputDisplay.style.fontSize = "20px";

calculater.append(outputDisplay);

console.log(addBtn);

function add(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    display.innerText = val1+val2;
}

function multiplication(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    display.innerText = val1*val2;
}

function division(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    display.innerText = val1/val2;
}

function subtraction(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    display.innerText = val1-val2;
}