#pragma once
#include "AppEngine/UI/UIWidget.h"
#include "AppEngine/Log.h"
class UITools : public UIWidget {

public:

   UITools() : UIWidget("Tools") {}
   ~UITools()
   {
   }

private:

   virtual void RenderImpl() override {
      ImGui::Text("Hello, welcome to OpenCV Editor");
      ImGui::Text("=================================");
      ImGui::Text("Please start by opening a new image file to process (File -> Open");
      ImGui::Text("Here are your tools!");
   }
};

