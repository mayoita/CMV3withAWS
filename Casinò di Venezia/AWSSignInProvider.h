//
//  AWSSignInProvider.h
//
//
// Copyright 2016 Amazon.com, Inc. or its affiliates (Amazon). All Rights Reserved.
//
// Code generated by AWS Mobile Hub. Amazon gives unlimited permission to 
// copy, distribute and modify it.
//
// Source code generated from template: aws-my-sample-app-ios-objc v0.6
//
#import <UIKit/UIKit.h>
#import <AWSCore/AWSCore.h>

@protocol AWSSignInProvider <AWSIdentityProvider>

@property (readonly, getter=isLoggedIn) BOOL loggedIn;
@property (readonly) NSURL *imageURL;
@property (readonly) NSString *userName;
@property (readonly) NSString *userEmail;
@property (readonly) NSString *userLocation;

- (void)login;
- (void)logout;
- (void)reloadSession;


- (BOOL)application:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;

@end
