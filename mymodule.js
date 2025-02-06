const fs = require('fs')
const path = require('path')

module.exports = function(dirPath, fileExt, callback) {
    // Add dot to extension if not present
    fileExt = fileExt.startsWith('.') ? fileExt : '.' + fileExt

    fs.readdir(dirPath, (err, files) => {
        if (err) {
            return callback(err)
        }

        // Filter files by extension
        const filteredFiles = files.filter(file => 
            path.extname(file) === fileExt
        )

        callback(null, filteredFiles)
    })
}