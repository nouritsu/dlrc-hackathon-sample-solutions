// run using Java 20.x

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;
import java.util.stream.Collectors;

class Program {
    public static void main(String[] args) {
        try {
            Path inputPath = Paths.get("./input.txt");
            List<String> inputData = Files.readAllLines(inputPath);
            inputData.forEach(str -> str.strip());

            List<Integer> integerData = inputData.stream().map(String::strip).map(Integer::parseInt)
                    .map(num -> num * num)
                    .collect(Collectors.toList());

            int sum = integerData.stream().reduce(0, Integer::sum);

            System.out.printf("The sum is %d", sum);

        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}