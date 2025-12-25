// Simple auth using localStorage (not secure — demo only)
const authLink = document.getElementById("authLink");
function getUser() {
  return JSON.parse(localStorage.getItem("eg_user") || "null");
}
function setUser(u) {
  localStorage.setItem("eg_user", JSON.stringify(u));
}
function logout() {
  localStorage.removeItem("eg_user");
  location.href = "index.html";
}
// update nav link if present
if (authLink) {
  const user = getUser();
  authLink.textContent = user ? user.name + " (Logout)" : "Login";
  authLink.href = user ? "#" : "login.html";
  if (user) {
    authLink.addEventListener("click", (e) => {
      e.preventDefault();
      logout();
    });
  }
}

// Signup
const signupForm = document.getElementById("signupForm");
if (signupForm) {
  signupForm.addEventListener("submit", (e) => {
    e.preventDefault();
    const name = document.getElementById("sname").value.trim();
    const email = document.getElementById("semail").value.trim();
    const pass = document.getElementById("spassword").value;
    if (!name || !email || !pass) return;
    // simple users store
    const users = JSON.parse(localStorage.getItem("eg_users") || "[]");
    if (users.find((u) => u.email === email)) {
      document.getElementById("signupMsg").textContent =
        "Email already registered.";
      return;
    }
    users.push({ name, email, pass });
    localStorage.setItem("eg_users", JSON.stringify(users));
    setUser({ name, email });
    document.getElementById("signupMsg").textContent =
      "Account created! Redirecting...";
    setTimeout(() => (location.href = "index.html"), 800);
  });
}

// Login
