/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMReachabilityDelegate, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSString, NSObject;

@interface IMReachability : NSObject {

	BOOL _gettingFlags;
	id<IMReachabilityDelegate> _delegate;
	unsigned long long _flags;
	NSString* _description;
	void* _reachabilityRef;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) void* reachabilityRef;                                   //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,retain) NSString * reachabilityDescription;                      //@synthesize description=_description - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL gettingFlags;                                       //@synthesize gettingFlags=_gettingFlags - In the implementation block
@property (assign,nonatomic,__weak) id<IMReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL connectionRequired; 
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithRemoteAddress:(id)arg1 ;
+(id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)flags;
-(id<IMReachabilityDelegate>)delegate;
-(void)setDelegate:(id<IMReachabilityDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)connectionRequired;
-(void*)reachabilityRef;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3 ;
-(void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(id)_initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 description:(id)arg2 delegate:(id)arg3 ;
-(void)_forceGetFlagsIfNecessary;
-(BOOL)gettingFlags;
-(void)setGettingFlags:(BOOL)arg1 ;
-(NSString *)reachabilityDescription;
-(void)setReachabilityDescription:(NSString *)arg1 ;
-(void)setReachabilityRef:(void*)arg1 ;
@end

