const http = require('http');
const port = 3000;
const server = http.createServer((req,res) => {
res.writeHead(200,{'Content-Type':'text/plain'});
res.end('hola mundo en node.js')
});

server.listen(port,()=>{
    console.log(`Servidor funcionando en http://localhost:${port}`);
});