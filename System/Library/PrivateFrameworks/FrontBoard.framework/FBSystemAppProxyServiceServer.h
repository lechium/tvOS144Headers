/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {

	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;

}
+(id)sharedInstance;
+(id)targetQueue;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_initWithQueue:(id)arg1 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActions:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
@end

