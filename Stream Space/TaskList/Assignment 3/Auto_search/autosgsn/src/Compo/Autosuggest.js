import React from 'react'
import './Autosuggest.css'
import { useState } from 'react';

const Autosuggest = () => {
    const [inputValue, setInputValue] = useState('');
    const [suggestions, setSuggestions] = useState([]);

    const options = [
        'Apple',
        'African Cherry Orange',
        'American Mayapple',
        'Banana',
        'Blueberry',
        'Cherry',
        'Date',
        'Fig',
        'Grape',
        'Kiwi',
        'Lemon',
        'Mango',
        'Orange',
        'Papaya',
        'Pineapple',
        'Quince',
        'Raspberry',
        'Strawberry',
        'Tomato',
        'Watermelon',
    ];

    const handleInputChange = (event) => {
        const value = event.target.value;
        setInputValue(value);
        filterSuggestions(value);
    };

    const filterSuggestions = (value) => {
        if (value) {
            const filteredSuggestions = options.filter(option =>
                option.toLowerCase().includes(value.toLowerCase())
            );
            setSuggestions(filteredSuggestions);
        } else {
            setSuggestions([]);
        }
    };

    const handleSuggestionClick = (suggestion) => {
        setInputValue(suggestion);
        setSuggestions([]);
    };

    return (
        <div className="autosuggest-container container mt-4">
            <input
                type="text"
                value={inputValue}
                onChange={handleInputChange}
                placeholder="Type to search..."
                className="autosuggest-input rounded-pill p-2"
            />
            {suggestions.length > 0 && (
                <ul className="suggestions-list">
                    {suggestions.map((suggestion, index) => (
                        <li
                            key={index}
                            onClick={() => handleSuggestionClick(suggestion)}
                            className="suggestion-item"
                        >
                            {suggestion}
                        </li>
                    ))}
                </ul>
            )}
        </div>
    );
}

export default Autosuggest
