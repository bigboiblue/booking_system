import { Router } from "express"
import devices from "./devices"

const v1 = Router()


v1.use("/devices", devices)


export default v1