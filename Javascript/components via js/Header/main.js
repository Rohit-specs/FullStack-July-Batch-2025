const hamberger_btn = document.getElementById("navbar-toggler")
const nav_link = document.querySelector("nav")
hamberger_btn.addEventListener("click", () => {
  nav_link.classList.toggle("active");
});