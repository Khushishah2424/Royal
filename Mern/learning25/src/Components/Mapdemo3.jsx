import React from 'react'

export const Mapdemo3 = () => {
    var userData =[
        {name :"khushi" , age :21 , salary :20000 , Gender : "female"},
        {name :"yash" , age :22 , salary :35900 , Gender : "male"},
        {name :"krisha" , age :20 , salary :25000 , Gender : "female"},

    ]

  return (
        <div style={{textAlign:"center"}}>
        Mapdemo3
    <table className="table table-dark table-striped">
        <thead>
            <tr>
            <th>Name</th>
            <th>Age</th>
            <th>Salary</th>
            <th>Gender</th>
            </tr>
        </thead>
        <tbody>
            {
                userData.map((user)=>{
                    return <tr>
                        <td>{user.name}</td>
                        <td>{user.age}</td>
                        <td style={{color :user.salary >24000 && "yellow"}}>
                            {user.salary}
                        </td>
                        <td>{user.Gender}</td>
                    </tr>
                })
            }
        </tbody>
    </table>
    </div>
  )
}
