const fs = require('fs')

// Get file path from command line arguments
const filePath = process.argv[2]

// Read file asynchronously
fs.readFile(filePath, 'utf8', (err, fileContents) => {
    if (err) {
        return console.error(err)
    }
    
    // Count newlines and print result
    const newlineCount = fileContents.split('\n').length - 1
    console.log(newlineCount)
})