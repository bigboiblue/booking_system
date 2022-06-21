import express from "express"
import api from "./api"

const app = express()
const PORT_NUM = parseInt(process.env.PORT_NUM ?? "") || 8080

app.use(express.json())
app.use("/api", api)

app.listen(PORT_NUM, () => {
    console.log(`Listening on ${PORT_NUM}`)
})