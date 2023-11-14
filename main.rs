use std::fs::read_to_string;

fn main() {
    let sum = read_to_string(r"./input.txt") // Read input file
        .expect("unable to read file")
        .lines()
        .map(|s| s.parse::<u32>().expect("unable to parse line")) // Parse string to i32
        .map(|num| num * num) // Square each number
        .sum::<u32>(); // Sum and store as i32

    println!("The sum is {sum}")
}
