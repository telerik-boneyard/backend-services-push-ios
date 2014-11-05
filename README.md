backend-services-push-ios
=================

This application is a basic example of using Push Notifications provided by Telerik Backend Services.

###Requirements



    	
- Registration in Telerik Backend Services
- The certificates required for APNS (Apple Push Notifications Service)
	

###Install
- Download  the ZIP from this repo.
- Open the **PushNotificationsSample.xcodeproj**  file in Xcode.
- Set the **EverliveAPIKey**  value in the **EVAppDelegate.m** file. The API key  can be found in the API Keys section in your Telerik Backend Services account. 
- Enable Push Notifications in Telerik Backend Services. Go to your project settings and in the Push Notifications section activate the push providers.
- Deploy the project to a mobile device and run it. ***Please note that push notifications will not work in simulator***.
