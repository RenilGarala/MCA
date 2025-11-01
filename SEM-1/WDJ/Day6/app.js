let body = document.querySelector("body");

// let issueBook = document.getElementById("issue-book");


function issueBook(){
    let d1 = new Date();   
    let day = d1.getDate();

    let output = document.getElementById("output");
    output.innerText = day;
}

function returnBook(){
    let d1 = new Date();   
    let day = d1.getDate();

    let output = document.getElementById("output");
    output.innerText = day+7;
}