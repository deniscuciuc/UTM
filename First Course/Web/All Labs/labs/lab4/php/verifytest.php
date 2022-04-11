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