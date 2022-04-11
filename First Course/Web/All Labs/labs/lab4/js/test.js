let correctAnswers = new Array("half gallon", "stick", "can", "bottle", "jar", "containers", "cup", "head", "pint", "a loaf");
var txt = "";
var score = 0;

function checkAnswers() {
    var x = document.getElementById("testJS");
    var i, j;
    for (i = 0, j = 1; i < x.length - 1; i++, j++) {
        if (x.elements[i].value == correctAnswers[i]) {
            txt = txt + j + ") " + x.elements[i].value + " - is Correct <br>";
            score++;
        } else {
            txt = txt + j + ") " + x.elements[i].value + " - is Wrong <br>";
        }
    }
    txt = txt + "<br>Your score: " + score + "/10";
    document.getElementById("results").innerHTML = txt;
}

function resetAnswers() {
    txt = "";
    score = 0;
}