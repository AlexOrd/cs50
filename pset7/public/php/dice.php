<!DOCTYPE html>

<html>
    <head>
        <title>Dice roll</title>
    </head>
    <body>
        <p>
            Your first die was a <?= rand() % 6 + 1 ?>.
        </p>
        <p>
            Your second die was a <?= rand() % 6 + 1 ?>.
        </p>
    </body>
</html>