const byte Button[] = {2, 3};
const byte Relay = 13;

byte c;
bool state[2][2];
bool out[2];

void setup()
{
    for (c = 0; c < sizeof(Button) / sizeof(byte); c++)
        pinMode(Button[c], INPUT);
    pinMode(Relay, OUTPUT);
    c = 0;
}

void loop()
{
    state[1][c] = state[0][c];
    state[0][c] = digitalRead(Button[c]);
    if (!state[0][c] && state[1][c])
        out[c] = !out[c];
    c++;
    if (c > 1)
        c = 0;
    if (out[0] == out[1])
        digitalWrite(Relay, HIGH);
    else
        digitalWrite(Relay, LOW);
}