import { Router } from "express"

interface Device {
    user?: string
}


const devices = Router()

/**
 * For now this is hardcoded. In future this will be in a database
 */
const NUM_DEVICES = 10
const device_data: Device[] = Array(NUM_DEVICES).fill(0).map(() => Object())

devices.get("/", (request, response, next) => {
    
    response.json(device_data)
    response.end()
    
    next()
})

devices.post("/:id", (request, response, next) => {
    const id = parseInt(request.params.id)
    const body = request.body
    if (body?.user === undefined){
        next()
        return
    }
    device_data[id].user = body.user as string
    response.json({
        status: "success"
    })
    response.end()
})

export default devices