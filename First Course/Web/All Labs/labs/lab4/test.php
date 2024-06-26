<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/test.css">
    <title>Test</title>
</head>

<body>
    <div class="test">
        <div class="test__title">
            <p>Count / Non-Count Food Partitives</p>
        </div>
        <div class="test__instruction">
            <p>Select the right word and type in the input field:</p>
        </div>
        <form method="get" id="testJS" name="testJS">
            <div class="test__question">
                <p>1. Please go to the store and pick up a <input type="text" id="question1" name="question[]" required minlength="2" maxlength="16" size="10"> of milk.</p>
                <div class="answers">
                    <p>A) bag</p>
                    <p>B) half gallon</p>
                    <p>C) dozen</p>
                    <p>D) pound</p>
                </div>
            </div>
            <div class="test__question">
                <p>2. This recipe calls for a <input type="text" id="question2" name="question[]" required minlength="2" maxlength="16" size="10"> of butter.</p>
                <div class="answers">
                    <p>A) dozen</p>
                    <p>B) tube</p>
                    <p>C) stick</p>
                    <p>D) can</p>
                </div>
            </div>
            <div class="test__question">
                <p>3. My cats eats a <input type="text" id="question3" name="question[]" required minlength="2" maxlength="16" size="10"> of tuna every day.</p>
                <div class="answers">
                    <p>A) can</p>
                    <p>B) loaf</p>
                    <p>C) bottle</p>
                    <p>D) bag</p>
                </div>
            </div>
            <div class="test__question">
                <p>4. I like to drink a <input type="text" id="question4" name="question[]" required minlength="2" maxlength="16" size="10"> of mineral water after I exercise.</p>
                <div class="answers">
                    <p>A) pound</p>
                    <p>B) stick</p>
                    <p>C) teaspoon</p>
                    <p>D) bottle</p>
                </div>
            </div>
            <div class="test__question">
                <p>5. I want to make a peanut butter and jelly sandwich. But the <input type="text" id="question" name="question[]" required minlength="2" maxlength="16" size="10"> of peanut butter is empty.</p>
                <div class="answers">
                    <p>A) six-pack</p>
                    <p>B) jar</p>
                    <p>C) head</p>
                    <p>D) box</p>
                </div>
            </div>
            <div class="test__question">
                <p>6. I need three <input type="text" id="question6" name="question[]" required minlength="2" maxlength="16" size="10"> of yogurt from the dairy section.</p>
                <div class="answers">
                    <p>A) tubes</p>
                    <p>B) pounds</p>
                    <p>C) containers</p>
                    <p>D) dozens</p>
                </div>
            </div>
            <div class="test__question">
                <p>7. If you want coffee with breakfast, you should buy a <input type="text" id="question7" name="question[]" required minlength="2" maxlength="16" size="10"> of coffe tonight.</p>
                <div class="answers">
                    <p>A) gallon</p>
                    <p>B) pound</p>
                    <p>C) cup</p>
                    <p>D) quart</p>
                </div>
            </div>
            <div class="test__question">
                <p>8. I would like a large, green <input type="text" id="question8" name="question[]" required minlength="2" maxlength="16" size="10"> of lettuce for tonight's salad.</p>
                <div class="answers">
                    <p>A) head</p>
                    <p>B) jar</p>
                    <p>C) can</p>
                    <p>D) half a cup</p>
                </div>
            </div>
            <div class="test__question">
                <p>9. Would you like a <input type="text" id="question9" name="question[]" required minlength="2" maxlength="16" size="10"> of chocolate or vanilla ice cream?</p>
                <div class="answers">
                    <p>A) half dozen</p>
                    <p>B) pint</p>
                    <p>C) bag</p>
                    <p>D) can</p>
                </div>
            </div>
            <div class="test__question">
                <p>10. Please go to the store and pick up a <input type="text" id="question10" name="question[]" required minlength="2" maxlength="16" size="10"> of milk</p>
                <div class="answers">
                    <p>A) half a pound</p>
                    <p>B) a box</p>
                    <p>C) a twelve-pack</p>
                    <p>D) a loaf</p>
                </div>
            </div>
            <div class="test__control">

                <button type="submit">Submit</button>
                <button type="reset" onclick="resetAnswers()">Reset</button>


            </div>
        </form>








        <p class="results" id="results">
        <?php
$fd = fopen("testResults.txt", 'w') or die("не удалось создать файл");
$correctAnswers = ["half gallon", "stick", "can", "bottle", "jar", "containers", "cup", "head", "pint", "a loaf"];
$answers = [];
$index = 0;
$answerCounter = 1;
$score = 0;
if(isset($_GET["question"])){
  
    $answers = $_GET["question"];
}

echo "Вы ответили на  " . count($answers) . " вопрос/ов: <br>";
foreach($answers as $answers) {
    if(strcmp($answers,$correctAnswers[$index]) !== 0) {
        echo "$answerCounter) answer is <u style='color:red'>Wrong</u> <br>";
        fputs($fd, "$answerCounter) answer is Wrong
        ");
        $index++;
        $answerCounter++;
    } else {
        echo "$answerCounter) answer is <u style='color:green'>Correct</u> <br>";
        fputs($fd, "$answerCounter) answer is Correct
        ");
        $index++;
        $score++;
       $answerCounter++;
    }
};
echo "Your score: $score";
fputs($fd, "Your score: $score");
fclose($fd);
?>
        </p>

        <div class="lab3-menu">
            <a href="../menu.html">« Вернуться к меню 3 лабораторной работы</a>
        </div>

    </div>

</body>

</html>