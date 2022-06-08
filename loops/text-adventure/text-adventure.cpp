#include <iostream>

int main() {

    std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures." <<std::endl;
    std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon." << std::endl;
    std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards." << std::endl;
    std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other." << std::endl;
    std::cout << "PLEASE ENTER INPUT WITH CAPITAL LETTERS FOR EACH OPTION!" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "     \\\\\n";
    std::cout << "      \\\\_\n";
    std::cout << "      ( _\\Dn==(\n";
    std::cout << "      / \\__|\n";
    std::cout << "     / _/`\"`\n";
    std::cout << "    {\\  )_\n";
    std::cout << "     `\"\"\"`\n";

    std::cout << std::endl;
    std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry." << std::endl;
    std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun." << std::endl;
    std::cout << "*      *      *" << std::endl;
    std::cout << "What do you do?" << std::endl;

    char choice1 = 0;

    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        std::cout << "Enter A if you ask the Gryphon next to you what the jurors are doing." << std::endl;
        std::cout << "Enter B if you sneak a tart." << std::endl;
        std::cout << "Enter C if you sit and wait for the trial to begin." << std::endl;
        std::cin >> choice1;

    }

    switch (choice1) {

    case 'A':
        std::cout << "The Gryphon explains that the jurors are writing down their names for fear they should forget before the end of the trial." << std::endl;
        std::cout << "'How stupid!' you say in a loud voice, but you are cut off." << std::endl;
        std::cout << "'SILENCE IN THE COURT!' shrieks the White Rabbit. The king puts on his glasses and looks around anxiously to see who was talking." << std::endl;
        std::cout << "You manage to keep your mouth shut and the King fails to notice you." << std::endl;
        break;

    case 'B':
        std::cout << "Just as you get your hand on a scrumptious-looking tart, you hear a bellowing voice that fills you with dread." << std::endl;
        std::cout << "'YOU did it!' screams the Queen of Hearts." << std::endl;
        std::cout << "'I did what?' you ask." << std::endl;
        std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher." << std::endl;
        std::cout << "Several cards dressed as guards carry you off to be executed." << std::endl;
        std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above." << std::endl;
        std::cout << "THE END" << std::endl;
        return 0;

    case 'C':
        std::cout << "The court begins to settle down." << std::endl;
        break;

    default:
        std::cout << "Sorry, you haven't entered a valid choice." << std::endl;
        std::cout << "Goodbye." << std::endl;
        return 0;

    }

    std::cout << "'Herald, read the accusation!' yells the King." << std::endl;
    std::cout << "On this the White Rabbit blows three blasts on the trumpet, and then unrolls the parchment scroll, and reads as follows:" <<std::endl;
    std::cout << std::endl;
    std::cout << "'The Queen of Hearts, she made some tarts," << std::endl;
    std::cout << "    All on a summer day:" << std::endl;
    std::cout << "The Knave of Hearts, he stole those tarts," << std::endl;
    std::cout << "    And took them quite away!'" << std::endl;
    std::cout << std::endl;
    std::cout << "'Consider your verdict,' says the King to the jury." << std::endl;
    std::cout << "'Not yet, not yet,' the Rabbit hastily interrupts him." << std::endl;
    std::cout << std::endl;

    std::cout << "*      *      *" << std::endl;
    std::cout << "As the first witness is called, you notice a bit of cake in your pocket. You are still very hungry." << std::endl;
    std::cout << "Do you eat the bit of cake in your pocket?" << std::endl;
    char choice2 = 0;

    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        std::cout << "Enter A if you eat the cake." << std::endl;
        std::cout << "Enter B if you decide to wait until the trial is over." << std::endl;
        std::cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice." << std::endl;
        std::cout << "Goodbye." << std::endl;
        return 0;

    }
    else if (choice2 == 'B') {

        std::cout << "Your stomach rumbles audibly, interrupting the interrogation." << std::endl;
        std::cout << "'YOU did it!' screams the Queen of Hearts." << std::endl;
        std::cout << "'I did what?' you ask." << std::endl;
        std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher." << std::endl;
        std::cout << "Several cards dressed as guards carry you off to be executed." << std::endl;
        std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above." << std::endl;
        std::cout << "THE END" << std::endl;
        return 0;

    }

    std::cout << "You eat the cake and it really does make you feel better. Meanwhile, the trial proceeds..." << std::endl;
    std::cout << "The first witness is the Hatter." << std::endl;
    std::cout << "'Give your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'" << std::endl;
    std::cout << std::endl;

    std::cout << "*      *      *" << std::endl;
    std::cout << "While the Hatter answers nervously, you suddenly feel a very curious sensation — you are growing larger." << std::endl;
    std::cout << "It must have been the cake you ate..." << std::endl;
    std::cout << "What do you do?" << std::endl;
    char choice3 = 0 ;

    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

        std::cout << "Enter A if you get up and leave the court." << std::endl;
        std::cout << "Enter B if you decide to remain where you are as long as there is room for you." << std::endl;
        std::cin >> choice3;

    }

    if (choice3 != 'A' && choice3 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice." << std::endl;
        std::cout << "Goodbye." << std::endl;
        return 0;

    }
    else if (choice3 == 'A') {

        std::cout << "You leave the court room in search of a way home." << std::endl;
        std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years." << std::endl;
        std::cout << "THE END" << std::endl;
        return 0;

    }

    std::cout << "You stay, much to the annoyance of the Dormouse who is getting squeezed sitting next to you." << std::endl;
    std::cout << "'Never mind!' says the King to the Hatter, 'call the next witness." << std::endl;
    std::cout << "'— and just take his head off outside' says the Queen to one of the officers." << std::endl;
    std::cout << "You watch the White Rabbit fumble over the list. He reads at the the top of his shrill voice:" << std::endl;
    std::cout << "ALICE!" << std::endl;
    std::cout << std::endl;
    std::cout << "*      *      *" << std::endl;
    std::cout << "In your surprise, what do you do?" << std::endl;

    char choice4 = 0;

    for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

        std::cout << "Enter A if you rise up and declare yourself present." << std::endl;
        std::cout << "Enter B if you stay seated and shout 'Here!'." << std::endl;
        std::cout << "Enter C if you do nothing." << std::endl;
        std::cin >> choice4;

    }

    if (choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {

        std::cout << "Sorry, you haven't entered a valid choice." << std::endl;
        std::cout << "Goodbye." << std::endl;
        return 0;

    }
    else if (choice4 == 'A') {

        std::cout << "'Here!' You jump up in such a hurry that you knock over the jury box with the edge of your skirt." << std::endl;
        std::cout << "The jury is scattered across the floor." << std::endl;
        std::cout << "'The trial cannot proceed,' says the King accusingly, 'until all the jurymen are back in their proper places." << std::endl;
        std::cout << "You hastily put as many jury members back in place as you can" << std::endl;

    }
    else if (choice4 == 'C') {

        std::cout << "All eyes turn to you, except for the King and Queen." << std::endl;
        std::cout << "'That's Alice,' the Gryphon points you out helpfully, even as you glare at him." << std::endl;

    }

    std::cout << "'What do you know about this business?' the King asks you." << std::endl;
    std::cout << "'Nothing,' you reply, honestly." << std::endl;
    std::cout << "The King reads from his book, 'Rule forty-two. All persons more than a mile high to leave the court." << std::endl;

    std::cout << "*      *      *" << std::endl;
    std::cout << "How do you respond?" << std::endl;

    char choice5 = 0;

    for (int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {

        std::cout << "Enter A if you agree to leave the court." << std::endl;
        std::cout << "Enter B if you argue about your height with the King." << std::endl;
        std::cout << "Enter C if you flip over the jury box again and steal a tart." << std::endl;
        std::cin >> choice5;

    }

    switch (choice5) {

    case 'A':
        std::cout << "You leave the court room in search of a way home." << std::endl;
        std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years." << std::endl;
        std::cout << "THE END" << std::endl;
        return 0;

    case 'B':
        std::cout << "'I'm not a mile high,' you say." << std::endl;
        std::cout << "'Nearly TWO miles high,' says the Queen of Hearts." << std::endl;
        std::cout << "'Well, I shan't go at any rate,' you reply." << std::endl;
        std::cout << "'Hold your tongue!' says the Queen turning purple." << std::endl;
        std::cout << "'I won't!' you retort." << std::endl;
        std::cout << "'Off with her head!' the Queen shouts at the top of her voice." << std::endl;
        std::cout << "'Who cares?' you ask, realizing how small everyone has become. 'You're nothing but a pack of cards!" << std::endl;
        break;

    case 'C':
        std::cout << "'Stuff and nonsense!' you yell, as you flip over the jury box - this time on purpose." << std::endl;
        std::cout << "'Hold your tongue!' says the Queen turning purple." << std::endl;
        std::cout << "'I'll do no such thing!' you retort." << std::endl;
        std::cout << "You scoop up the remaining tarts, which now appear to be very small, and shove them all in your mouth." << std::endl;
        std::cout << "You hear the Queen cry, 'Off with her head!' as you begin to storm out of the court." << std::endl;
        break;

    default:
        std::cout << "Sorry, you haven't entered a valid choice." << std::endl;
        std::cout << "Goodbye." << std::endl;
        return 0;
    }

    std::cout << "At this, the whole pack rises up into the air and flies down on you." << std::endl;
    std::cout << "You try to beat them off, and awake to find yourself lying on the bank of the river with your head in your sister's lap." << std::endl;
    std::cout << "'Wake up, Alice dear!' your sister says. 'Why, what a long sleep you've had!'" << std::endl;
    std::cout << "'Oh I've had such a curious dream' you reply. And you tell her, as well as you can remember, all the strange adventures you've just had." << std::endl;

}