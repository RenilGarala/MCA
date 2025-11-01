let b1 = document.querySelectorAll('button');
// let cencelBtn = document.getElementById('xyz');

console.log(b1);

b1[0],b1[1].onclick = ()=>{
    console.log("js called from onclick")
}

b1[0],b1[1].addEventListener('click', ()=>{
    console.log("1st");
})

b1[0],b1[1].addEventListener('click', ()=>{
    console.log("2st");
})