const http = require('http')
const map = require('through2-map')

// Get port from command line arguments
const port = process.argv[2]

// Create HTTP server
const server = http.createServer((req, res) => {
    // Check if request method is POST
    if (req.method !== 'POST') {
        return res.end('Please send a POST request\n')
    }
    
    // Transform stream data to uppercase and pipe back to response
    req.pipe(map((chunk) => {
        return chunk.toString().toUpperCase()
    })).pipe(res)
})

// Listen on specified port
server.listen(port)