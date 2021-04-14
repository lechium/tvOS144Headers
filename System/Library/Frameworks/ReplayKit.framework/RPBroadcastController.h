/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPBroadcastControllerDelegate;
@class NSDictionary, NSString, NSURL;

@interface RPBroadcastController : NSObject {

	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;
	NSString* _broadcastExtensionBundleIdentifier;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                     //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL; 
@property (nonatomic,retain) NSString * broadcastExtensionBundleIdentifier;                  //@synthesize broadcastExtensionBundleIdentifier=_broadcastExtensionBundleIdentifier - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                        //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(id)init;
-(id<RPBroadcastControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(BOOL)isPaused;
-(NSDictionary *)serviceInfo;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(void)setBroadcastExtensionBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)broadcastURL;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 ;
-(id)initWithCurrentSession;
-(BOOL)isBroadcasting;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSString *)broadcastExtensionBundleID;
-(NSString *)broadcastExtensionBundleIdentifier;
@end

