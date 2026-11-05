fn main() {
    println!("Hello, world!");
}
impl Solution {
    pub fn find_the_distance_value(arr1: Vec<i32>, arr2: Vec<i32>, d: i32) -> i32 {
        let mut cnt =0;
        let mut result = true;
        for i in 0..arr1.len(){
            for j in 0..arr2.len(){
                let abu = (arr1[i]-arr2[j]).abs();
                if(abu <= d){
                    result = false;
                    break;
                }
            }
            if(result){
                cnt+=1;
            }
            result = true;
        }
        cnt
    }
}