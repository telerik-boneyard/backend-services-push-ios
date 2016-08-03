# Basic Push Notifications Sample App for iOS


<a id="top"></a>
* [Overview](#overview)
* [Requirements](#requirements)
* [Configuration](#configuration)
* [Running the Sample](#running-the-sample)

# Overview

This repository contains a basic sample app that can receive push notifications sent from its Telerik Platform backend. It is a native app built using XCode and Objective-C.

The sample app utilizes the [Telerik Backend Services iOS SDK](http://docs.telerik.com/platform/backend-services/ios/getting-started-ios-sdk) to connect the app to Telerik Platform.

# Requirements

Before you begin, you need to ensure that you have the following:

- **An active [Telerik Platform](https://platform.telerik.com) account**
Ensure that you can log in to a Telerik Platform account. This can be a free trial account.
- **SSL push certificates** These come in Development or Production flavors and are issued for APNS (Apple Push Notifications Service) by Apple.
- **A Compatible XCode version** XCode 5 or or later must be installed on your Mac.

# Configuration

The sample app comes fully functional, but to see it in action you must link it to your own Telerik Platform account.

1. Log in to the Telerik Platform web portal.
2. Click your app to open it.
3. Click the **Data** tab and then click **Enable Data**.
4. Click the **Settings** tab.
2. Take note of your **App ID**.
3. In Xcode, open the `Sample/PushNotificationsSample/EVAppDelegate.m` file.
4. Find `YOUR_APP_ID` and replace it with the App ID that you acquired earlier.
5. Go back to the Telerik Platform web portal and set up push notifications in your app as explained in [Enabling Push Notifications](http://docs.telerik.com/platform/backend-services/javascript/push-notifications/push-enabling).

# Running the Sample

Once the app is configured, you can run it on a real device from within Xcode.

> Push notifications are not supported when running the app on device simulators.

> Ensure that the device that you are using has Internet connectivity when running the sample.
