function showStudent() {
  document.getElementById("message").textContent = "Welcome Student";
}

function showTeacher() {
  document.getElementById("message").textContent = "Welcome Teacher";
}

function twoSum() {
  const a = parseFloat(document.getElementById("num1").value);
  const b = parseFloat(document.getElementById("num2").value);

  if (isNaN(a) || isNaN(b)) {
    alert("Please enter two valid numbers!");
    return;
  }

  const sum = a + b;
  document.getElementById("result").innerHTML = "<b>The sum is: " + sum + "</b>";
  alert("Calculation done!");
}

window.addEventListener("DOMContentLoaded", () => {
  let numbers = "";
  for (let i = 2; i <= 100; i += 2) {
    numbers += i + " ";
  }
  document.getElementById("evens").textContent = numbers;
});
