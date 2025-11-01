//body
let body = document.querySelector("body");

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

body.append(firstValue);

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

body.append(secondValue);

let buttonList = document.createElement("div");
buttonList.setAttribute("id", "btn-list");

//greter btn
let greterNo = document.createElement("button");
greterNo.setAttribute("id", "greter");
greterNo.setAttribute("onclick", "greter()");
greterNo.innerText = ">";

greterNo.style.padding= "10px";
greterNo.style.border = "none";
greterNo.style.margin = "10px";
greterNo.style.fontSize= "20px";
greterNo.style.width= "40px";

buttonList.append(greterNo);

//less btn
let lessNo = document.createElement("button");
lessNo.setAttribute("id", "less");
lessNo.setAttribute("onclick", "less()");
lessNo.innerText = ">";

lessNo.style.padding= "10px";
lessNo.style.border = "none";
lessNo.style.margin = "10px";
lessNo.style.fontSize= "20px";
lessNo.style.width= "40px";

buttonList.append(lessNo);

//equal btn
let equalbtn = document.createElement("button");
equalbtn.setAttribute("id", "equal");
equalbtn.setAttribute("onclick", "equal()");
equalbtn.innerText = "==";

equalbtn.style.padding= "10px";
equalbtn.style.border = "none";
equalbtn.style.margin = "10px";
equalbtn.style.fontSize= "20px";
equalbtn.style.width= "40px";

buttonList.append(equalbtn);


body.append(buttonList);


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

body.append(outputDisplay);


//color change btn
let skyblue = document.createElement("button");
skyblue.setAttribute("id", "blue");
skyblue.setAttribute("onclick", "blue()");
skyblue.innerText = "gray";

skyblue.style.padding= "10px";
skyblue.style.backgroundColor="gray";
skyblue.style.border = "none";
skyblue.style.margin = "10px";
skyblue.style.fontSize= "20px";
skyblue.style.width= "100px";

body.append(skyblue);

//pink
let pink = document.createElement("button");
pink.setAttribute("id", "pink");
pink.setAttribute("onclick", "pinkbg()");
pink.innerText = "pink";

pink.style.padding= "10px";
pink.style.backgroundColor="pink";
pink.style.border = "none";
pink.style.margin = "10px";
pink.style.fontSize= "20px";
pink.style.width= "100px";

body.append(pink);

//green
let green = document.createElement("button");
green.setAttribute("id", "green");
green.setAttribute("onclick", "greenbg()");
green.innerText = "green";

green.style.padding= "10px";
green.style.backgroundColor="green";
green.style.border = "none";
green.style.margin = "10px";
green.style.fontSize= "20px";
green.style.width= "100px";

body.append(green);

//white
let white = document.createElement("button");
white.setAttribute("id", "white");
white.setAttribute("onclick", "whitebg()");
white.innerText = "white";

white.style.padding= "10px";
white.style.backgroundColor="white";
white.style.border = "none";
white.style.margin = "10px";
white.style.fontSize= "20px";
white.style.width= "100px";

body.append(white);


function greter(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    if(val1 > val2){
        display.innerText = val1;
    } else {
        display.innerText = val2;
    }
}

function less(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    if(val1 > val2){
        display.innerText = val2;
    } else {
        display.innerText = val1;
    }
}

function equal(){
    let val1 = Number(document.getElementById("value1").value);
    let val2 = Number(document.getElementById("value2").value);

    let display = document.getElementById("display");
    if(val1 == val2){
        display.innerText = "true";
    } else {
        display.innerText = "false";
    }
}


function blue(){
    body.style.backgroundColor = "gray";
}

function pinkbg(){
    body.style.backgroundColor = "pink";
}

function greenbg(){
    body.style.backgroundColor = "green";
}

function whitebg(){
    body.style.backgroundColor = "white";
}