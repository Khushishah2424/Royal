import axios from 'axios'
import React, { useEffect, useState } from 'react'

export const Apidemo2 = () => {
  const[product,setProduct]= useState([])
  useEffect(()=>{
      getProducts()
  },[])
  const getProducts= async()=>{
    const res = await axios.get("https://node5.onrender.com/product/getall")
    console.log(res)
    console.log(res.data)
    setProduct(res.data.data)

  }

  return (
    <div style={{textAlign:"center"}}>
        <h1>Apidemo2</h1>
        {/* <button onClick={()=>{getProducts()}}>GET</button> */}
        <table className='table'>
          <thead>
            <tr>
              <th>NAme</th>
              <th>Price</th>
              <th>Color</th>
              <th>Unit</th>
            </tr>
          </thead>
       
        <tbody>
          {
            product.map((prod)=>{
              return<tr>
                            <td>{prod.name}</td>
                            <td>{prod.price}</td>
                            <td>{prod.colors}</td>
                            <td>{prod.unit}</td>
                        </tr>
              
            })
          }
        </tbody>
         </table>

    </div>
  )
}
