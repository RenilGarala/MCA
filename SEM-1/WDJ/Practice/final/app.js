function cal() {
  let a = Number(document.getElementById("one").value);
  let b = Number(document.getElementById("sec").value);

  document.getElementById("one").value = "";
  document.getElementById("sec").value = "";

  let c = a + b;

  let body = document.querySelector("body");

  let output = document.getElementById("output");
  output.onclick= 

  output.innerText = c;
}
