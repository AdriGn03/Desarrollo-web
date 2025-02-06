const fs = require('fs')
const path = require('path')

// Get directory path and extension from command line arguments
const dirPath = process.argv[2]
const fileExt = '.' + process.argv[3]

// Read directory contents asynchronously
fs.readdir(dirPath, (err, files) => {
    if (err) {
        return console.error(err)
    }
    
    // Filter files by extension and print each matching file
    files.forEach(file => {
        if (path.extname(file) === fileExt) {
            console.log(file)
        }
    })
})