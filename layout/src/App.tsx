import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import daniel from '/home/daniel/repos/qmk_firmware/keyboards/splitkb/kyria/keymaps/daniel/daniel.json'
import { mapKey } from './mapKey'

type Column = string[]
type Columns = [Column, Column, Column, Column, Column, Column, Column, Column, Column, Column, Column, Column]
type ThumbStack = [string, string, string, string, string, string, string]
type ThumbStacks = [ThumbStack, ThumbStack]
type Layout = {
  columns: Columns
  thumbStacks: ThumbStacks
}

const layouts: Layout[] = daniel.layers.map(layer => {
  const columns: Columns = [[], [], [], [], [], [], [], [], [], [], [], []]
  const thumbStacks = [[
    mapKey(layer[40]),
    mapKey(layer[41]),
    mapKey(layer[42]),
    mapKey(layer[43]),
    mapKey(layer[44]),

    mapKey(layer[30]),
    mapKey(layer[31]),

  ], [
    mapKey(layer[45]),
    mapKey(layer[46]),
    mapKey(layer[47]),
    mapKey(layer[48]),
    mapKey(layer[49]),

    mapKey(layer[32]),
    mapKey(layer[33]),
  ]]


  layer.forEach((key, index) => {
    if (index >= 12 * 3 + 4) return
    let adjustedIndex = index
    if (adjustedIndex >= 30 && adjustedIndex < 34) return
    if (adjustedIndex >= 34) adjustedIndex -= 4

    const colIndex = adjustedIndex % 12
    const column = columns[colIndex]

    if (column !== undefined) {
      column.push(mapKey(key))
    }

  })

  return { columns, thumbStacks }
})

function App() {

  return layouts.map((layout, index) => (
    <div key={index}>
      <Layout layout={layout} />
    </div>
  ))
}

const Layout = ({ layout }: { layout: Layout }) => {
  const left = layout.columns.slice(0, 6)
  const right = layout.columns.slice(6)
  return (
    <div className='board'>
      <div className='left half'>

        {left.map((column, index) =>
          <KeyColumn key={index} column={column} />)}
      </div>
      <div className='right half'>

        {right.map((column, index) =>
          <KeyColumn key={index} column={column} />)}
      </div>



    </div>
  )
}

const KeyColumn = ({ column }: { column: Column }) => {
  return (
    <div className="column">
      {column.map((key, index) => (
        <div key={index} className="key">
          {key}
        </div>
      ))}
    </div>
  )
}

export default App
