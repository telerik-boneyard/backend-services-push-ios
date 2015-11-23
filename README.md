# Basic Push Notifications Sample App for iOS

<a href="https://github.com/telerik/backend-services-push-ios" target="_blank"><img style="padding-left:20px" src="http://docs.telerik.com/platform/samples/images/get-github.png" alt="Get from GitHub" title="Get from GitHub"></a>

* [Overview](#overview)
* [Requirements](#requirements)
* [Configuration](#configuration)
* [Running the Sample](#running-the-sample)
* [See Also](#see-also)

# Overview

This repository contains a basic sample app that can receive push notifications sent from its Telerik Platform backend. It is a native app built using XCode and Objective-C.

The sample app utilizes the following Telerik products and SDKs:

- [Telerik Backend Services](http://docs.telerik.com/platform/backend-services/)&mdash;this is the backend of Telerik Platform where you can store data, files, and user accounts as well as set up and send push notifications
- [Telerik Backend Services iOS SDK](http://docs.telerik.com/platform/backend-services/ios/getting-started-ios-sdk)&mdash;to connect the app to Telerik Backend Services

# Requirements

Before you begin, you need to ensure that you have the following:

- **An active [Telerik Platform](https://platform.telerik.com) account**
Ensure that you can log in to a Telerik Platform account. This can be a free trial account.
- **A Telerik Backend Services project** You can use an existing project or create a new one. 
- **SSL push certificates** These come in Development or Production flavors and are issued for APNS (Apple Push Notifications Service) by Apple.
- **A Compatible XCode version** XCode 5 or or later must be installed on your Mac.

# Configuration

The sample app comes fully functional, but to see it in action you must link it to your own Telerik Platform account.

1. Open your Telerik Backend Services project and go to **Overview > API Keys**.
2. Take note of your API Key.
3. Open the `Sample/PushNotificationsSample/EVAppDelegate.m` file in Xcode.
4. Find `YOUR_API_KEY` and replace it with the actual Backend Services API Key that you acquired earlier.
5. Finally, set up push notifications in your Backend Services project as explained in [Enabling Push Notifications](http://docs.telerik.com/platform/backend-services/javascript/push-notifications/push-enabling).

# Running the Sample

Once the app is configured, you can run it on a real device from within Xcode.

> Push notifications are not supported when running the app on device simulators.

> Ensure that the device that you are using has Internet connectivity when running the sample.

# See Also

[Getting Started with Push Notifications](http://docs.telerik.com/platform/backend-services/ios/push-notifications/push-getting-started)
