const filterFiles = require('./mymodule.js')

const dirPath = process.argv[2]
const fileExt = process.argv[3]

filterFiles(dirPath, fileExt, (err, files) => {
    if (err) {
        return console.error('Error:', err)
    }
    
    files.forEach(file => console.log(file))
})

