import { useState } from 'react'
import Hello from './component/Hello'

function App() {

  const [show, setShow] = useState(true);
  return (
    <>
    <button onClick={()=>{setShow(!show)}}>{show? "hide": "show"}</button>
      {show && <Hello name="Renil"/>}
    </>
  )
}

export default App
