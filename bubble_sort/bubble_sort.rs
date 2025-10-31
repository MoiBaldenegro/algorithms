fn main() {
    let vec = vec![64, 34, 25, 12, 22, 11, 90];
    let sorted_vec = bubble_sort(vec);
    println!("{:?}", sorted_vec)
    

}

fn bubble_sort(mut vec: Vec<i32>) -> Vec<i32> {
    let len = vec.len();
    for i in 0..len {
        for j in 0..(len - i - 1 ) {
            if vec[j] > vec[j + 1] {
               let temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
    vec
}
