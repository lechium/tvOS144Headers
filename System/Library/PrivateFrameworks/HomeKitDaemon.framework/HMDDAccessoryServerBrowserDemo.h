/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSDictionary;

@interface HMDDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser {

	BOOL _accessoryPaired;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableArray* _servers;
	NSDictionary* _demoData;

}

@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                                           //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) NSDictionary * demoData;                                            //@synthesize demoData=_demoData - In the implementation block
@property (assign,nonatomic) BOOL accessoryPaired;                                               //@synthesize accessoryPaired=_accessoryPaired - In the implementation block
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(long long)linkType;
-(void)setServers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)servers;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)discoverServer;
-(BOOL)accessoryPaired;
-(void)loadDemoData:(id)arg1 finalized:(BOOL)arg2 ;
-(void)appendDemoData:(id)arg1 ;
-(void)resetDemoAccessory:(id)arg1 ;
-(NSDictionary *)demoData;
-(void)setDemoData:(NSDictionary *)arg1 ;
-(void)setAccessoryPaired:(BOOL)arg1 ;
@end

