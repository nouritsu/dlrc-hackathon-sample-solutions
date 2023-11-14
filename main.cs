string[] InputData = File.ReadAllLines(@".\input.txt"); // Read input file
int[] IntData = InputData.Select(s => int.Parse(s)).Select(num => num * num).ToArray(); // Convert to integer, square and collect
int Sum = IntData.Sum(); // Sum up the squared numbers
Console.WriteLine("The sum is " + Sum.ToString());