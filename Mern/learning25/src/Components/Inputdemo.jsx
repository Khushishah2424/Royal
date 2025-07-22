import React, { useState } from 'react'

export const Inputdemo = () => {
    const [name, setName] = useState("")
    const [Age, setAge] = useState("")
    const [isSubbmited, setisSubbmited] = useState(false)
    const [color, setcolor] = useState("black")
    const [date, setdate] = useState("")
    const [dateStatus, setDateStatus] = useState("")

    const nameHandler = (event) => {
        setName(event.target.value)
    }

    const submitHandler = () => {
        const inputDate = new Date(date)
        const today = new Date()
        const yesterday = new Date()
        const tomorrow = new Date()

        yesterday.setDate(today.getDate() - 1)
        tomorrow.setDate(today.getDate() + 1)

        const inputStr = inputDate.toDateString()
        const todayStr = today.toDateString()
        const yesterdayStr = yesterday.toDateString()
        const tomorrowStr = tomorrow.toDateString()

        if (inputStr === todayStr) {
            setDateStatus("Today")
        } else if (inputStr === yesterdayStr) {
            setDateStatus("Yesterday")
        } else if (inputStr === tomorrowStr) {
            setDateStatus("Tomorrow")
        } else {
            setDateStatus("")
        }

        setisSubbmited(true)
    }

    return (
        <div style={{ textAlign: 'center' }}>
            <h1>Inputdemo</h1>
            <div>
                <label>Name</label>
                <input type='text' onChange={nameHandler}></input>
                {name}
            </div>

            <div>
                <label>Age</label>
                <input type='text' onChange={(event) => setAge(event.target.value)}></input>
                {Age}
            </div>

            <div>
                <label>Color</label>
                <input type='color' onChange={(event) => setcolor(event.target.value)}></input>
            </div>

            <div>
                <label>Date</label>
                <input type='date' onChange={(event) => setdate(event.target.value)}></input>
            </div>

            <div>
                <button onClick={submitHandler}>ADD</button>
            </div>

            {
                isSubbmited &&
                <div style={{ color: color }}>
                    <h1>OUTPUT</h1>
                    <h1>NAME = {name}</h1>
                    <h2>AGE = {Age}</h2>
                    <h2>COLOR = {color}</h2>
                    <h2>DATE = {date}</h2>
                    {dateStatus && <h2>{dateStatus}</h2>}
                </div>
            }
        </div>
    )
}
