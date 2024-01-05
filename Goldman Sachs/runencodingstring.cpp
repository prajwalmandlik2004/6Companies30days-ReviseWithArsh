// Run Encoding String : String , Datastructure

string encode(string src) {

  // Get the length of the input string
  int n = src.length(); 
  
  // Base case: empty string
  if (n == 0) {
    return ""; 
  }

  // Result string
  string result = "";

  // Iterate through the characters
  for (int i = 0; i < n; i++) {

    // Count occurrences of current char
    int count = 1;
    while (i < n - 1 && src[i] == src[i+1]) {
      count++;
      i++;
    }
    
    // Append char and count to result
    result += src[i] + to_string(count); 
  }

  return result;
}

