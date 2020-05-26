const http=require("http")
const server=http.createServer((req,res)=>{
    res.end("This is node file");
});

server.listen(3000);
console.log("running....")
