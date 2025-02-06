const fs = require('fs')

// Read the file path from command line arguments
const filePath = process.argv[2]

// Read file contents synchronously and convert to string
const fileContents = fs.readFileSync(filePath).toString()

// Split string by newlines and get array length minus 1 for the count
const newlineCount = fileContents.split('\n').length - 1

// Print the result
console.log(newlineCount)