let eye1 = document.getElementById("eye1");

eye1.addEventListener("click", () => {
  let pw = document.getElementById("password");

  if (pw.type == "password") {
    pw.type = "text";
    eye1.src = "/Assets/img/eye_open.png";
  } else {
    pw.type = "password";
    eye1.src = "/Assets/img/eye_close.png";
  }
});

if (document.URL.includes("register.html")) {
  let eye2 = document.getElementById("eye2");
  eye2.addEventListener("click", () => {
    let cn_pw = document.getElementById("password_confirm");

    if (cn_pw.type == "password") {
      cn_pw.type = "text";
      eye2.src = "/Assets/img/eye_open.png";
    } else {
      cn_pw.type = "password";
      eye2.src = "/Assets/img/eye_close.png";
    }
  });
}
