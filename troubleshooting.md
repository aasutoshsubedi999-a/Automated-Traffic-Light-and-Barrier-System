# Troubleshooting

| Problem | Likely cause | Fix |
|---|---|---|
| LED does not light | Flipped LED or missing resistor link | Long leg toward the pin side, check the resistor shares columns with both |
| Wrong LED order | Pin numbers differ | Swap `RED_LED`, `YELLOW_LED`, `GREEN_LED` in the code |
| Servo does not move | Signal on wrong pin or wrong board selected | Signal to pin 9, check board and port |
| Servo jitters or Arduino resets | Servo draws too much current | Power the servo from a 4xAA pack and connect its negative to Arduino GND |
| Gate moves the wrong way | Angles reversed | Change `GATE_UP` and `GATE_DOWN` |
| Upload fails | Wrong port or driver | Re-select the port, try another USB cable |
