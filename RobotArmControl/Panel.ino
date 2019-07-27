
void PanelCallback(vp_channel event) 
{ 
  switch (event) 
  {
    case PanelConnected: // receive panel connected event
      PanelInit();
    break;

    case Button_1:  PrevPosition(); break;
    case Button_2:  NextPosition(); break;
    case Button_3:  StorePosition(); break;
    case Button_4:  break;
    case Button_8:  break;
    case Button_17: PlayMove(); break;

    case Slider_5: break;
    case Slider_2: break;
    case Slider_3: break;

  }
  if (event!=DynamicDisplay) StaticChange();
}

void StorePosition()
{// store position variables and set for next position
  
}

void PrevPosition()
{// set to previous position

  
}

void NextPosition()
{// set to next position or delete
  
}

void PlayMove()
{
  
}

void StaticChange()
{// handle display status after any panel action
  
 
}



void PanelInit()
{
  Panel.send(ApplicationName,"RobotArm - edit move");
  Panel.send(Display_1,"$GRAY");
  Panel.send(Display_1,"[M0]"); // move name
  Panel.send(Display_2,"$SMALL");
  Panel.send(Display_2,"$BLACK");
  Panel.send(Display_2,"B:000  G:C  A1:000  A2:000"); // position numbers
  Panel.send(Display_3,"$WHITE"); 
  Panel.send(Display_3,"P01/01 M0"); //position number / of total pos numbers for move number

  Panel.send(Button_1,"▭\npos"); 
  //Panel.send(Button_1,"△\npos");
  Panel.send(Button_2,"pos\n▭");
  //Panel.send(Button_2,"pos\n🞮");
  //Panel.send(Button_2,"pos\n▽");
  
  Panel.send(Led_1,"$OFF"); // set positon led 
  Panel.send(Button_3,"set\npos"); // stores pos and starts next
  
  Panel.send(Led_2,"$OFF");
  Panel.send(Button_4,"rec\nbase");
  
  Panel.send(Led_6,"$OFF");
  Panel.send(Button_8,"grip");
  
  Panel.send(MaxSlider_5,255);
  Panel.send(Slider_5,128);
  Panel.send(Slider_5,"base");
  Panel.send(MaxSlider_2,255);
  Panel.send(Slider_2,128);
  Panel.send(Slider_2,"arm1");
  Panel.send(MaxSlider_3,255);
  Panel.send(Slider_3,128);
  Panel.send(Slider_3,"arm2");

  Panel.send(Led_9,"$OFF");
  Panel.send(Button_17,"▶"); 
}
