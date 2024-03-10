import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import daniel from 'C:\\Users\\Daniel\\qmk_firmware\\keyboards\\splitkb\\kyria\\keymaps\\daniel\\daniel.json'
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
    const thumbStacks: ThumbStacks = [[
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
    const leftMain = layout.columns.slice(0, 6)
    const rightMain = layout.columns.slice(6)
    const leftThumbStack = layout.thumbStacks[0]
    const rightThumbStack = layout.thumbStacks[1]

    return (
        <div className='board'>
            <div className='left half'>
                <div className='left main'>
                    {leftMain.map((column, index) => <KeyColumn key={index} column={column} />)}
                </div>

                <ThumbStack thumbStack={leftThumbStack} side='left' />
            </div>

            <div className='right half'>
                <div className='right main'>
                    {rightMain.map((column, index) => <KeyColumn key={index} column={column} />)}
                </div>

                <ThumbStack thumbStack={rightThumbStack} side='right' />
            </div>
        </div>
    )
}

const getFontSize = (key: string) => {
    if (key.length === 1) return 18
    if (key.length > 4) return 8
    return 11
}

const KeyColumn = ({ column }: { column: Column }) => {
    return (
        <div className="column">
            {column.map((key, index) => (
                <div key={index} className="key" style={{fontSize: getFontSize(key)}}>
                    {key}
                </div>
            ))}
        </div>
    )
}

type Side = 'left' | 'right'

const ThumbStack = ({ thumbStack, side }: { thumbStack: ThumbStack, side: Side }) => {
    return (
        <div className={`${side} thumbStack`}>
            <div className={`toprow`}>
                {thumbStack.slice(5).map((key, index) => (
                    <div key={index} className="key"style={{fontSize: getFontSize(key)}}>
                        {key}
                    </div>
                ))}
            </div>

            <div className='bottomrow'>
                {thumbStack.slice(0, 5).map((key, index) => (
                    <div key={index} className="key"style={{fontSize: getFontSize(key)}}>
                        {key}
                    </div>
                ))}
            </div>

        </div>
    )
}

export default App
