// var games =document.getElementsByClassName("gamesPhoto");

// for (let i = 0; i < games.length; i++) {
//     games[i].addEventListener("mouseenter" , function (e) {
//         console.log(event.target)
//     })



// }

function ButtonShow(e) {
    let btn = e.firstChild;
    let img = e.lastChild;
    img.style.cssText = "opacity: 0.3;"
    btn.style.cssText = "display : inline-block; z-index: 55;";
}
function ButtonHide(e) {
    let btn = e.firstChild;
    let img = e.lastChild;
    btn.style.cssText = "display : none;";
    img.style.cssText = "opacity: 1;"
}