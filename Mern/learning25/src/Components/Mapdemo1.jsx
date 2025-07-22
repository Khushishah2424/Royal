import React from 'react'

export const Mapdemo1 = () => {
    var userage = 20;

  return (
    <div>
        <h1>Mapdemo1</h1>
        <h1 style={{color : userage>18 ?"green" : "red"}}>
            {userage}
        </h1>
        {
            userData.map((user)=>{
                return <ul>
                    <li>{user.name} - {user.age}</li>

                </ul>
            })
        }
        </div>
  )
}
