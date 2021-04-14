/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@class PocketAPI, NSString;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate> {

	PocketAPI* _pocket;
	/*^block*/id _loginHandler;

}

@property (nonatomic,retain) PocketAPI * pocket;                    //@synthesize pocket=_pocket - In the implementation block
@property (nonatomic,copy) id loginHandler;                         //@synthesize loginHandler=_loginHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)username;
-(id)resourceName;
-(unsigned long long)globalLevelStatus;
-(id)loginHandler;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLoginHandler:(id)arg1 ;
-(id)associatedAppIdentifier;
-(PocketAPI *)pocket;
-(id)protectedResourceDescription;
-(id)pocketCallbackScheme;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(BOOL)canLogOut;
-(void)logOut;
-(void)setPocket:(PocketAPI *)arg1 ;
@end

