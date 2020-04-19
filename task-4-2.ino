int led1 = D5;
int led3 = D4;
int led2 = D8;

void setup()
{

   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);

   Particle.function("led",ledToggle);

   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
}

void loop()
{

}

int ledToggle(String command) {

    if (command=="led1on") {
        digitalWrite(led1,HIGH);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        return 1;
    }

    
    else if (command=="led2on") {
        digitalWrite(led2,HIGH);
        digitalWrite(led1,LOW);
        digitalWrite(led3,LOW);
        return 0;
    }

    else if (command=="led3on") {
        digitalWrite(led3,HIGH);
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        return 0;
    }

    else 
    {
        return -1;
    }
}
