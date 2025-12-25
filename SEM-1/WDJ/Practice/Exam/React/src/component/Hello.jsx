import React, { useEffect, useState } from 'react'

const Hello = (props) =>{
    const [count, setCount] = useState(0);

    useEffect(() => {
        console.log("component loaded");
    }, [count]);

    return(
        <>
            {count}
            <button onClick={()=>{setCount(count+1)}}>Add</button>
        </>
    )
}


export default Hello;


