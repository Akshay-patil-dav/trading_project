// Scroll effect: Change navbar color when user scrolls down
window.onscroll = function() {scrollFunction()};

function scrollFunction() {
    const navbar = document.querySelector(".navbar");
    if (window.scrollY > 50) {  // More than 50px scroll from top
        navbar.classList.add("scrolled");
    } else {
        navbar.classList.remove("scrolled");
    }
}

// Toggle menu for smaller screens
const mobileMenu = document.getElementById("mobile-menu");
const navLinks = document.querySelector(".nav-links");

mobileMenu.addEventListener("click", () => {
    navLinks.classList.toggle("show");
});


