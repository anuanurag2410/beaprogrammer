const express=require("express")
const app=express()

app.get('/',(req,res)=>{
    res.send("This is express message")
});

app.listen(3000);
console.log("running.....")
